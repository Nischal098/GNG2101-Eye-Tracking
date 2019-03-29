using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Speech.Synthesis;

namespace EyeTrackingCSharp
{
    public partial class Form1 : Form
    {
        
        private int selectedButton;
        private int timerCounter;
        private System.Media.SoundPlayer player;
        private SpeechSynthesizer synth;
        public Form1()
        {
            InitializeComponent();
            player = new System.Media.SoundPlayer();
            synth = new SpeechSynthesizer();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            Cursor.Hide();
        }

        //------------------------------------------------------------------------------------------------------------------------
        private void btnEmail_MouseEnter(object sender, EventArgs e)
        {
            btnEmail.BackColor = Color.Teal;
            selectedButton = 1;
            player.SoundLocation = "MenuSelect.wav";
            player.Load();
            player.Play();
            timer1.Start();
        }

        private void btnTextToSpeech_MouseEnter(object sender, EventArgs e)
        {
            resetTimerCounter();
            btnTextToSpeech.BackColor = Color.Teal;
            selectedButton = 2;
            player.SoundLocation = "MenuSelect.wav";
            player.Load();
            player.Play();
            timer1.Start();
        }

        private void btnKeyboard_MouseEnter(object sender, EventArgs e)
        {
            btnKeyboard.BackColor = Color.Teal; ;
            selectedButton = 3;
            player.SoundLocation = "MenuSelect.wav";
            player.Load();
            player.Play();
            timer1.Start();
        }

        private void btnQuit_MouseEnter(object sender, EventArgs e)
        {
            btnQuit.BackColor = Color.Teal; 
            selectedButton = -1;
            player.SoundLocation = "MenuSelect.wav";
            player.Load();
            player.Play();
            timer1.Start();
        }
        private void btnRing_MouseEnter(object sender, EventArgs e)
        {
            btnRing.BackColor = Color.Teal;
            selectedButton = 4;
            player.SoundLocation = "MenuSelect.wav";
            player.Load();
            player.Play();
            timer1.Start();
        }
        //-------------------------------------------------------------------------------
        private void btnEmail_Click(object sender, EventArgs e)
        {
            //btnEmail.ForeColor = Color.Lime;
            player.SoundLocation = "MenuClick.wav";
            player.Load();
            player.Play();
        }
        private void btnQuit_Click(object sender, EventArgs e)
        {
            player.SoundLocation = "MenuClick.wav";
            player.Load();
            player.Play();
            btnQuit.ForeColor = Color.Lime;
            MessageBox.Show("Program Will Now Close");
            Application.Exit();
        }
        private void btnTextToSpeech_Click(object sender, EventArgs e)
        {
            //btnTextToSpeech.ForeColor = Color.Lime;
            player.SoundLocation = "MenuClick.wav";
            player.Load();
            player.Play();

            synth.SetOutputToDefaultAudioDevice();
            synth.Speak(txtTextToSpeech.Text);
        }
        private void btnKeyboard_Click(object sender, EventArgs e)
        {
            //btnKeyboard.ForeColor = Color.Lime;
            player.SoundLocation = "MenuClick.wav";
            player.Load();
            player.Play();

            //this.Hide();
            Form2 keyForm = new Form2(this);
            keyForm.ShowDialog();
        }
        private void btnRing_Click(object sender, EventArgs e)
        {
            //btnRing.ForeColor = Color.Lime;
            player.SoundLocation = "RingBeep.wav";
            player.Load();
            player.PlaySync();
            btnRing.Text = "Ring Again";
            resetTimerCounter();
        }
        private void resetTimerCounter()
        {
            timerCounter = 0;
        }
        //----------------------------------------------------------------------------------------
        private void btnEmail_MouseLeave(object sender, EventArgs e)
        {
            btnEmail.BackColor = Color.Transparent;
            selectedButton = 0;
            timer1.Stop();
            resetTimerCounter();
        }

        private void btnTextToSpeech_MouseLeave(object sender, EventArgs e)
        {
            btnTextToSpeech.BackColor = Color.Transparent;
            selectedButton = 0;
            timer1.Stop();
            resetTimerCounter();
        }

        private void btnKeyboard_MouseLeave(object sender, EventArgs e)
        {
            btnKeyboard.BackColor = Color.Transparent;
            selectedButton = 0;
            timer1.Stop();
            resetTimerCounter();
        }

        private void btnRing_MouseLeave(object sender, EventArgs e)
        {
            btnRing.BackColor = Color.Transparent;
            selectedButton = 0;
            timer1.Stop();
            resetTimerCounter();
        }

        private void btnQuit_MouseLeave(object sender, EventArgs e)
        {
            btnQuit.BackColor = Color.Transparent;
            selectedButton = 0;
            timer1.Stop();
            resetTimerCounter();
        }
        //-------------------------------------------------------------------
        private void timer1_Tick(object sender, EventArgs e)
        {
            timerCounter++;

            if (timerCounter == 1)
            {
                switch (selectedButton)
                {
                    case -1:
                        btnQuit.PerformClick();
                        break;
                    case 1:
                        btnEmail.PerformClick();
                        break;
                    case 2:
                        btnTextToSpeech.PerformClick();
                        break;
                    case 3:
                        btnKeyboard.PerformClick();
                        break;
                    case 4:
                        btnRing.PerformClick();
                        break;
                    case 0:
                        break;
                    default:
                        break;
                }
            }
        }
        public void setTextBox(String str)
        {
            txtTextToSpeech.Text = str;
        }
    }
}
