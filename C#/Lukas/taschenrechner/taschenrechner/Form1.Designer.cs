namespace taschenrechner
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
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
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            textBox_input = new TextBox();
            textBox_output = new TextBox();
            tableLayoutPanel1 = new TableLayoutPanel();
            button_equals = new Button();
            button_delete = new Button();
            button_point = new Button();
            button_null = new Button();
            button_plus = new Button();
            button_three = new Button();
            button_two = new Button();
            button_one = new Button();
            button_four = new Button();
            button_five = new Button();
            button_six = new Button();
            button_minus = new Button();
            button_nine = new Button();
            button_multiply = new Button();
            button_eight = new Button();
            button_seven = new Button();
            button_divide = new Button();
            button_rightBracket = new Button();
            button_leftBracket = new Button();
            button_ac = new Button();
            tableLayoutPanel1.SuspendLayout();
            SuspendLayout();
            // 
            // textBox_input
            // 
            textBox_input.BackColor = SystemColors.Control;
            textBox_input.Dock = DockStyle.Top;
            textBox_input.Font = new Font("Segoe UI", 16F);
            textBox_input.ForeColor = SystemColors.WindowText;
            textBox_input.Location = new Point(0, 0);
            textBox_input.Margin = new Padding(3, 5, 3, 3);
            textBox_input.Multiline = true;
            textBox_input.Name = "textBox_input";
            textBox_input.ReadOnly = true;
            textBox_input.ScrollBars = ScrollBars.Vertical;
            textBox_input.Size = new Size(678, 116);
            textBox_input.TabIndex = 20;
            textBox_input.TextChanged += textBox_input_TextChanged;
            // 
            // textBox_output
            // 
            textBox_output.Dock = DockStyle.Top;
            textBox_output.Font = new Font("Segoe UI", 16F);
            textBox_output.Location = new Point(0, 116);
            textBox_output.Multiline = true;
            textBox_output.Name = "textBox_output";
            textBox_output.ReadOnly = true;
            textBox_output.Size = new Size(678, 112);
            textBox_output.TabIndex = 22;
            textBox_output.TextAlign = HorizontalAlignment.Right;
            // 
            // tableLayoutPanel1
            // 
            tableLayoutPanel1.ColumnCount = 4;
            tableLayoutPanel1.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 25F));
            tableLayoutPanel1.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 25F));
            tableLayoutPanel1.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 25F));
            tableLayoutPanel1.ColumnStyles.Add(new ColumnStyle(SizeType.Percent, 25F));
            tableLayoutPanel1.Controls.Add(button_equals, 3, 4);
            tableLayoutPanel1.Controls.Add(button_delete, 2, 4);
            tableLayoutPanel1.Controls.Add(button_point, 1, 4);
            tableLayoutPanel1.Controls.Add(button_null, 0, 4);
            tableLayoutPanel1.Controls.Add(button_plus, 3, 3);
            tableLayoutPanel1.Controls.Add(button_three, 2, 3);
            tableLayoutPanel1.Controls.Add(button_two, 1, 3);
            tableLayoutPanel1.Controls.Add(button_one, 0, 3);
            tableLayoutPanel1.Controls.Add(button_four, 0, 2);
            tableLayoutPanel1.Controls.Add(button_five, 1, 2);
            tableLayoutPanel1.Controls.Add(button_six, 2, 2);
            tableLayoutPanel1.Controls.Add(button_minus, 3, 2);
            tableLayoutPanel1.Controls.Add(button_nine, 2, 1);
            tableLayoutPanel1.Controls.Add(button_multiply, 3, 1);
            tableLayoutPanel1.Controls.Add(button_eight, 1, 1);
            tableLayoutPanel1.Controls.Add(button_seven, 0, 1);
            tableLayoutPanel1.Controls.Add(button_divide, 3, 0);
            tableLayoutPanel1.Controls.Add(button_rightBracket, 2, 0);
            tableLayoutPanel1.Controls.Add(button_leftBracket, 1, 0);
            tableLayoutPanel1.Controls.Add(button_ac, 0, 0);
            tableLayoutPanel1.Dock = DockStyle.Fill;
            tableLayoutPanel1.Location = new Point(0, 228);
            tableLayoutPanel1.Name = "tableLayoutPanel1";
            tableLayoutPanel1.RowCount = 5;
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Percent, 20F));
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Percent, 20F));
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Percent, 20F));
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Percent, 20F));
            tableLayoutPanel1.RowStyles.Add(new RowStyle(SizeType.Percent, 20F));
            tableLayoutPanel1.Size = new Size(678, 531);
            tableLayoutPanel1.TabIndex = 23;
            // 
            // button_equals
            // 
            button_equals.Dock = DockStyle.Fill;
            button_equals.Location = new Point(510, 427);
            button_equals.Name = "button_equals";
            button_equals.Size = new Size(165, 101);
            button_equals.TabIndex = 50;
            button_equals.Text = "=";
            button_equals.UseVisualStyleBackColor = true;
            button_equals.Click += button_equals_Click;
            // 
            // button_delete
            // 
            button_delete.Dock = DockStyle.Fill;
            button_delete.Location = new Point(341, 427);
            button_delete.Name = "button_delete";
            button_delete.Size = new Size(163, 101);
            button_delete.TabIndex = 49;
            button_delete.Text = "delete";
            button_delete.UseVisualStyleBackColor = true;
            button_delete.Click += button_delete_Click;
            // 
            // button_point
            // 
            button_point.Dock = DockStyle.Fill;
            button_point.Location = new Point(172, 427);
            button_point.Name = "button_point";
            button_point.Size = new Size(163, 101);
            button_point.TabIndex = 48;
            button_point.Text = ".";
            button_point.UseVisualStyleBackColor = true;
            button_point.Click += button_point_Click;
            // 
            // button_null
            // 
            button_null.Dock = DockStyle.Fill;
            button_null.Location = new Point(3, 427);
            button_null.Name = "button_null";
            button_null.Size = new Size(163, 101);
            button_null.TabIndex = 47;
            button_null.Text = "0";
            button_null.UseVisualStyleBackColor = true;
            button_null.Click += button_null_Click;
            // 
            // button_plus
            // 
            button_plus.Dock = DockStyle.Fill;
            button_plus.Location = new Point(510, 321);
            button_plus.Name = "button_plus";
            button_plus.Size = new Size(165, 100);
            button_plus.TabIndex = 46;
            button_plus.Text = "+";
            button_plus.UseVisualStyleBackColor = true;
            button_plus.Click += button_plus_Click;
            // 
            // button_three
            // 
            button_three.Dock = DockStyle.Fill;
            button_three.Location = new Point(341, 321);
            button_three.Name = "button_three";
            button_three.Size = new Size(163, 100);
            button_three.TabIndex = 45;
            button_three.Text = "3";
            button_three.UseVisualStyleBackColor = true;
            button_three.Click += button_three_Click;
            // 
            // button_two
            // 
            button_two.Dock = DockStyle.Fill;
            button_two.Location = new Point(172, 321);
            button_two.Name = "button_two";
            button_two.Size = new Size(163, 100);
            button_two.TabIndex = 44;
            button_two.Text = "2";
            button_two.UseVisualStyleBackColor = true;
            button_two.Click += button_two_Click;
            // 
            // button_one
            // 
            button_one.Dock = DockStyle.Fill;
            button_one.Location = new Point(3, 321);
            button_one.Name = "button_one";
            button_one.Size = new Size(163, 100);
            button_one.TabIndex = 43;
            button_one.Text = "1";
            button_one.UseVisualStyleBackColor = true;
            button_one.Click += button_one_Click;
            // 
            // button_four
            // 
            button_four.Dock = DockStyle.Fill;
            button_four.Location = new Point(3, 215);
            button_four.Name = "button_four";
            button_four.Size = new Size(163, 100);
            button_four.TabIndex = 41;
            button_four.Text = "4";
            button_four.UseVisualStyleBackColor = true;
            button_four.Click += button_four_Click;
            // 
            // button_five
            // 
            button_five.Dock = DockStyle.Fill;
            button_five.Location = new Point(172, 215);
            button_five.Name = "button_five";
            button_five.Size = new Size(163, 100);
            button_five.TabIndex = 40;
            button_five.Text = "5";
            button_five.UseVisualStyleBackColor = true;
            button_five.Click += button_five_Click;
            // 
            // button_six
            // 
            button_six.Dock = DockStyle.Fill;
            button_six.Location = new Point(341, 215);
            button_six.Name = "button_six";
            button_six.Size = new Size(163, 100);
            button_six.TabIndex = 39;
            button_six.Text = "6";
            button_six.UseVisualStyleBackColor = true;
            button_six.Click += button_six_Click;
            // 
            // button_minus
            // 
            button_minus.Dock = DockStyle.Fill;
            button_minus.Location = new Point(510, 215);
            button_minus.Name = "button_minus";
            button_minus.Size = new Size(165, 100);
            button_minus.TabIndex = 42;
            button_minus.Text = "-";
            button_minus.UseVisualStyleBackColor = true;
            button_minus.Click += button_minus_Click;
            // 
            // button_nine
            // 
            button_nine.Dock = DockStyle.Fill;
            button_nine.Location = new Point(341, 109);
            button_nine.Name = "button_nine";
            button_nine.Size = new Size(163, 100);
            button_nine.TabIndex = 37;
            button_nine.Text = "9";
            button_nine.UseVisualStyleBackColor = true;
            button_nine.Click += button_nine_Click;
            // 
            // button_multiply
            // 
            button_multiply.Dock = DockStyle.Fill;
            button_multiply.Location = new Point(510, 109);
            button_multiply.Name = "button_multiply";
            button_multiply.Size = new Size(165, 100);
            button_multiply.TabIndex = 38;
            button_multiply.Text = "*";
            button_multiply.UseVisualStyleBackColor = true;
            button_multiply.Click += button_multiply_Click;
            // 
            // button_eight
            // 
            button_eight.Dock = DockStyle.Fill;
            button_eight.Location = new Point(172, 109);
            button_eight.Name = "button_eight";
            button_eight.Size = new Size(163, 100);
            button_eight.TabIndex = 36;
            button_eight.Text = "8";
            button_eight.UseVisualStyleBackColor = true;
            button_eight.Click += button_eight_Click;
            // 
            // button_seven
            // 
            button_seven.Dock = DockStyle.Fill;
            button_seven.Location = new Point(3, 109);
            button_seven.Name = "button_seven";
            button_seven.Size = new Size(163, 100);
            button_seven.TabIndex = 35;
            button_seven.Text = "7";
            button_seven.UseVisualStyleBackColor = true;
            button_seven.Click += button_seven_Click;
            // 
            // button_divide
            // 
            button_divide.Dock = DockStyle.Fill;
            button_divide.Location = new Point(510, 3);
            button_divide.Name = "button_divide";
            button_divide.Size = new Size(165, 100);
            button_divide.TabIndex = 34;
            button_divide.Text = "/";
            button_divide.UseVisualStyleBackColor = true;
            button_divide.Click += button_divide_Click;
            // 
            // button_rightBracket
            // 
            button_rightBracket.Dock = DockStyle.Fill;
            button_rightBracket.Location = new Point(341, 3);
            button_rightBracket.Name = "button_rightBracket";
            button_rightBracket.Size = new Size(163, 100);
            button_rightBracket.TabIndex = 33;
            button_rightBracket.Text = ")";
            button_rightBracket.UseVisualStyleBackColor = true;
            button_rightBracket.Click += button_rightBracket_Click;
            // 
            // button_leftBracket
            // 
            button_leftBracket.Dock = DockStyle.Fill;
            button_leftBracket.Location = new Point(172, 3);
            button_leftBracket.Name = "button_leftBracket";
            button_leftBracket.Size = new Size(163, 100);
            button_leftBracket.TabIndex = 32;
            button_leftBracket.Text = "(";
            button_leftBracket.UseVisualStyleBackColor = true;
            button_leftBracket.Click += button_leftBracket_Click;
            // 
            // button_ac
            // 
            button_ac.Dock = DockStyle.Fill;
            button_ac.Location = new Point(3, 3);
            button_ac.Name = "button_ac";
            button_ac.Size = new Size(163, 100);
            button_ac.TabIndex = 31;
            button_ac.Text = "AC";
            button_ac.UseVisualStyleBackColor = true;
            button_ac.Click += button_ac_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(9F, 21F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = SystemColors.ButtonHighlight;
            ClientSize = new Size(678, 759);
            Controls.Add(tableLayoutPanel1);
            Controls.Add(textBox_output);
            Controls.Add(textBox_input);
            Font = new Font("Segoe UI", 12F);
            Icon = (Icon)resources.GetObject("$this.Icon");
            Name = "Form1";
            Text = "Taschenrechner";
            Load += Form1_Load;
            tableLayoutPanel1.ResumeLayout(false);
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion
        private TextBox textBox_input;
        private TextBox textBox_output;
        private TableLayoutPanel tableLayoutPanel1;
        private Button button_equals;
        private Button button_delete;
        private Button button_point;
        private Button button_null;
        private Button button_plus;
        private Button button_three;
        private Button button_two;
        private Button button_one;
        private Button button_four;
        private Button button_five;
        private Button button_six;
        private Button button_minus;
        private Button button_nine;
        private Button button_multiply;
        private Button button_eight;
        private Button button_seven;
        private Button button_divide;
        private Button button_rightBracket;
        private Button button_leftBracket;
        private Button button_ac;
    }
}
