#pragma once
#include <math.h>
#include "test.h"

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

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
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;




	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  v2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  viminusv2i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  mark;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  step;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  C1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  C2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  g_error;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;



















	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->v2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->viminusv2i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->mark = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->step = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->C2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->g_error = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(51, 37);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(611, 402);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(745, 447);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 33);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Test1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->X, this->F_2,
					this->v2, this->viminusv2i, this->mark, this->step, this->C1, this->C2, this->F_1, this->g_error
			});
			this->dataGridView1->Location = System::Drawing::Point(671, 37);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(851, 402);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// X
			// 
			this->X->HeaderText = L"xi";
			this->X->Name = L"X";
			this->X->ReadOnly = true;
			this->X->Width = 50;
			// 
			// F_2
			// 
			this->F_2->HeaderText = L"Vi";
			this->F_2->Name = L"F_2";
			this->F_2->ReadOnly = true;
			// 
			// v2
			// 
			this->v2->HeaderText = L"V2i";
			this->v2->Name = L"v2";
			// 
			// viminusv2i
			// 
			this->viminusv2i->HeaderText = L"Vi-V2i";
			this->viminusv2i->Name = L"viminusv2i";
			// 
			// mark
			// 
			this->mark->HeaderText = L"ОЛП";
			this->mark->Name = L"mark";
			// 
			// step
			// 
			this->step->HeaderText = L"hi";
			this->step->Name = L"step";
			// 
			// C1
			// 
			this->C1->HeaderText = L"C1";
			this->C1->Name = L"C1";
			this->C1->Width = 50;
			// 
			// C2
			// 
			this->C2->HeaderText = L"C2";
			this->C2->Name = L"C2";
			this->C2->Width = 50;
			// 
			// F_1
			// 
			this->F_1->HeaderText = L"Ui";
			this->F_1->Name = L"F_1";
			this->F_1->ReadOnly = true;
			// 
			// g_error
			// 
			this->g_error->HeaderText = L"g_error";
			this->g_error->Name = L"g_error";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(79, 485);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"a";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(104, 481);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(41, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(173, 484);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"b";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(207, 482);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(41, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(267, 484);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"h";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(300, 481);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(46, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(374, 484);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"u0";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(418, 481);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(39, 22);
			this->textBox4->TabIndex = 10;
			this->textBox4->Text = L"1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(479, 484);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"e";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(510, 482);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(46, 22);
			this->textBox5->TabIndex = 12;
			this->textBox5->Text = L"0,01";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(888, 447);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 33);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Test2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1022, 447);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 33);
			this->button3->TabIndex = 14;
			this->button3->Text = L"First1";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1159, 447);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(134, 33);
			this->button4->TabIndex = 15;
			this->button4->Text = L"First2";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1621, 558);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		// Интервал, где есть данные
		double xmin = Convert::ToDouble(textBox1->Text);
		double xmax = Convert::ToDouble(textBox2->Text);
		double u0 = Convert::ToDouble(textBox4->Text);
		double h = Convert::ToDouble(textBox3->Text);
		double *v;
		int n = fabs(xmin - xmax) / h + 1;
		v = new double[n];
		for (int i = 0; i < n; i++)
			v[i] = 0;
		v[0] = f1(xmin, u0);
		double xmin_limit = xmin;
		double xmax_limit = xmax + 1;

		double ymin_limit = 0;
		double ymax_limit = 2;
		double err = 0;
		// Список точек
		int i = 0;
		for (double x = xmin; x <= xmax; x += h)
		{
			v[i + 1] = RKtest(x, v[i], h);
			if (err < fabs(f1(x, u0) - f2(x, v[i])))
				err = fabs(f1(x, u0) - f2(x, v[i]));
			//Добавление на график
			f1_list->Add(x, f1(x,u0));
			f2_list->Add(x, f2(x,v[i]));
			//Печать в таблицу
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = x; 		
			dataGridView1->Rows[i]->Cells[8]->Value = floor(f1(x,u0) * 1000000000) / 1000000000;
			dataGridView1->Rows[i]->Cells[1]->Value = floor(f2(x,v[i]) * 1000000000) / 1000000000;
			dataGridView1->Rows[0]->Cells[9]->Value = err;
			dataGridView1->Rows[i]->Cells[5]->Value = h;
			i++;
		}
		LineItem Curve1 = panel->AddCurve("F1(x)", f1_list, Color::Red,SymbolType::Plus);
		LineItem Curve2 = panel->AddCurve("F2(x)", f2_list, Color::Blue, SymbolType::None);
		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin_limit;
		panel->XAxis->Scale->Max = xmax_limit;

		// !!!
		// Устанавливаем интересующий нас интервал по оси Y
		panel->YAxis->Scale->Min = ymin_limit;
		panel->YAxis->Scale->Max = ymax_limit;

		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();
		// Обновить таблицу?????
	}
	System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 GraphPane^ panel = zedGraphControl1->GraphPane;
				 panel->CurveList->Clear();
				 PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
				 PointPairList^ f2_list = gcnew ZedGraph::PointPairList();

				 // Интервал, где есть данные
				 double xmin = Convert::ToDouble(textBox1->Text);
				 double xmax = Convert::ToDouble(textBox2->Text);
				 double u0 = Convert::ToDouble(textBox4->Text);
				 double h = Convert::ToDouble(textBox3->Text);
				 double eps = Convert::ToDouble(textBox5->Text);
				 double *v;
				 double *v2; double s=0; double temp =0, c1=0, c2=0;
				 int n = fabs(xmin - xmax) / h + 1;
				 v = new double[n];
				 v2 = new double[2 * n];
				 for (int i = 0; i < n; i++)
					 v[i] = 0;
				 for (int j = 0; j < n; j++)
					 v2[j] = 0;
				 v[0] = f1(xmin, u0);
				 v2[0] = v[0];
				 double xmin_limit = xmin;
				 double xmax_limit = xmax + 1;

				 double ymin_limit = 0;
				 double ymax_limit = 5;
				 double err = 0;
				 // Список точек
				 int i = 0;
				 for (double x = xmin; x <= xmax, h >= 0.0000001; x += h)
				 {
				 retry: ///////////////////
					 for (int k =i; k<2*i+2; k++)
						 v2[k+1]=RKtest(x, v2[k], h / 2);
					 v[i + 1] = RKtest(x, v[i], h);
					 temp = h;
					 h = step_control(h, eps, v[i], v2[2 * i + 2]);
					 if (h == (temp / 2))
					 {
						 c2++;
						 goto retry;
					 }
					 if (h == (2 * temp))
						 c1++;
					 if (err < fabs(f1(x, u0) - f2(x, v[i])))
						 err = fabs(f1(x, u0) - f2(x, v[i]));
					 s = (v[i] - v2[2 * i]) / 15;
					 //Добавление на график
					 f1_list->Add(x, f1(x, u0));
					 f2_list->Add(x, f2(x, v[i]));
					 //Печать в таблицу
					 dataGridView1->Rows->Add();
					 dataGridView1->Rows[i]->Cells[0]->Value = x;
					 dataGridView1->Rows[i]->Cells[1]->Value = floor(f2(x, v[i]) * 1000000000) / 1000000000;
					 dataGridView1->Rows[i]->Cells[2]->Value = v2[2 * i];
					 dataGridView1->Rows[i]->Cells[3]->Value = v[i] - v2[2 * i];
					 dataGridView1->Rows[i]->Cells[4]->Value = s * 16; //olp
					 dataGridView1->Rows[i]->Cells[5]->Value = h;
					 dataGridView1->Rows[i]->Cells[6]->Value = c1; //c1
					 dataGridView1->Rows[i]->Cells[7]->Value = c2; //c2
					 dataGridView1->Rows[i]->Cells[8]->Value = floor(f1(x, u0) * 1000000000) / 1000000000;
					 dataGridView1->Rows[0]->Cells[9]->Value = err;
					 i++;
				 }
				 LineItem Curve1 = panel->AddCurve("F1(x)", f1_list, Color::Red, SymbolType::Plus);
				 LineItem Curve2 = panel->AddCurve("F2(x)", f2_list, Color::Blue, SymbolType::None);
				 // Устанавливаем интересующий нас интервал по оси X
				 panel->XAxis->Scale->Min = xmin_limit;
				 panel->XAxis->Scale->Max = xmax_limit;

				 // !!!
				 // Устанавливаем интересующий нас интервал по оси Y
				 panel->YAxis->Scale->Min = ymin_limit;
				 panel->YAxis->Scale->Max = ymax_limit;

				 // Вызываем метод AxisChange (), чтобы обновить данные об осях. 
				 // В противном случае на рисунке будет показана только часть графика, 
				 // которая умещается в интервалы по осям, установленные по умолчанию
				 zedGraphControl1->AxisChange();
				 // Обновляем график
				 zedGraphControl1->Invalidate();
				 // Обновить таблицу?????
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		// Интервал, где есть данные
		double xmin = Convert::ToDouble(textBox1->Text);
		double xmax = Convert::ToDouble(textBox2->Text);
		double u0 = Convert::ToDouble(textBox4->Text);
		double h = Convert::ToDouble(textBox3->Text);
		double *v;
		int n = fabs(xmin - xmax) / h + 1;
		v = new double[n];
		for (int i = 0; i < n; i++)
			v[i] = 0;
		v[0] = f1(xmin, u0);
		double xmin_limit = xmin;
		double xmax_limit = xmax + 1;

		double ymin_limit = 0;
		double ymax_limit = 100;
		// Список точек
		int i = 0;
		for (double x = xmin; x <= xmax; x += h)
		{
			v[i + 1] = RKfirst(x, v[i], h);
			//Добавление на график
			f1_list->Add(x, f4(x, v[i]));
			//Печать в таблицу
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = x;
			dataGridView1->Rows[i]->Cells[1]->Value = v[i];
			dataGridView1->Rows[i]->Cells[5]->Value = h;
			i++;
		}
		LineItem Curve1 = panel->AddCurve("F1(x)", f1_list, Color::Red, SymbolType::Plus);
		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin_limit;
		panel->XAxis->Scale->Max = xmax_limit;

		// !!!
		// Устанавливаем интересующий нас интервал по оси Y
		panel->YAxis->Scale->Min = ymin_limit;
		panel->YAxis->Scale->Max = ymax_limit;

		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();
		// Обновить таблицу?????
	}
			 System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
			 {

				 GraphPane^ panel = zedGraphControl1->GraphPane;
				 panel->CurveList->Clear();
				 PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
				 // Интервал, где есть данные
				 double xmin = Convert::ToDouble(textBox1->Text);
				 double xmax = Convert::ToDouble(textBox2->Text);
				 double u0 = Convert::ToDouble(textBox4->Text);
				 double h = Convert::ToDouble(textBox3->Text);
				 double eps = Convert::ToDouble(textBox5->Text);
				 double *v;
				 double *v2; double s = 0; double temp = 0, c1 = 0, c2 = 0;
				 int n = fabs(xmin - xmax) / h + 1;
				 v = new double[n];
				 v2 = new double[2 * n];
				 for (int i = 0; i < n; i++)
					 v[i] = 0;
				 for (int j = 0; j < n; j++)
					 v2[j] = 0;
				 v[0] = f1(xmin, u0);
				 v2[0] = v[0];
				 double xmin_limit = xmin;
				 double xmax_limit = xmax + 1;

				 double ymin_limit = 0;
				 double ymax_limit = 5;
				 // Список точек
				 int i = 0;
				 for (double x = xmin; x <= xmax, h >= 0.0000001; x += h)
				 {
				 retry: ///////////////////
					 for (int k = i; k<2 * i + 2; k++)
						 v2[k + 1] = RKfirst(x, v2[k], h / 2);
					 v[i + 1] = RKfirst(x, v[i], h);
					 temp = h;
					 h = step_control(h, eps, v[i], v2[2 * i + 2]);
					 if (h == (temp / 2))
					 {
						 c2++;
						 goto retry;
					 }
					 if (h == (2 * temp))
						 c1++;
					 s = (v[i] - v2[2 * i]) / 15;
					 //Добавление на график
					 f1_list->Add(x, f4(x, v[i]));
					 //Печать в таблицу
					 dataGridView1->Rows->Add();
					 dataGridView1->Rows[i]->Cells[0]->Value = x;
					 dataGridView1->Rows[i]->Cells[1]->Value = v[i];
					 dataGridView1->Rows[i]->Cells[2]->Value = v2[2 * i];
					 dataGridView1->Rows[i]->Cells[3]->Value = v[i] - v2[2 * i];
					 dataGridView1->Rows[i]->Cells[4]->Value = s * 16; //olp
					 dataGridView1->Rows[i]->Cells[5]->Value = h;
					 dataGridView1->Rows[i]->Cells[6]->Value = c1; //c1
					 dataGridView1->Rows[i]->Cells[7]->Value = c2; //c2
					 i++;
				 }
				 LineItem Curve1 = panel->AddCurve("F1(x)", f1_list, Color::Red, SymbolType::Plus);
				 // Устанавливаем интересующий нас интервал по оси X
				 panel->XAxis->Scale->Min = xmin_limit;
				 panel->XAxis->Scale->Max = xmax_limit;

				 // !!!
				 // Устанавливаем интересующий нас интервал по оси Y
				 panel->YAxis->Scale->Min = ymin_limit;
				 panel->YAxis->Scale->Max = ymax_limit;

				 // Вызываем метод AxisChange (), чтобы обновить данные об осях. 
				 // В противном случае на рисунке будет показана только часть графика, 
				 // которая умещается в интервалы по осям, установленные по умолчанию
				 zedGraphControl1->AxisChange();
				 // Обновляем график
				 zedGraphControl1->Invalidate();
				 // Обновить таблицу?????
			 }
			 
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}


private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
