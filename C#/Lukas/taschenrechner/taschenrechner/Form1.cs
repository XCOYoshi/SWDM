using System.Data;
using System.Globalization;

namespace taschenrechner
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox_input_TextChanged(object sender, EventArgs e)
        {
            string lastLine = textBox_input.Lines.LastOrDefault();
            DataTable dt = new DataTable();
            try
            {
                var result = dt.Compute(lastLine, null);
                textBox_output.Text = result.ToString();
            }
            catch { }

            textBox_input.SelectionStart = textBox_input.Text.Length;
            textBox_input.ScrollToCaret();
        }
        private void button_null_Click(object sender, EventArgs e)
        {
            textBox_input.Text += "0";
        }

        private void button_one_Click(object sender, EventArgs e)
        {
            textBox_input.Text += "1";
        }

        private void button_two_Click(object sender, EventArgs e)
        {
            textBox_input.Text += "2";
        }

        private void button_three_Click(object sender, EventArgs e)
        {
            textBox_input.Text += "3";
        }

        private void button_four_Click(object sender, EventArgs e)
        {
            textBox_input.Text += "4";
        }

        private void button_five_Click(object sender, EventArgs e)
        {
            textBox_input.Text += "5";
        }

        private void button_six_Click(object sender, EventArgs e)
        {
            textBox_input.Text += "6";
        }

        private void button_seven_Click(object sender, EventArgs e)
        {
            textBox_input.Text += "7";
        }

        private void button_eight_Click(object sender, EventArgs e)
        {
            textBox_input.Text += "8";
        }

        private void button_nine_Click(object sender, EventArgs e)
        {
            textBox_input.Text += "9";
        }

        private void button_delete_Click(object sender, EventArgs e)
        {
            if (textBox_input.Text.Length > 0)
            {
                textBox_input.Text = textBox_input.Text.Substring(0, textBox_input.Text.Length - 1);
            }
        }

        private void button_leftBracket_Click(object sender, EventArgs e)
        {
            textBox_input.Text += " ( ";
        }

        private void button_rightBracket_Click(object sender, EventArgs e)
        {
            textBox_input.Text += " ) ";
        }

        private void button_divide_Click(object sender, EventArgs e)
        {
            textBox_input.Text += " / ";
        }

        private void button_multiply_Click(object sender, EventArgs e)
        {
            textBox_input.Text += " * ";
        }

        private void button_minus_Click(object sender, EventArgs e)
        {
            textBox_input.Text += " - ";
        }

        private void button_plus_Click(object sender, EventArgs e)
        {
            textBox_input.Text += " + ";
        }

        private void button_ac_Click(object sender, EventArgs e)
        {
            textBox_input.Text = "";
        }

        private void button_point_Click(object sender, EventArgs e)
        {
            textBox_input.Text += ".";
        }

        private void button_equals_Click(object sender, EventArgs e)
        {
            Thread.CurrentThread.CurrentCulture = new CultureInfo("en-US");

            DataTable dt = new DataTable();
            string lastLine = textBox_input.Lines.LastOrDefault();
            if (!string.IsNullOrEmpty(lastLine))
            {
                try
                {
                    var result = dt.Compute(lastLine, null);
                    textBox_output.Text = result.ToString();

                    textBox_input.Text += Environment.NewLine + textBox_output.Text;
                    textBox_output.Text = "";
                }
                catch { }
            }

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
    }
}
