using System;
using System.Windows.Forms;
using System.IO;
using System.Diagnostics;

namespace RS2014_Mod_Installer
{
    public partial class GUI : Form
    {
        public GUI()
        {
            InitializeComponent();
        }

        private string rsLocation = string.Empty;

        private string WhereIsRocksmith()
        {
            if (rsLocation?.Length == 0)
                rsLocation = RSMods.Util.GenUtil.GetRSDirectory();

            return rsLocation;
        }

        private void UseModsButton_Click(object sender, EventArgs e)
        {
            string originalButtonText = UseModsButton.Text;
            UseModsButton.Text += "\n(Please wait as we get the mods setup. This should take but a moment).";

            string rsPath = WhereIsRocksmith();
            if (string.IsNullOrEmpty(rsPath))
            {
                MessageBox.Show("It looks like your current Rocksmith2014 install folder cannot be found. Please tell us where it is located!", "Error: RSLocation Not Found", MessageBoxButtons.OK, MessageBoxIcon.Error);
               
                rsPath = RSMods.Util.GenUtil.AskUserForRSFolder();

                if (string.IsNullOrEmpty(rsPath))
                {
                    MessageBox.Show("We cannot detect where you have Rocksmith located. Please try reinstalling your game on Steam.", "Error: RSLocation Not Found", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    Environment.Exit(1);
                    return;
                }

                rsLocation = rsPath;
            }

            if (DLLStuff.InjectDLL(rsPath) && DLLStuff.InjectGUI(rsPath))
            {
                string rsModsPath = Path.Combine(rsPath, "RSMods") + "\\RSMods.exe";
                MessageBox.Show("This version of the installer allows you to take advantage of the new mod settings available by opening: " + rsModsPath, "New Mod Settings Available!", MessageBoxButtons.OK, MessageBoxIcon.Information);

                Process.Start(rsModsPath);
                CreateDesktopShortcut(rsModsPath);

                Close();
            }

            UseModsButton.Text = originalButtonText;
        }

        private void CreateDesktopShortcut(string rsModsPath)
        {
            DialogResult dialogResult = MessageBox.Show("Would you like to create RSMods shortcut on your desktop?", "Create shortcut", MessageBoxButtons.YesNo);
            if (dialogResult != DialogResult.Yes)
            {
                return;
            }

            try
            {
                string deskDir = Environment.GetFolderPath(Environment.SpecialFolder.DesktopDirectory);

                using (StreamWriter writer = new StreamWriter(deskDir + @"\\RSMods.url", true))
                {
                    writer.WriteLine("[InternetShortcut]");
                    writer.WriteLine("URL=file:///" + rsModsPath);
                    writer.WriteLine("IconIndex=0");
                    string icon = rsModsPath.Replace('\\', '/');
                    writer.WriteLine("IconFile=" + icon);
                }
            }
            catch (IOException ex)
            {
                MessageBox.Show(ex.Message, "Error creating the shortcut");
            }
        }
    }
}
