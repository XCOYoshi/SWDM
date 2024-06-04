using System;
using System.Collections.Generic;
using System.IO;
using System.Text.Json;
using System.Windows.Forms;

namespace kundenverwaltung
{
    public partial class Form1 : Form
    {
        public struct TKunde
        {
            public string Anrede { get; set; }
            public string Name { get; set; }
            public string Vorname { get; set; }
            public int Alter { get; set; }
            public double Umsatz { get; set; }
        }

        private List<TKunde> kundenListe = new List<TKunde>();
        private TKunde aktuellerKunde;
        private int aktuellerKundeIndex = -1;

        public Form1()
        {
            InitializeComponent();
        }

        private void buttonHinzufügen_Click(object sender, EventArgs e)
        {
            if (ValidateInput(out int alter, out double umsatz))
            {
                TKunde neuerKunde = new TKunde
                {
                    Anrede = textBoxAnrede.Text,
                    Name = textBoxName.Text,
                    Vorname = textBoxVorname.Text,
                    Alter = alter,
                    Umsatz = umsatz
                };

                kundenListe.Add(neuerKunde);
                AnzeigenKunden();
                ClearTextBoxes();
            }
        }

        private void buttonÄndern_Click(object sender, EventArgs e)
        {
            if (aktuellerKundeIndex >= 0)
            {
                if (ValidateInput(out int alter, out double umsatz))
                {
                    TKunde geänderterKunde = aktuellerKunde;
                    geänderterKunde.Anrede = textBoxAnrede.Text;
                    geänderterKunde.Name = textBoxName.Text;
                    geänderterKunde.Vorname = textBoxVorname.Text;
                    geänderterKunde.Alter = alter;
                    geänderterKunde.Umsatz = umsatz;

                    kundenListe[aktuellerKundeIndex] = geänderterKunde;
                    AnzeigenKunden();
                    ClearTextBoxes();

                    aktuellerKundeIndex = -1;
                }
            }
            else
            {
                MessageBox.Show("Bitte wählen Sie einen Kunden aus, den Sie ändern möchten.", "Information", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
        }

        private void buttonLöschen_Click(object sender, EventArgs e)
        {
            if (aktuellerKundeIndex >= 0)
            {
                kundenListe.RemoveAt(aktuellerKundeIndex);
                AnzeigenKunden();
                ClearTextBoxes();

                aktuellerKundeIndex = -1;
            }
            else
            {
                MessageBox.Show("Bitte wählen Sie einen Kunden aus, den Sie löschen möchten.", "Information", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
        }

        private void speichernMenuItem_Click(object sender, EventArgs e)
        {
            try
            {
                using (SaveFileDialog saveFileDialog = new SaveFileDialog())
                {
                    saveFileDialog.Filter = "JSON files (*.json)|*.json|All files (*.*)|*.*";
                    if (saveFileDialog.ShowDialog() == DialogResult.OK)
                    {
                        string json = JsonSerializer.Serialize(kundenListe, new JsonSerializerOptions { WriteIndented = true });

                        // Debugging Statement
                        Console.WriteLine("Serialized JSON: " + json);

                        File.WriteAllText(saveFileDialog.FileName, json);
                        MessageBox.Show("Daten erfolgreich gespeichert.");
                    }
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Fehler beim Speichern der Datei: {ex.Message}", "Fehler", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void ladenMenuItem_Click(object sender, EventArgs e)
        {
            try
            {
                using (OpenFileDialog openFileDialog = new OpenFileDialog())
                {
                    openFileDialog.Filter = "JSON files (*.json)|*.json|All files (*.*)|*.*";
                    if (openFileDialog.ShowDialog() == DialogResult.OK)
                    {
                        string json = File.ReadAllText(openFileDialog.FileName);

                        // Debugging Statement
                        Console.WriteLine("Deserialized JSON: " + json);

                        kundenListe = JsonSerializer.Deserialize<List<TKunde>>(json) ?? new List<TKunde>();
                        AnzeigenKunden();
                        MessageBox.Show("Daten erfolgreich geladen.");
                    }
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show($"Fehler beim Laden der Datei: {ex.Message}", "Fehler", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        private void AnzeigenKunden()
        {
            listViewKunden.Items.Clear();
            foreach (var kunde in kundenListe)
            {
                ListViewItem item = new ListViewItem(new[] { kunde.Anrede, kunde.Name, kunde.Vorname, kunde.Alter.ToString(), kunde.Umsatz.ToString() });
                listViewKunden.Items.Add(item);
            }
        }

        private void ClearTextBoxes()
        {
            textBoxAnrede.Text = "";
            textBoxName.Text = "";
            textBoxVorname.Text = "";
            textBoxAlter.Text = "";
            textBoxUmsatz.Text = "";
        }

        private void listViewKunden_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (listViewKunden.SelectedIndices.Count > 0)
            {
                aktuellerKundeIndex = listViewKunden.SelectedIndices[0];
                aktuellerKunde = kundenListe[aktuellerKundeIndex];

                // Laden der Kundendaten in die TextBoxen
                textBoxAnrede.Text = aktuellerKunde.Anrede;
                textBoxName.Text = aktuellerKunde.Name;
                textBoxVorname.Text = aktuellerKunde.Vorname;
                textBoxAlter.Text = aktuellerKunde.Alter.ToString();
                textBoxUmsatz.Text = aktuellerKunde.Umsatz.ToString();
            }
        }

        private bool ValidateInput(out int alter, out double umsatz)
        {
            alter = 0;
            umsatz = 0.0;

            if (string.IsNullOrWhiteSpace(textBoxAnrede.Text) ||
                string.IsNullOrWhiteSpace(textBoxName.Text) ||
                string.IsNullOrWhiteSpace(textBoxVorname.Text) ||
                string.IsNullOrWhiteSpace(textBoxAlter.Text) ||
                string.IsNullOrWhiteSpace(textBoxUmsatz.Text))
            {
                MessageBox.Show("Bitte füllen Sie alle Felder aus.", "Fehler", MessageBoxButtons.OK, MessageBoxIcon.Error);
                return false;
            }

            if (!int.TryParse(textBoxAlter.Text, out alter) || alter < 0)
            {
                MessageBox.Show("Bitte geben Sie ein gültiges Alter ein.", "Fehler", MessageBoxButtons.OK, MessageBoxIcon.Error);
                return false;
            }

            if (!double.TryParse(textBoxUmsatz.Text, out umsatz) || umsatz < 0)
            {
                MessageBox.Show("Bitte geben Sie einen gültigen Umsatz ein.", "Fehler", MessageBoxButtons.OK, MessageBoxIcon.Error);
                return false;
            }

            return true;
        }
    }
}
