namespace kundenverwaltung
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
            textBoxAnrede = new TextBox();
            textBoxName = new TextBox();
            textBoxVorname = new TextBox();
            textBoxAlter = new TextBox();
            textBoxUmsatz = new TextBox();
            label1 = new Label();
            label2 = new Label();
            label3 = new Label();
            label4 = new Label();
            label5 = new Label();
            listViewKunden = new ListView();
            columnHeaderAnrede = new ColumnHeader();
            columnHeaderName = new ColumnHeader();
            columnHeaderVorname = new ColumnHeader();
            columnHeaderAlter = new ColumnHeader();
            columnHeaderUmsatz = new ColumnHeader();
            buttonHinzufügen = new Button();
            buttonÄndern = new Button();
            buttonLöschen = new Button();
            menuStrip1 = new MenuStrip();
            dateiToolStripMenuItem = new ToolStripMenuItem();
            speichernMenuItem = new ToolStripMenuItem();
            ladenMenuItem = new ToolStripMenuItem();
            menuStrip1.SuspendLayout();
            SuspendLayout();
            // 
            // textBoxAnrede
            // 
            textBoxAnrede.Location = new Point(751, 101);
            textBoxAnrede.Name = "textBoxAnrede";
            textBoxAnrede.Size = new Size(125, 27);
            textBoxAnrede.TabIndex = 0;
            // 
            // textBoxName
            // 
            textBoxName.Location = new Point(751, 146);
            textBoxName.Name = "textBoxName";
            textBoxName.Size = new Size(125, 27);
            textBoxName.TabIndex = 1;
            // 
            // textBoxVorname
            // 
            textBoxVorname.Location = new Point(751, 190);
            textBoxVorname.Name = "textBoxVorname";
            textBoxVorname.Size = new Size(125, 27);
            textBoxVorname.TabIndex = 2;
            // 
            // textBoxAlter
            // 
            textBoxAlter.Location = new Point(751, 236);
            textBoxAlter.Name = "textBoxAlter";
            textBoxAlter.Size = new Size(125, 27);
            textBoxAlter.TabIndex = 3;
            // 
            // textBoxUmsatz
            // 
            textBoxUmsatz.Location = new Point(751, 284);
            textBoxUmsatz.Name = "textBoxUmsatz";
            textBoxUmsatz.Size = new Size(125, 27);
            textBoxUmsatz.TabIndex = 4;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(677, 104);
            label1.Name = "label1";
            label1.Size = new Size(57, 20);
            label1.TabIndex = 5;
            label1.Text = "Anrede";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(677, 284);
            label2.Name = "label2";
            label2.Size = new Size(58, 20);
            label2.TabIndex = 6;
            label2.Text = "Umsatz";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(677, 239);
            label3.Name = "label3";
            label3.Size = new Size(41, 20);
            label3.TabIndex = 7;
            label3.Text = "Alter";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(677, 149);
            label4.Name = "label4";
            label4.Size = new Size(49, 20);
            label4.TabIndex = 8;
            label4.Text = "Name";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(677, 193);
            label5.Name = "label5";
            label5.Size = new Size(68, 20);
            label5.TabIndex = 9;
            label5.Text = "Vorname";
            // 
            // listViewKunden
            // 
            listViewKunden.Columns.AddRange(new ColumnHeader[] { columnHeaderAnrede, columnHeaderName, columnHeaderVorname, columnHeaderAlter, columnHeaderUmsatz });
            listViewKunden.FullRowSelect = true;
            listViewKunden.GridLines = true;
            listViewKunden.Location = new Point(28, 47);
            listViewKunden.Name = "listViewKunden";
            listViewKunden.Size = new Size(521, 373);
            listViewKunden.TabIndex = 10;
            listViewKunden.UseCompatibleStateImageBehavior = false;
            listViewKunden.View = View.Details;
            listViewKunden.SelectedIndexChanged += listViewKunden_SelectedIndexChanged;
            // 
            // columnHeaderAnrede
            // 
            columnHeaderAnrede.Text = "Anrede";
            columnHeaderAnrede.Width = 100;
            // 
            // columnHeaderName
            // 
            columnHeaderName.Text = "Name";
            columnHeaderName.Width = 100;
            // 
            // columnHeaderVorname
            // 
            columnHeaderVorname.Text = "Vorname";
            columnHeaderVorname.Width = 100;
            // 
            // columnHeaderAlter
            // 
            columnHeaderAlter.Text = "Alter";
            columnHeaderAlter.Width = 50;
            // 
            // columnHeaderUmsatz
            // 
            columnHeaderUmsatz.Text = "Umsatz";
            columnHeaderUmsatz.Width = 100;
            // 
            // buttonHinzufügen
            // 
            buttonHinzufügen.Location = new Point(619, 356);
            buttonHinzufügen.Name = "buttonHinzufügen";
            buttonHinzufügen.Size = new Size(99, 33);
            buttonHinzufügen.TabIndex = 3;
            buttonHinzufügen.Text = "Hinzufügen";
            buttonHinzufügen.Click += buttonHinzufügen_Click;
            // 
            // buttonÄndern
            // 
            buttonÄndern.Location = new Point(724, 356);
            buttonÄndern.Name = "buttonÄndern";
            buttonÄndern.Size = new Size(91, 33);
            buttonÄndern.TabIndex = 2;
            buttonÄndern.Text = "Ändern";
            buttonÄndern.Click += buttonÄndern_Click;
            // 
            // buttonLöschen
            // 
            buttonLöschen.Location = new Point(821, 356);
            buttonLöschen.Name = "buttonLöschen";
            buttonLöschen.Size = new Size(92, 33);
            buttonLöschen.TabIndex = 1;
            buttonLöschen.Text = "Löschen";
            buttonLöschen.Click += buttonLöschen_Click;
            // 
            // menuStrip1
            // 
            menuStrip1.ImageScalingSize = new Size(20, 20);
            menuStrip1.Items.AddRange(new ToolStripItem[] { dateiToolStripMenuItem });
            menuStrip1.Location = new Point(0, 0);
            menuStrip1.Name = "menuStrip1";
            menuStrip1.Size = new Size(1006, 28);
            menuStrip1.TabIndex = 15;
            menuStrip1.Text = "menuStrip1";
            // 
            // dateiToolStripMenuItem
            // 
            dateiToolStripMenuItem.DropDownItems.AddRange(new ToolStripItem[] { speichernMenuItem, ladenMenuItem });
            dateiToolStripMenuItem.Name = "dateiToolStripMenuItem";
            dateiToolStripMenuItem.Size = new Size(59, 24);
            dateiToolStripMenuItem.Text = "Datei";
            // 
            // speichernMenuItem
            // 
            speichernMenuItem.Name = "speichernMenuItem";
            speichernMenuItem.Size = new Size(157, 26);
            speichernMenuItem.Text = "Speichern";
            speichernMenuItem.Click += speichernMenuItem_Click;
            // 
            // ladenMenuItem
            // 
            ladenMenuItem.Name = "ladenMenuItem";
            ladenMenuItem.Size = new Size(157, 26);
            ladenMenuItem.Text = "Laden";
            ladenMenuItem.Click += ladenMenuItem_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(1006, 470);
            Controls.Add(buttonLöschen);
            Controls.Add(buttonÄndern);
            Controls.Add(buttonHinzufügen);
            Controls.Add(listViewKunden);
            Controls.Add(label5);
            Controls.Add(label4);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(label1);
            Controls.Add(textBoxUmsatz);
            Controls.Add(textBoxAlter);
            Controls.Add(textBoxVorname);
            Controls.Add(textBoxName);
            Controls.Add(textBoxAnrede);
            Controls.Add(menuStrip1);
            MainMenuStrip = menuStrip1;
            Name = "Form1";
            Text = "Kundenverwaltung";
            menuStrip1.ResumeLayout(false);
            menuStrip1.PerformLayout();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private TextBox textBoxAnrede;
        private TextBox textBoxName;
        private TextBox textBoxVorname;
        private TextBox textBoxAlter;
        private TextBox textBoxUmsatz;
        private Label label1;
        private Label label2;
        private Label label3;
        private Label label4;
        private Label label5;
        private ListView listViewKunden;
        private ColumnHeader columnHeaderAnrede;
        private ColumnHeader columnHeaderName;
        private ColumnHeader columnHeaderVorname;
        private ColumnHeader columnHeaderAlter;
        private ColumnHeader columnHeaderUmsatz;
        private Button buttonHinzufügen;
        private Button buttonÄndern;
        private Button buttonLöschen;
        private MenuStrip menuStrip1;
        private ToolStripMenuItem dateiToolStripMenuItem;
        private ToolStripMenuItem speichernMenuItem;
        private ToolStripMenuItem ladenMenuItem;
    }
}
