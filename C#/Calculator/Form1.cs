using System.Data;

namespace HuetherForm;

public partial class CalculatorForm : Form
{
    public CalculatorForm()
    {
        InitializeComponent();
    }

    private void button1_Click(object sender, EventArgs e)
    {
        Input("1");
    }

    private void button2_Click(object sender, EventArgs e)
    {
        Input("2");
    }

    private void button3_Click(object sender, EventArgs e)
    {
        Input("3");
    }

    private void button4_Click(object sender, EventArgs e)
    {
        Input("4");
    }

    private void button5_Click(object sender, EventArgs e)
    {
        Input("5");
    }

    private void button6_Click(object sender, EventArgs e)
    {
        Input("6");
    }

    private void button7_Click(object sender, EventArgs e)
    {
        Input("7");
    }

    private void button8_Click(object sender, EventArgs e)
    {
        Input("8");
    }

    private void button9_Click(object sender, EventArgs e)
    {
        Input("9");
    }

    private void button0_Click(object sender, EventArgs e)
    {
        Input("0");
    }

    private void buttonResult_Click(object sender, EventArgs e)
    {
        CalculateResult();
    }

    private void buttonPlus_Click(object sender, EventArgs e)
    {
        SetOperator("+");
    }

    private void buttonMinus_Click(object sender, EventArgs e)
    {
        SetOperator("-");
    }

    private void buttonMult_Click(object sender, EventArgs e)
    {
        SetOperator("*");
    }

    private void buttonDiv_Click(object sender, EventArgs e)
    {
        SetOperator("/");
    }

    private void buttonC_Click(object sender, EventArgs e)
    {
        // Clear both input and output
        inputField.Text = "";
        outputField.Text = "";
    }

    private void buttonDel_Click(object sender, EventArgs e)
    {
        // Nothing to delete
        if (inputField.Text.Length == 0) return;

        DeleteLastCharacter();

        // Clear output
        outputField.Text = "";
    }

    private void buttonComma_Click(object sender, EventArgs e)
    {
        // Get a the string containing the last input number
        string lastNumber = GetLastNumber();

        // Prevent input of comma if last number already contains one
        if (lastNumber.Contains(',')) return;

        Input(",");
    }

    private void buttonOpenBrace_Click(object sender, EventArgs e)
    {
        Input("(");
    }

    private void buttonCloseBrace_Click(object sender, EventArgs e)
    {
        Input(")");
    }

    /// <summary>
    /// Add a string to the input field and clear the output field.
    /// </summary>
    private void Input(string inputValue = "")
    {
        inputField.Text += inputValue;
        outputField.Text = "";
    }

    /// <summary>
    /// Calculate the result and display it in the output field
    /// </summary>
    private void CalculateResult()
    {
        try
        {
            // Use DataTable to parse and calculate the result
            string? result = new DataTable().Compute(inputField.Text.Replace(',', '.'), null).ToString();

            // If result string is null or empty (such as when pressing = without any input),
            // 
            outputField.Text = string.IsNullOrWhiteSpace(result) ? "" : "= " + result;
        }
        // Exception is thrown when the input expression is invalid
        catch
        {
            outputField.Text = "Error";
        }
    }

    /// <summary>
    /// Add an operator to the input field. If no number has been added 
    /// since the last operator or comma, replace it.
    /// </summary>
    private void SetOperator(string op)
    {
        // Already calculated a result, use that as first operand
        if(outputField.Text.Length != 0 && outputField.Text != "Error")
        {
            inputField.Text = outputField.Text.Substring(2, outputField.Text.Length-2);
        }
        // Expression cannot start with an operator
        else if (inputField.Text.Length == 0)
        {
            // Except - (negation)
            if(op == "-")
            {
                Input("-");
            }
            return;
        }

        // Check if input field ends in an operator or comma, remove it
        char last = inputField.Text.Last();
        switch (last)
        {
            case '*':
            case '/':
                // Can input a - as negation after * or /
                if(op != "-")
                {
                    DeleteLastCharacter();
                }
                break;
            case '+':
            case '-':
            case ',':
                DeleteLastCharacter();
                break;
        }

        // Add operator to input
        Input(op);
    }

    /// <summary>
    /// Return the substring containing the last inputted number 
    /// (content of the input field since the last operator)
    /// </summary>
    private string GetLastNumber()
    {
        // Find last operator
        int index = inputField.Text.LastIndexOfAny(['+', '-', '*', '/']);

        // No operator input yet, return entire input
        if (index == -1)
        {
            return inputField.Text;
        }

        // Return substring between last operator index and end of input field
        return inputField.Text.Substring(index + 1, inputField.Text.Length - index - 1);
    }

    /// <summary>
    /// Deletes the last character in the input field
    /// </summary>
    private void DeleteLastCharacter()
    {
        inputField.Text = inputField.Text.Substring(0, inputField.Text.Length - 1);
    }
}