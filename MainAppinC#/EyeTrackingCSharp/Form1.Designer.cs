namespace EyeTrackingCSharp
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.btnEmail = new System.Windows.Forms.Button();
            this.btnTextToSpeech = new System.Windows.Forms.Button();
            this.btnRing = new System.Windows.Forms.Button();
            this.btnKeyboard = new System.Windows.Forms.Button();
            this.btnQuit = new System.Windows.Forms.Button();
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.lblTextToSpeech = new System.Windows.Forms.Label();
            this.txtTextToSpeech = new System.Windows.Forms.TextBox();
            this.layoutMainForm = new System.Windows.Forms.TableLayoutPanel();
            this.layoutNestedTextToSpeech = new System.Windows.Forms.TableLayoutPanel();
            this.layoutMainForm.SuspendLayout();
            this.layoutNestedTextToSpeech.SuspendLayout();
            this.SuspendLayout();
            // 
            // btnEmail
            // 
            this.btnEmail.AutoEllipsis = true;
            this.btnEmail.BackColor = System.Drawing.Color.Transparent;
            this.btnEmail.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btnEmail.Dock = System.Windows.Forms.DockStyle.Fill;
            this.btnEmail.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btnEmail.Font = new System.Drawing.Font("Times New Roman", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnEmail.ForeColor = System.Drawing.Color.Aqua;
            this.btnEmail.Location = new System.Drawing.Point(3, 3);
            this.btnEmail.Name = "btnEmail";
            this.btnEmail.Size = new System.Drawing.Size(260, 219);
            this.btnEmail.TabIndex = 0;
            this.btnEmail.Text = "Email";
            this.btnEmail.UseVisualStyleBackColor = false;
            this.btnEmail.Click += new System.EventHandler(this.btnEmail_Click);
            this.btnEmail.MouseEnter += new System.EventHandler(this.btnEmail_MouseEnter);
            this.btnEmail.MouseLeave += new System.EventHandler(this.btnEmail_MouseLeave);
            // 
            // btnTextToSpeech
            // 
            this.btnTextToSpeech.BackColor = System.Drawing.Color.Transparent;
            this.btnTextToSpeech.Dock = System.Windows.Forms.DockStyle.Fill;
            this.btnTextToSpeech.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btnTextToSpeech.Font = new System.Drawing.Font("Times New Roman", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnTextToSpeech.ForeColor = System.Drawing.Color.Aqua;
            this.btnTextToSpeech.Location = new System.Drawing.Point(269, 3);
            this.btnTextToSpeech.Name = "btnTextToSpeech";
            this.btnTextToSpeech.Size = new System.Drawing.Size(260, 219);
            this.btnTextToSpeech.TabIndex = 1;
            this.btnTextToSpeech.Text = "Text to Speech";
            this.btnTextToSpeech.UseVisualStyleBackColor = false;
            this.btnTextToSpeech.Click += new System.EventHandler(this.btnTextToSpeech_Click);
            this.btnTextToSpeech.MouseEnter += new System.EventHandler(this.btnTextToSpeech_MouseEnter);
            this.btnTextToSpeech.MouseLeave += new System.EventHandler(this.btnTextToSpeech_MouseLeave);
            // 
            // btnRing
            // 
            this.btnRing.BackColor = System.Drawing.Color.Transparent;
            this.btnRing.Dock = System.Windows.Forms.DockStyle.Fill;
            this.btnRing.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btnRing.Font = new System.Drawing.Font("Times New Roman", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnRing.ForeColor = System.Drawing.Color.Aqua;
            this.btnRing.Location = new System.Drawing.Point(535, 3);
            this.btnRing.Name = "btnRing";
            this.btnRing.Size = new System.Drawing.Size(262, 219);
            this.btnRing.TabIndex = 4;
            this.btnRing.Text = "Ring";
            this.btnRing.UseVisualStyleBackColor = false;
            this.btnRing.Click += new System.EventHandler(this.btnRing_Click);
            this.btnRing.MouseEnter += new System.EventHandler(this.btnRing_MouseEnter);
            this.btnRing.MouseLeave += new System.EventHandler(this.btnRing_MouseLeave);
            // 
            // btnKeyboard
            // 
            this.btnKeyboard.BackColor = System.Drawing.Color.Transparent;
            this.btnKeyboard.Dock = System.Windows.Forms.DockStyle.Fill;
            this.btnKeyboard.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btnKeyboard.Font = new System.Drawing.Font("Times New Roman", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnKeyboard.ForeColor = System.Drawing.Color.Aqua;
            this.btnKeyboard.Location = new System.Drawing.Point(3, 228);
            this.btnKeyboard.Name = "btnKeyboard";
            this.btnKeyboard.Size = new System.Drawing.Size(260, 219);
            this.btnKeyboard.TabIndex = 2;
            this.btnKeyboard.Text = "Keyboard";
            this.btnKeyboard.UseVisualStyleBackColor = false;
            this.btnKeyboard.Click += new System.EventHandler(this.btnKeyboard_Click);
            this.btnKeyboard.MouseEnter += new System.EventHandler(this.btnKeyboard_MouseEnter);
            this.btnKeyboard.MouseLeave += new System.EventHandler(this.btnKeyboard_MouseLeave);
            // 
            // btnQuit
            // 
            this.btnQuit.BackColor = System.Drawing.Color.Transparent;
            this.btnQuit.Dock = System.Windows.Forms.DockStyle.Fill;
            this.btnQuit.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btnQuit.Font = new System.Drawing.Font("Times New Roman", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnQuit.ForeColor = System.Drawing.Color.Aqua;
            this.btnQuit.Location = new System.Drawing.Point(535, 228);
            this.btnQuit.Name = "btnQuit";
            this.btnQuit.Size = new System.Drawing.Size(262, 219);
            this.btnQuit.TabIndex = 3;
            this.btnQuit.Text = "Quit";
            this.btnQuit.UseVisualStyleBackColor = false;
            this.btnQuit.Click += new System.EventHandler(this.btnQuit_Click);
            this.btnQuit.MouseEnter += new System.EventHandler(this.btnQuit_MouseEnter);
            this.btnQuit.MouseLeave += new System.EventHandler(this.btnQuit_MouseLeave);
            // 
            // timer1
            // 
            this.timer1.Interval = 1000;
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // lblTextToSpeech
            // 
            this.lblTextToSpeech.AutoSize = true;
            this.lblTextToSpeech.BackColor = System.Drawing.Color.Transparent;
            this.lblTextToSpeech.Dock = System.Windows.Forms.DockStyle.Fill;
            this.lblTextToSpeech.Font = new System.Drawing.Font("Times New Roman", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblTextToSpeech.ForeColor = System.Drawing.Color.Aqua;
            this.lblTextToSpeech.Location = new System.Drawing.Point(3, 0);
            this.lblTextToSpeech.Name = "lblTextToSpeech";
            this.lblTextToSpeech.Size = new System.Drawing.Size(254, 109);
            this.lblTextToSpeech.TabIndex = 6;
            this.lblTextToSpeech.Text = "Click Keyboard Box to Change Text or Type Below";
            this.lblTextToSpeech.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // txtTextToSpeech
            // 
            this.txtTextToSpeech.BackColor = System.Drawing.Color.Black;
            this.txtTextToSpeech.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.txtTextToSpeech.Dock = System.Windows.Forms.DockStyle.Fill;
            this.txtTextToSpeech.Font = new System.Drawing.Font("Times New Roman", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.txtTextToSpeech.ForeColor = System.Drawing.Color.White;
            this.txtTextToSpeech.Location = new System.Drawing.Point(3, 112);
            this.txtTextToSpeech.Multiline = true;
            this.txtTextToSpeech.Name = "txtTextToSpeech";
            this.txtTextToSpeech.Size = new System.Drawing.Size(254, 104);
            this.txtTextToSpeech.TabIndex = 5;
            this.txtTextToSpeech.Text = "Type Your Text Here";
            this.txtTextToSpeech.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // layoutMainForm
            // 
            this.layoutMainForm.AutoSize = true;
            this.layoutMainForm.BackColor = System.Drawing.Color.Transparent;
            this.layoutMainForm.ColumnCount = 3;
            this.layoutMainForm.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 33.33333F));
            this.layoutMainForm.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 33.33333F));
            this.layoutMainForm.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 33.33333F));
            this.layoutMainForm.Controls.Add(this.layoutNestedTextToSpeech, 1, 1);
            this.layoutMainForm.Controls.Add(this.btnEmail, 0, 0);
            this.layoutMainForm.Controls.Add(this.btnTextToSpeech, 1, 0);
            this.layoutMainForm.Controls.Add(this.btnRing, 2, 0);
            this.layoutMainForm.Controls.Add(this.btnKeyboard, 0, 1);
            this.layoutMainForm.Controls.Add(this.btnQuit, 2, 1);
            this.layoutMainForm.Dock = System.Windows.Forms.DockStyle.Fill;
            this.layoutMainForm.Location = new System.Drawing.Point(0, 0);
            this.layoutMainForm.Name = "layoutMainForm";
            this.layoutMainForm.RowCount = 2;
            this.layoutMainForm.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 50F));
            this.layoutMainForm.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 50F));
            this.layoutMainForm.Size = new System.Drawing.Size(800, 450);
            this.layoutMainForm.TabIndex = 8;
            // 
            // layoutNestedTextToSpeech
            // 
            this.layoutNestedTextToSpeech.BackColor = System.Drawing.Color.Transparent;
            this.layoutNestedTextToSpeech.ColumnCount = 1;
            this.layoutNestedTextToSpeech.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 50F));
            this.layoutNestedTextToSpeech.Controls.Add(this.lblTextToSpeech, 0, 0);
            this.layoutNestedTextToSpeech.Controls.Add(this.txtTextToSpeech, 0, 1);
            this.layoutNestedTextToSpeech.Dock = System.Windows.Forms.DockStyle.Fill;
            this.layoutNestedTextToSpeech.Location = new System.Drawing.Point(269, 228);
            this.layoutNestedTextToSpeech.Name = "layoutNestedTextToSpeech";
            this.layoutNestedTextToSpeech.RowCount = 2;
            this.layoutNestedTextToSpeech.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 50F));
            this.layoutNestedTextToSpeech.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 50F));
            this.layoutNestedTextToSpeech.Size = new System.Drawing.Size(260, 219);
            this.layoutNestedTextToSpeech.TabIndex = 8;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = global::EyeTrackingCSharp.Properties.Resources.backgroundBlue2;
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.layoutMainForm);
            this.DoubleBuffered = true;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "Form1";
            this.Text = "Eye Tracking";
            this.WindowState = System.Windows.Forms.FormWindowState.Maximized;
            this.Load += new System.EventHandler(this.Form1_Load);
            this.layoutMainForm.ResumeLayout(false);
            this.layoutNestedTextToSpeech.ResumeLayout(false);
            this.layoutNestedTextToSpeech.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btnEmail;
        private System.Windows.Forms.Button btnTextToSpeech;
        private System.Windows.Forms.Button btnRing;
        private System.Windows.Forms.Button btnKeyboard;
        private System.Windows.Forms.Button btnQuit;
        private System.Windows.Forms.Timer timer1;
        private System.Windows.Forms.Label lblTextToSpeech;
        private System.Windows.Forms.TextBox txtTextToSpeech;
        private System.Windows.Forms.TableLayoutPanel layoutMainForm;
        private System.Windows.Forms.TableLayoutPanel layoutNestedTextToSpeech;
    }
}

