namespace EyeTrackingCSharp
{
    partial class Form2
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form2));
            this.btn1 = new System.Windows.Forms.Button();
            this.btn2 = new System.Windows.Forms.Button();
            this.btn3 = new System.Windows.Forms.Button();
            this.btn5 = new System.Windows.Forms.Button();
            this.timer2 = new System.Windows.Forms.Timer(this.components);
            this.layoutMainForm = new System.Windows.Forms.TableLayoutPanel();
            this.btn6 = new System.Windows.Forms.Button();
            this.btn4 = new System.Windows.Forms.Button();
            this.btn7 = new System.Windows.Forms.Button();
            this.btn8 = new System.Windows.Forms.Button();
            this.lblOutput = new System.Windows.Forms.Label();
            this.layoutMainForm.SuspendLayout();
            this.SuspendLayout();
            // 
            // btn1
            // 
            this.btn1.AutoEllipsis = true;
            this.btn1.BackColor = System.Drawing.Color.Transparent;
            this.btn1.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btn1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.btn1.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btn1.Font = new System.Drawing.Font("Times New Roman", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn1.ForeColor = System.Drawing.Color.Aqua;
            this.btn1.Location = new System.Drawing.Point(3, 3);
            this.btn1.Name = "btn1";
            this.btn1.Size = new System.Drawing.Size(194, 203);
            this.btn1.TabIndex = 0;
            this.btn1.Text = "A-G";
            this.btn1.UseVisualStyleBackColor = false;
            this.btn1.Click += new System.EventHandler(this.btn1_Click);
            this.btn1.MouseEnter += new System.EventHandler(this.btn1_MouseEnter);
            this.btn1.MouseLeave += new System.EventHandler(this.btn1_MouseLeave);
            // 
            // btn2
            // 
            this.btn2.BackColor = System.Drawing.Color.Transparent;
            this.btn2.Dock = System.Windows.Forms.DockStyle.Fill;
            this.btn2.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btn2.Font = new System.Drawing.Font("Times New Roman", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn2.ForeColor = System.Drawing.Color.Aqua;
            this.btn2.Location = new System.Drawing.Point(203, 3);
            this.btn2.Name = "btn2";
            this.btn2.Size = new System.Drawing.Size(194, 203);
            this.btn2.TabIndex = 1;
            this.btn2.Text = "H-N";
            this.btn2.UseVisualStyleBackColor = false;
            this.btn2.Click += new System.EventHandler(this.btn2_Click);
            this.btn2.MouseEnter += new System.EventHandler(this.btn2_MouseEnter);
            this.btn2.MouseLeave += new System.EventHandler(this.btn2_MouseLeave);
            // 
            // btn3
            // 
            this.btn3.BackColor = System.Drawing.Color.Transparent;
            this.btn3.Dock = System.Windows.Forms.DockStyle.Fill;
            this.btn3.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btn3.Font = new System.Drawing.Font("Times New Roman", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn3.ForeColor = System.Drawing.Color.Aqua;
            this.btn3.Location = new System.Drawing.Point(403, 3);
            this.btn3.Name = "btn3";
            this.btn3.Size = new System.Drawing.Size(194, 203);
            this.btn3.TabIndex = 4;
            this.btn3.Text = "O-U";
            this.btn3.UseVisualStyleBackColor = false;
            this.btn3.Click += new System.EventHandler(this.btn3_Click);
            this.btn3.MouseEnter += new System.EventHandler(this.btn3_MouseEnter);
            this.btn3.MouseLeave += new System.EventHandler(this.btn3_MouseLeave);
            // 
            // btn5
            // 
            this.btn5.BackColor = System.Drawing.Color.Transparent;
            this.btn5.Dock = System.Windows.Forms.DockStyle.Fill;
            this.btn5.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btn5.Font = new System.Drawing.Font("Times New Roman", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn5.ForeColor = System.Drawing.Color.Aqua;
            this.btn5.Location = new System.Drawing.Point(3, 212);
            this.btn5.Name = "btn5";
            this.btn5.Size = new System.Drawing.Size(194, 204);
            this.btn5.TabIndex = 2;
            this.btn5.Text = "0-6";
            this.btn5.UseVisualStyleBackColor = false;
            this.btn5.Click += new System.EventHandler(this.btn5_Click);
            this.btn5.MouseEnter += new System.EventHandler(this.btn5_MouseEnter);
            this.btn5.MouseLeave += new System.EventHandler(this.btn5_MouseLeave);
            // 
            // timer2
            // 
            this.timer2.Interval = 420;
            this.timer2.Tick += new System.EventHandler(this.timer2_Tick);
            // 
            // layoutMainForm
            // 
            this.layoutMainForm.AutoSize = true;
            this.layoutMainForm.BackColor = System.Drawing.Color.Transparent;
            this.layoutMainForm.ColumnCount = 4;
            this.layoutMainForm.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 25F));
            this.layoutMainForm.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 25F));
            this.layoutMainForm.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 25F));
            this.layoutMainForm.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 25F));
            this.layoutMainForm.Controls.Add(this.btn6, 1, 1);
            this.layoutMainForm.Controls.Add(this.btn4, 3, 0);
            this.layoutMainForm.Controls.Add(this.btn7, 2, 1);
            this.layoutMainForm.Controls.Add(this.btn8, 3, 1);
            this.layoutMainForm.Controls.Add(this.btn1, 0, 0);
            this.layoutMainForm.Controls.Add(this.btn2, 1, 0);
            this.layoutMainForm.Controls.Add(this.btn3, 2, 0);
            this.layoutMainForm.Controls.Add(this.btn5, 0, 1);
            this.layoutMainForm.Dock = System.Windows.Forms.DockStyle.Fill;
            this.layoutMainForm.Location = new System.Drawing.Point(0, 31);
            this.layoutMainForm.Name = "layoutMainForm";
            this.layoutMainForm.RowCount = 2;
            this.layoutMainForm.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 50F));
            this.layoutMainForm.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 50F));
            this.layoutMainForm.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Absolute, 20F));
            this.layoutMainForm.Size = new System.Drawing.Size(800, 419);
            this.layoutMainForm.TabIndex = 10;
            // 
            // btn6
            // 
            this.btn6.BackColor = System.Drawing.Color.Transparent;
            this.btn6.Dock = System.Windows.Forms.DockStyle.Fill;
            this.btn6.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btn6.Font = new System.Drawing.Font("Times New Roman", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn6.ForeColor = System.Drawing.Color.Aqua;
            this.btn6.Location = new System.Drawing.Point(203, 212);
            this.btn6.Name = "btn6";
            this.btn6.Size = new System.Drawing.Size(194, 204);
            this.btn6.TabIndex = 12;
            this.btn6.Text = "7-9";
            this.btn6.UseVisualStyleBackColor = false;
            this.btn6.Click += new System.EventHandler(this.btn6_Click);
            this.btn6.MouseEnter += new System.EventHandler(this.btn6_MouseEnter);
            this.btn6.MouseLeave += new System.EventHandler(this.btn6_MouseLeave);
            // 
            // btn4
            // 
            this.btn4.BackColor = System.Drawing.Color.Transparent;
            this.btn4.Dock = System.Windows.Forms.DockStyle.Fill;
            this.btn4.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btn4.Font = new System.Drawing.Font("Times New Roman", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn4.ForeColor = System.Drawing.Color.Aqua;
            this.btn4.Location = new System.Drawing.Point(603, 3);
            this.btn4.Name = "btn4";
            this.btn4.Size = new System.Drawing.Size(194, 203);
            this.btn4.TabIndex = 9;
            this.btn4.Text = "V-Z";
            this.btn4.UseVisualStyleBackColor = false;
            this.btn4.Click += new System.EventHandler(this.btn4_Click);
            this.btn4.MouseEnter += new System.EventHandler(this.btn4_MouseEnter);
            this.btn4.MouseLeave += new System.EventHandler(this.btn4_MouseLeave);
            // 
            // btn7
            // 
            this.btn7.BackColor = System.Drawing.Color.Transparent;
            this.btn7.Dock = System.Windows.Forms.DockStyle.Fill;
            this.btn7.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btn7.Font = new System.Drawing.Font("Times New Roman", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn7.ForeColor = System.Drawing.Color.Aqua;
            this.btn7.Location = new System.Drawing.Point(403, 212);
            this.btn7.Name = "btn7";
            this.btn7.Size = new System.Drawing.Size(194, 204);
            this.btn7.TabIndex = 11;
            this.btn7.Text = "Specials";
            this.btn7.UseVisualStyleBackColor = false;
            this.btn7.Click += new System.EventHandler(this.btn7_Click);
            this.btn7.MouseEnter += new System.EventHandler(this.btn7_MouseEnter);
            this.btn7.MouseLeave += new System.EventHandler(this.btn7_MouseLeave);
            // 
            // btn8
            // 
            this.btn8.BackColor = System.Drawing.Color.Transparent;
            this.btn8.Dock = System.Windows.Forms.DockStyle.Fill;
            this.btn8.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btn8.Font = new System.Drawing.Font("Times New Roman", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn8.ForeColor = System.Drawing.Color.Aqua;
            this.btn8.Location = new System.Drawing.Point(603, 212);
            this.btn8.Name = "btn8";
            this.btn8.Size = new System.Drawing.Size(194, 204);
            this.btn8.TabIndex = 10;
            this.btn8.Text = "Return";
            this.btn8.UseVisualStyleBackColor = false;
            this.btn8.Click += new System.EventHandler(this.btn8_Click);
            this.btn8.MouseEnter += new System.EventHandler(this.btn8_MouseEnter);
            this.btn8.MouseLeave += new System.EventHandler(this.btn8_MouseLeave);
            // 
            // lblOutput
            // 
            this.lblOutput.AutoSize = true;
            this.lblOutput.BackColor = System.Drawing.Color.Transparent;
            this.lblOutput.Dock = System.Windows.Forms.DockStyle.Top;
            this.lblOutput.Font = new System.Drawing.Font("Times New Roman", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lblOutput.ForeColor = System.Drawing.Color.Aqua;
            this.lblOutput.Location = new System.Drawing.Point(0, 0);
            this.lblOutput.Name = "lblOutput";
            this.lblOutput.Size = new System.Drawing.Size(174, 31);
            this.lblOutput.TabIndex = 11;
            this.lblOutput.Text = "It will Return: ";
            // 
            // Form2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = global::EyeTrackingCSharp.Properties.Resources.backgroundBlue2;
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.layoutMainForm);
            this.Controls.Add(this.lblOutput);
            this.DoubleBuffered = true;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "Form2";
            this.Text = "Keyboard";
            this.WindowState = System.Windows.Forms.FormWindowState.Maximized;
            this.Load += new System.EventHandler(this.Form2_Load);
            this.layoutMainForm.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btn1;
        private System.Windows.Forms.Button btn2;
        private System.Windows.Forms.Button btn3;
        private System.Windows.Forms.Button btn5;
        private System.Windows.Forms.Timer timer2;
        private System.Windows.Forms.TableLayoutPanel layoutMainForm;
        private System.Windows.Forms.Button btn6;
        private System.Windows.Forms.Button btn4;
        private System.Windows.Forms.Button btn7;
        private System.Windows.Forms.Button btn8;
        private System.Windows.Forms.Label lblOutput;
    }
}