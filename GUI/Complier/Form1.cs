using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.IO;
using System.Diagnostics;

namespace Complier
{
    public partial class Form1 : Form
    {
        OpenFileDialog ofd = new OpenFileDialog();
        string undo = "";
        string undo2 = "";
        string undo3 = "";

        string errorText = "";
        Dictionary<int, string> errorlines = new Dictionary<int, string>();
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            richTextBox2.Clear();
            richTextBox3.Clear();
            // change text in input code box to black
            string directoryPath = @"D:\Uni\Spring23\Compilers\Project\Compilers-Project\";
            string quadPath = Path.Combine(directoryPath, "quad.log");
            string symtblPath = Path.Combine(directoryPath, "symtbl.log");
            string errorPath = Path.Combine(directoryPath, "error.txt");

            if (File.Exists(quadPath))
            {
                File.Delete(quadPath);
            }
            if (File.Exists(symtblPath))
            {
                File.Delete(symtblPath);
            }


            TextWriter txt = new StreamWriter(@"..\\..\\..\\..\\input_file.compilers");
            txt.Write(richTextBox1.Text);
            txt.Close();

            richTextBox1.SelectAll();
            richTextBox1.SelectionColor = Color.Black;

            // TODO: Change path acoordingly
            System.Diagnostics.Process.Start("cmd.exe", "/C D: & cd D:\\Uni\\Spring23\\Compilers\\Project\\Compilers-Project & run.bat");
            // wait for the process to finish and then read the output files
            // if symtbl.log or quad.log doesnt exist wait for 1 more second
            while (!File.Exists(quadPath) || !File.Exists(symtblPath))
            {
                System.Threading.Thread.Sleep(100);
            }


            richTextBox2.Text = File.ReadAllText(quadPath);
            richTextBox3.Text = File.ReadAllText(symtblPath);
            errorText = File.ReadAllText(errorPath);

            // change text in input code box to red if there is an error
            if (errorText != "")
            {
                // example error text :
                //  e,1: expected declaration or statement at end of input

                // for each line in error text file split the string by :
                // and get the line number
                string[] lines = errorText.Split('\n');
                foreach (string line in lines)
                {
                    // we will split the line by , then by : and then get the line number
                    string[] lineSplit = line.Split(',');
                    string[] lineSplit2 = lineSplit[1].Split(':');


                    // create a dictionary to store the line number and the error message
                    // this will be used to show the error message when mouse is hovered over the line

                    errorlines.Add(Int32.Parse(lineSplit2[0]), lineSplit[1]);

                    int lineNumber = Int32.Parse(lineSplit2[0]);
                    richTextBox1.Select(richTextBox1.GetFirstCharIndexFromLine(lineNumber - 1), richTextBox1.Lines[lineNumber - 1].Length);

                    if (lineSplit[0] == "e")
                    {
                        richTextBox1.SelectionColor = Color.Red;
                    }
                    else if (lineSplit[0] == "w")
                    {
                        richTextBox1.SelectionColor = Color.Orange;
                    }

                }
            }


        }
        private void richTextBox1_MouseMove(object sender, MouseEventArgs e)
        {
            if (richTextBox1.Text == "")
                return;
            // Get the position of the mouse.
            Point position = new Point(e.X, e.Y);
            // get the position of the character at the mouse position
            int pos = richTextBox1.GetCharIndexFromPosition(position);
            // get the line number
            int line = richTextBox1.GetLineFromCharIndex(pos);
            // select the line and check if color is red
            richTextBox1.Select(richTextBox1.GetFirstCharIndexFromLine(line), richTextBox1.Lines[line].Length);
            if (richTextBox1.SelectionColor == Color.Red)
            {
                // get the error message from the dictionary
                string errorMessage = errorlines[line + 1];

                // if color is red then show the error message
                toolTip1.Show(errorMessage, richTextBox1, e.X, e.Y, 5000);

            }
            else if (richTextBox1.SelectionColor == Color.Orange)
            {
                // get the error message from the dictionary
                string errorMessage = errorlines[line + 1];

                // if color is orange then show the warning message
                toolTip1.Show(errorMessage, richTextBox1, e.X, e.Y, 5000);
            }
            else
            {
                toolTip1.Hide(richTextBox1);
            }

        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (ofd.ShowDialog() == DialogResult.OK)
            {
                richTextBox1.Text = File.ReadAllText(ofd.FileName);
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (richTextBox1.Text == "")
                return;
            undo = richTextBox1.Text;
            undo3 = richTextBox3.Text;
            undo2 = richTextBox2.Text;
            richTextBox1.Text = "";
            richTextBox2.Text = "";
            richTextBox3.Text = "";


        }

        private void button4_Click(object sender, EventArgs e)
        {
            richTextBox1.Text = undo;
            richTextBox2.Text = undo2;
            richTextBox3.Text = undo3;
        }

        private void richTextBox1_TextChanged(object sender, EventArgs e)
        {
            // Clear the line numbers
            richTextBox4.Clear();
            if (richTextBox1.Text == "")
            {
                AddLineNumbers();

            }
            AddLineNumbers();

        }
        private void richTextBox4_TextChanged(object sender, EventArgs e)
        {

        }

        private void richTextBox1_VScroll(object sender, EventArgs e)
        {
            richTextBox4.Text = "";
            AddLineNumbers();
            richTextBox4.Invalidate();
        }
        public void AddLineNumbers()
        {
            // create & set Point pt to (0,0)
            Point pt = new Point(0, 0);
            // get First Index & First Line from richTextBox1
            int First_Index = richTextBox1.GetCharIndexFromPosition(pt);
            int First_Line = richTextBox1.GetLineFromCharIndex(First_Index);
            // set X & Y coordinates of Point pt to ClientRectangle Width & Height respectively
            pt.X = ClientRectangle.Width;
            pt.Y = ClientRectangle.Height;
            // get Last Index & Last Line from richTextBox1
            int Last_Index = richTextBox1.GetCharIndexFromPosition(pt);
            int Last_Line = richTextBox1.GetLineFromCharIndex(Last_Index);
            // set Center alignment to LineNumberTextBox
            richTextBox4.SelectionAlignment = HorizontalAlignment.Center;
            // set LineNumberTextBox text to null & width to getWidth() function value
            richTextBox4.Text = "";
            richTextBox4.Width = getWidth();
            // now add each line number to LineNumberTextBox upto last line
            for (int i = First_Line; i <= Last_Line; i++)
            {
                richTextBox4.Text += i + 1 + "\n";
            }
        }
        public int getWidth()
        {
            int w = 25;
            // get total lines of richTextBox1
            int line = richTextBox1.Lines.Length;

            if (line <= 99)
            {
                w = 20 + (int)richTextBox1.Font.Size;
            }
            else if (line <= 999)
            {
                w = 30 + (int)richTextBox1.Font.Size;
            }
            else
            {
                w = 50 + (int)richTextBox1.Font.Size;
            }

            return w;
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            AddLineNumbers();
        }

        private void richTextBox1_SelectionChanged(object sender, EventArgs e)
        {
            Point pt = richTextBox1.GetPositionFromCharIndex(richTextBox1.SelectionStart);
            if (pt.X == 1)
            {
                AddLineNumbers();
            }
        }

        private void richTextBox1_MouseDown(object sender, MouseEventArgs e)
        {
            richTextBox1.Select();
            richTextBox4.DeselectAll();
        }

        private void toolTip1_Popup(object sender, PopupEventArgs e)
        {

        }
    }
}
