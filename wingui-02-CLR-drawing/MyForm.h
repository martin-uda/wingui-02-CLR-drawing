#pragma once
#include <string>

namespace wingui02CLRdrawing {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
        public:
        MyForm(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //
        }

        protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~MyForm()
        {
            if (components) {
                delete components;
            }
        }

        private: System::Windows::Forms::Panel^  panel1;
        private: System::Windows::Forms::NumericUpDown^  numericUpDown1;

        private: System::Windows::Forms::Label^  label2;
        private: System::Windows::Forms::Label^  label3;
        private: System::Windows::Forms::Button^  button1;
        private: System::Windows::Forms::Label^  label4;
        private: System::Windows::Forms::NumericUpDown^  numericUpDown2;

        protected:

        private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->AutoScroll = true;
            this->panel1->AutoSize = true;
            this->panel1->BackColor = System::Drawing::SystemColors::Control;
            this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel1->Location = System::Drawing::Point(21, 137);
            this->panel1->MinimumSize = System::Drawing::Size(150, 150);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(228, 200);
            this->panel1->TabIndex = 1;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::myRectPaint);
            // 
            // numericUpDown1
            // 
            this->numericUpDown1->Location = System::Drawing::Point(21, 46);
            this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
            this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
            this->numericUpDown1->Name = L"numericUpDown1";
            this->numericUpDown1->Size = System::Drawing::Size(75, 20);
            this->numericUpDown1->TabIndex = 2;
            this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
            this->numericUpDown1->Click += gcnew System::EventHandler(this, &MyForm::num1_click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(25, 121);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(33, 13);
            this->label2->TabIndex = 4;
            this->label2->Text = L"panel";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(25, 20);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(46, 13);
            this->label3->TabIndex = 5;
            this->label3->Text = L"hodnota";
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(21, 84);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(75, 23);
            this->button1->TabIndex = 6;
            this->button1->Text = L"Clear";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::but1_click);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(163, 94);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(35, 13);
            this->label4->TabIndex = 7;
            this->label4->Text = L"label4";
            // 
            // numericUpDown2
            // 
            this->numericUpDown2->Location = System::Drawing::Point(118, 46);
            this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
            this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
            this->numericUpDown2->Name = L"numericUpDown2";
            this->numericUpDown2->Size = System::Drawing::Size(80, 20);
            this->numericUpDown2->TabIndex = 8;
            this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(272, 381);
            this->Controls->Add(this->numericUpDown2);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->numericUpDown1);
            this->Controls->Add(this->panel1);
            this->MinimumSize = System::Drawing::Size(250, 300);
            this->Name = L"MyForm";
            this->Padding = System::Windows::Forms::Padding(5);
            this->Text = L"Pokus 22";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

        // draw something
        //Graphics g = this->panel1->CreateGraphics();
        //for (size_t i = 0; i < 10; i++) {
        //    g->DrawLine(Pens::White, Point(i, 0), Point(i, 20));

        //}
        //delete g;


        private: System::Void my_but_click(System::Object^  sender, System::EventArgs^  e)
        {
        }

        private: System::Void num1_click(System::Object^  sender, System::EventArgs^  e)
        {
            this->label3->Text = Convert::ToString(this->numericUpDown1->Value);
            //myRectPaint(sender, e);
            //Rectangle r = this->panel1->Bounds;
            //this->panel1->Paint;
        }

        private: System::Void drawRect(Panel^ panel, Pen^ pen, Point loc, Int32 length)
        {
            Int32 x, y;
            x = loc.X;
            auto g = panel->CreateGraphics();

            for (Int32 y = loc.Y; y < loc.Y + length; y++) {
                //g->DrawLine(Pens::White, Point(x, y), Point(x + length, y));
                g->DrawLine(pen, Point(x, y), Point(x + length, y));

            }
        }

        private: System::Void drawRect2(PaintEventArgs^ e, Pen^ pen, Point loc, Int32 length)
        {
            Int32 x, y;
            x = loc.X;
            auto g = this->panel1->CreateGraphics();

            for (Int32 y = loc.Y; y < loc.Y + length; y++) {
                //g->DrawLine(Pens::White, Point(x, y), Point(x + length, y));
                g->DrawLine(pen, Point(x, y), Point(x + length, y));

            }
        }

        private: System::Void drawLineW(Panel^ panel, Pen^ pen, Point loc, Int32 length)
        {
            Int32 x, y;
            x = loc.X;
            y = loc.Y;
            auto g = panel->CreateGraphics();
            g->DrawLine(pen, loc, Point(x + length - 1, y));
            delete g;

        }

        private: System::Void drawLineH(Panel^ panel, Pen^ pen, Point loc, Int32 length)
        {
            Int32 x, y;
            x = loc.X;
            y = loc.Y;
            auto g = panel->CreateGraphics();
            g->DrawLine(pen, loc, Point(x, y + length));
            delete g;
        }

        private: System::Void myRectDraw(Panel^ panel)
        {
            Int32 MYSIZE = 10;
            Int32 val1, val2;

            //drawRect2(e, Pens::White, Point(0, 0), Int32(MYSIZE - 1));
            drawRect(panel, Pens::White, Point(0, 0), Int32(MYSIZE - 1));
            
            val1 = Int32(this->numericUpDown1->Value);  // height
            val2 = Int32(this->numericUpDown2->Value);  // width

            Int32 h = val1*MYSIZE;
            Int32 w = val2*MYSIZE;
            
            for (Int32 i = 1; i <= val2; i++) {
                drawLineH(panel, Pens::Black, Point(i*MYSIZE, 0), Int32(h));
            }
            for (Int32 i = 1; i <= val1; i++) {
                drawLineW(panel, Pens::Black, Point(0, i*MYSIZE), Int32(w));
            }
            
        }

        private: System::Void myRectPaint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e)
        {
            myRectDraw(panel1);
        }

        private: System::Void clearPanel(Panel^ panel)
        {
            Color color = panel->BackColor;
            Rectangle rect = panel->Bounds;
            rect.Location = Point(0, 0);
            SolidBrush^ myBrush = gcnew SolidBrush(color);
            Graphics^ formGraphics = panel->CreateGraphics();
            formGraphics->FillRectangle(myBrush, rect);
            delete myBrush;
            delete formGraphics;
        }

        private: System::Void but1_click(System::Object^  sender, System::EventArgs^  e)
        {
            // clear panel: this->panel1
            clearPanel(panel1);
        }
    };
}
