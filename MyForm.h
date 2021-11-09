#pragma once

namespace Lab7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ btnInicializar;

	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ btnActualizar;

	private: System::Windows::Forms::GroupBox^ groupBoxCuadrado;
	private: System::Windows::Forms::Button^ btnCuadrado;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::GroupBox^ groupBoxRectangulo;
	private: System::Windows::Forms::Button^ btnRectangulo;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBoxTriangulo;
	private: System::Windows::Forms::Button^ btnTriangulo;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxTriangulo = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxRectangulo = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxCuadrado = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->btnTriangulo = (gcnew System::Windows::Forms::Button());
			this->btnRectangulo = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->btnCuadrado = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->btnActualizar = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->btnInicializar = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBoxTriangulo->SuspendLayout();
			this->groupBoxRectangulo->SuspendLayout();
			this->groupBoxCuadrado->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(573, 642);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ejercicio 1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(253, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(136, 22);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(55, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(201, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ingrese el tamaño del arreglo: ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(424, 45);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnInicializar);
			this->groupBox2->Controls->Add(this->listBox1);
			this->groupBox2->Controls->Add(this->btnActualizar);
			this->groupBox2->Controls->Add(this->groupBoxCuadrado);
			this->groupBox2->Controls->Add(this->groupBoxRectangulo);
			this->groupBox2->Controls->Add(this->groupBoxTriangulo);
			this->groupBox2->Location = System::Drawing::Point(610, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(573, 642);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ejercicio 2";
			// 
			// groupBoxTriangulo
			// 
			this->groupBoxTriangulo->Controls->Add(this->btnTriangulo);
			this->groupBoxTriangulo->Controls->Add(this->label8);
			this->groupBoxTriangulo->Controls->Add(this->textBox4);
			this->groupBoxTriangulo->Controls->Add(this->label5);
			this->groupBoxTriangulo->Controls->Add(this->label6);
			this->groupBoxTriangulo->Controls->Add(this->textBox3);
			this->groupBoxTriangulo->Controls->Add(this->label4);
			this->groupBoxTriangulo->Controls->Add(this->label3);
			this->groupBoxTriangulo->Controls->Add(this->textBox2);
			this->groupBoxTriangulo->Location = System::Drawing::Point(22, 45);
			this->groupBoxTriangulo->Name = L"groupBoxTriangulo";
			this->groupBoxTriangulo->Size = System::Drawing::Size(173, 300);
			this->groupBoxTriangulo->TabIndex = 2;
			this->groupBoxTriangulo->TabStop = false;
			this->groupBoxTriangulo->Text = L"Triángulo";
			// 
			// groupBoxRectangulo
			// 
			this->groupBoxRectangulo->Controls->Add(this->btnRectangulo);
			this->groupBoxRectangulo->Controls->Add(this->textBox6);
			this->groupBoxRectangulo->Controls->Add(this->label7);
			this->groupBoxRectangulo->Controls->Add(this->textBox7);
			this->groupBoxRectangulo->Controls->Add(this->textBox5);
			this->groupBoxRectangulo->Controls->Add(this->label12);
			this->groupBoxRectangulo->Controls->Add(this->label9);
			this->groupBoxRectangulo->Controls->Add(this->label11);
			this->groupBoxRectangulo->Controls->Add(this->label10);
			this->groupBoxRectangulo->Location = System::Drawing::Point(201, 45);
			this->groupBoxRectangulo->Name = L"groupBoxRectangulo";
			this->groupBoxRectangulo->Size = System::Drawing::Size(178, 300);
			this->groupBoxRectangulo->TabIndex = 3;
			this->groupBoxRectangulo->TabStop = false;
			this->groupBoxRectangulo->Text = L"Rectángulo";
			// 
			// groupBoxCuadrado
			// 
			this->groupBoxCuadrado->Controls->Add(this->btnCuadrado);
			this->groupBoxCuadrado->Controls->Add(this->label13);
			this->groupBoxCuadrado->Controls->Add(this->textBox10);
			this->groupBoxCuadrado->Controls->Add(this->textBox8);
			this->groupBoxCuadrado->Controls->Add(this->label17);
			this->groupBoxCuadrado->Location = System::Drawing::Point(385, 45);
			this->groupBoxCuadrado->Name = L"groupBoxCuadrado";
			this->groupBoxCuadrado->Size = System::Drawing::Size(177, 300);
			this->groupBoxCuadrado->TabIndex = 4;
			this->groupBoxCuadrado->TabStop = false;
			this->groupBoxCuadrado->Text = L"Cuadrado";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(44, 76);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(79, 22);
			this->textBox2->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(162, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Logitud de los dos lados";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(58, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"iguales";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(44, 167);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(79, 22);
			this->textBox3->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(31, 125);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 17);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Logitud del lado";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(58, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"diferente";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(9, 208);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 17);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Color";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(56, 205);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(111, 22);
			this->textBox4->TabIndex = 11;
			// 
			// btnTriangulo
			// 
			this->btnTriangulo->Location = System::Drawing::Point(48, 249);
			this->btnTriangulo->Name = L"btnTriangulo";
			this->btnTriangulo->Size = System::Drawing::Size(75, 24);
			this->btnTriangulo->TabIndex = 6;
			this->btnTriangulo->Text = L"Enviar";
			this->btnTriangulo->UseVisualStyleBackColor = true;
			// 
			// btnRectangulo
			// 
			this->btnRectangulo->Location = System::Drawing::Point(48, 249);
			this->btnRectangulo->Name = L"btnRectangulo";
			this->btnRectangulo->Size = System::Drawing::Size(75, 24);
			this->btnRectangulo->TabIndex = 14;
			this->btnRectangulo->Text = L"Enviar";
			this->btnRectangulo->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 208);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 17);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Color";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(56, 205);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(111, 22);
			this->textBox5->TabIndex = 20;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(58, 142);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 17);
			this->label9->TabIndex = 19;
			this->label9->Text = L"grandes";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(31, 125);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(135, 17);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Logitud de los lados";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(44, 167);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(79, 22);
			this->textBox6->TabIndex = 17;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(58, 56);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(64, 17);
			this->label11->TabIndex = 16;
			this->label11->Text = L"pequeño";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(9, 39);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(162, 17);
			this->label12->TabIndex = 15;
			this->label12->Text = L"Logitud de los dos lados";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(44, 76);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(79, 22);
			this->textBox7->TabIndex = 13;
			// 
			// btnCuadrado
			// 
			this->btnCuadrado->Location = System::Drawing::Point(48, 249);
			this->btnCuadrado->Name = L"btnCuadrado";
			this->btnCuadrado->Size = System::Drawing::Size(75, 24);
			this->btnCuadrado->TabIndex = 14;
			this->btnCuadrado->Text = L"Enviar";
			this->btnCuadrado->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(9, 208);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 17);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Color";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(56, 205);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(111, 22);
			this->textBox8->TabIndex = 20;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(9, 56);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(162, 17);
			this->label17->TabIndex = 15;
			this->label17->Text = L"Logitud de los dos lados";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(46, 76);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(79, 22);
			this->textBox10->TabIndex = 13;
			// 
			// btnActualizar
			// 
			this->btnActualizar->Location = System::Drawing::Point(384, 362);
			this->btnActualizar->Name = L"btnActualizar";
			this->btnActualizar->Size = System::Drawing::Size(183, 24);
			this->btnActualizar->TabIndex = 6;
			this->btnActualizar->Text = L"Actualizar la lista";
			this->btnActualizar->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(22, 401);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(540, 228);
			this->listBox1->TabIndex = 7;
			// 
			// btnInicializar
			// 
			this->btnInicializar->Location = System::Drawing::Point(22, 362);
			this->btnInicializar->Name = L"btnInicializar";
			this->btnInicializar->Size = System::Drawing::Size(183, 24);
			this->btnInicializar->TabIndex = 8;
			this->btnInicializar->Text = L"Inicializar lista (Resetear)";
			this->btnInicializar->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1195, 666);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBoxTriangulo->ResumeLayout(false);
			this->groupBoxTriangulo->PerformLayout();
			this->groupBoxRectangulo->ResumeLayout(false);
			this->groupBoxRectangulo->PerformLayout();
			this->groupBoxCuadrado->ResumeLayout(false);
			this->groupBoxCuadrado->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
