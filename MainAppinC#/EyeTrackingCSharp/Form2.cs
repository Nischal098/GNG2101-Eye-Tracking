using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace EyeTrackingCSharp
{
    public partial class Form2 : Form
    {
        private bool isClicked;
        private int selectedButton;
        private int timerCounter;
        private System.Media.SoundPlayer player;
        private Form1 frm1;
        public Form2(Form1 frm)
        {
            InitializeComponent();
            player = new System.Media.SoundPlayer();
            isClicked = false;
            this.frm1 = frm;
            
        }
        private void Form2_Load(object sender, EventArgs e)
        {
            Cursor.Hide();
        }
        private void resetTimerCounter()
        {
            timerCounter = 0;
        }
        private void timer2_Tick(object sender, EventArgs e)
        {
            timerCounter++;

            if (timerCounter == 2)
            {
                switch (selectedButton)
                {
                    case 1:
                        btn1.PerformClick();
                        break;
                    case 2:
                        btn2.PerformClick();
                        break;
                    case 3:
                        btn3.PerformClick();
                        break;
                    case 4:
                        btn4.PerformClick();
                        break;
                    case 5:
                        btn5.PerformClick();
                        break;
                    case 6:
                        btn6.PerformClick();
                        break;
                    case 7:
                        btn7.PerformClick();
                        break;
                    case 8:
                        btn8.PerformClick();
                        break;
                    case 0:
                        break;
                    default:
                        break;
                }
            }
        }
        //---------------------------------------------------------------
        private void btn1_Click(object sender, EventArgs e)
        {
            resetTimerCounter();
            player.SoundLocation = "MenuClick.wav";
            player.Load();
            player.Play();
            if (isClicked)
            {
                setDefaultKeys();
                isClicked = false;
            }
            else
            {
                isClicked = true;
                btn1.Text = "Back";
                btn2.Text = "A";
                btn3.Text = "B";
                btn4.Text = "C";
                btn5.Text = "D";
                btn6.Text = "E";
                btn7.Text = "F";
                btn8.Text = "G";
            }
        }

        private void btn2_Click(object sender, EventArgs e)
        {
            resetTimerCounter();
            player.SoundLocation = "MenuClick.wav";
            player.Load();
            player.Play();
            if (isClicked)
            {
                lblOutput.Text += btn2.Text.ToString();
            }
            else
            {
                isClicked = true;
                btn1.Text = "Back";
                btn2.Text = "H";
                btn3.Text = "I";
                btn4.Text = "J";
                btn5.Text = "K";
                btn6.Text = "L";
                btn7.Text = "M";
                btn8.Text = "N";
            }
        }

        private void btn3_Click(object sender, EventArgs e)
        {
            resetTimerCounter();
            player.SoundLocation = "MenuClick.wav";
            player.Load();
            player.Play();
            if (isClicked)
            {
                lblOutput.Text += btn3.Text.ToString();
            }
            else
            {
                isClicked = true; btn1.Text = "Back";
                btn2.Text = "O";
                btn3.Text = "P";
                btn4.Text = "Q";
                btn5.Text = "R";
                btn6.Text = "S";
                btn7.Text = "T";
                btn8.Text = "U";
            }
        }

        private void btn4_Click(object sender, EventArgs e)
        {
            resetTimerCounter();
            player.SoundLocation = "MenuClick.wav";
            player.Load();
            player.Play();
            if (isClicked)
            {
                lblOutput.Text += btn4.Text.ToString();
            }
            else
            {
                isClicked = true; btn1.Text = "Back";
                btn2.Text = "V";
                btn3.Text = "W";
                btn4.Text = "X";
                btn5.Text = "Y";
                btn6.Text = "Z";
                btn7.Text = "(space)";
                btn8.Text = "(backspace)";
            }
        }

        private void btn5_Click(object sender, EventArgs e)
        {
            resetTimerCounter();
            player.SoundLocation = "MenuClick.wav";
            player.Load();
            player.Play();
            if (isClicked)
            {
                lblOutput.Text += btn5.Text.ToString();
            }
            else
            {
                isClicked = true; btn1.Text = "Back";
                btn2.Text = "0";
                btn3.Text = "1";
                btn4.Text = "2";
                btn5.Text = "3";
                btn6.Text = "4";
                btn7.Text = "5";
                btn8.Text = "6";
            }
        }

        private void btn6_Click(object sender, EventArgs e)
        {
            resetTimerCounter();
            player.SoundLocation = "MenuClick.wav";
            player.Load();
            player.Play();
            if (isClicked)
            {
                lblOutput.Text += btn6.Text.ToString();
            }
            else
            {
                isClicked = true; btn1.Text = "Back";
                btn2.Text = "7";
                btn3.Text = "8";
                btn4.Text = "9";
                btn5.Text = " ";
                btn6.Text = " ";
                btn7.Text = " ";
                btn8.Text = " ";
            }
        }

        private void btn7_Click(object sender, EventArgs e)
        {
            resetTimerCounter();
            player.SoundLocation = "MenuClick.wav";
            player.Load();
            player.Play();
            if (isClicked)
            {
                if (btn7.Text == ("(space)"))
                {

                    lblOutput.Text += " ";
                }
                else
                {
                    lblOutput.Text += btn7.Text.ToString();
                }
            }
            else
            {
                isClicked = true; btn1.Text = "Back";
                btn2.Text = ".";
                btn3.Text = ",";
                btn4.Text = "$";
                btn5.Text = "@";
                btn6.Text = "?";
                btn7.Text = "'";
                btn8.Text = "-";
            }
        }

        private void btn8_Click(object sender, EventArgs e)
        {
            resetTimerCounter();
            player.SoundLocation = "MenuClick.wav";
            player.Load();
            player.Play();
            if (isClicked)
            {
                if (btn8.Text == ("(backspace)"))
                {
                    string tempVal = lblOutput.Text.ToString();
                    lblOutput.Text = tempVal.Remove(tempVal.Length-1);
                }
                else
                {
                    lblOutput.Text += btn8.Text.ToString();
                }

            }
            else
            {
                isClicked = true;
                string outputVal = lblOutput.Text.ToString();
                outputVal = outputVal.Remove(0, 16);
                outputVal = outputVal.ToLower();
                frm1.setTextBox(outputVal);
                this.Close();
            }
        }
        //--------------------------------------------------------------------
        private void setDefaultKeys()
        {
            btn1.Text = "A-G";
            btn2.Text = "H-N";
            btn3.Text = "O-U";
            btn4.Text = "V-Z";
            btn5.Text = "0-6";
            btn6.Text = "7-9";
            btn7.Text = "Specials";
            btn8.Text = "Return";
        }
        //------------------------------------------------------------------------
        private void btn1_MouseEnter(object sender, EventArgs e)
        {
            btn1.BackColor = Color.Teal;
            selectedButton = 1;
            player.SoundLocation = "MenuSelect.wav";
            player.Load();
            player.Play();
            timer2.Start();
        }

        private void btn2_MouseEnter(object sender, EventArgs e)
        {
            btn2.BackColor = Color.Teal;
            selectedButton = 2 ;
            player.SoundLocation = "MenuSelect.wav";
            player.Load();
            player.Play();
            timer2.Start();
        }

        private void btn3_MouseEnter(object sender, EventArgs e)
        {
            btn3.BackColor = Color.Teal;
            selectedButton = 3;
            player.SoundLocation = "MenuSelect.wav";
            player.Load();
            player.Play();
            timer2.Start();
        }

        private void btn4_MouseEnter(object sender, EventArgs e)
        {
            btn4.BackColor = Color.Teal;
            selectedButton = 4;
            player.SoundLocation = "MenuSelect.wav";
            player.Load();
            player.Play();
            timer2.Start();
        }

        private void btn5_MouseEnter(object sender, EventArgs e)
        {
            btn5.BackColor = Color.Teal;
            selectedButton = 5;
            player.SoundLocation = "MenuSelect.wav";
            player.Load();
            player.Play();
            timer2.Start();
        }

        private void btn6_MouseEnter(object sender, EventArgs e)
        {
            btn6.BackColor = Color.Teal;
            selectedButton = 6;
            player.SoundLocation = "MenuSelect.wav";
            player.Load();
            player.Play();
            timer2.Start();
        }

        private void btn7_MouseEnter(object sender, EventArgs e)
        {
            btn7.BackColor = Color.Teal;
            selectedButton = 7;
            player.SoundLocation = "MenuSelect.wav";
            player.Load();
            player.Play();
            timer2.Start();
        }

        private void btn8_MouseEnter(object sender, EventArgs e)
        {
            btn8.BackColor = Color.Teal;
            selectedButton = 8;
            player.SoundLocation = "MenuSelect.wav";
            player.Load();
            player.Play();
            timer2.Start();
        }


        //------------------------------------------------------------------------

        private void btn1_MouseLeave(object sender, EventArgs e)
        {
            btn1.BackColor = Color.Transparent;
            selectedButton = 0;
            timer2.Stop();
            resetTimerCounter();
        }

        private void btn2_MouseLeave(object sender, EventArgs e)
        {
            btn2.BackColor = Color.Transparent;
            selectedButton = 0;
            timer2.Stop();
            resetTimerCounter();
        }

        private void btn3_MouseLeave(object sender, EventArgs e)
        {
            btn3.BackColor = Color.Transparent;
            selectedButton = 0;
            timer2.Stop();
            resetTimerCounter();
        }

        private void btn4_MouseLeave(object sender, EventArgs e)
        {
            btn4.BackColor = Color.Transparent;
            selectedButton = 0;
            timer2.Stop();
            resetTimerCounter();
        }

        private void btn5_MouseLeave(object sender, EventArgs e)
        {
            btn5.BackColor = Color.Transparent;
            selectedButton = 0;
            timer2.Stop();
            resetTimerCounter();
        }

        private void btn6_MouseLeave(object sender, EventArgs e)
        {
            btn6.BackColor = Color.Transparent;
            selectedButton = 0;
            timer2.Stop();
            resetTimerCounter();
        }

        private void btn7_MouseLeave(object sender, EventArgs e)
        {
            btn7.BackColor = Color.Transparent;
            selectedButton = 0;
            timer2.Stop();
            resetTimerCounter();
        }

        private void btn8_MouseLeave(object sender, EventArgs e)
        {
            btn8.BackColor = Color.Transparent;
            selectedButton = 0;
            timer2.Stop();
            resetTimerCounter();
        }
    }
}

