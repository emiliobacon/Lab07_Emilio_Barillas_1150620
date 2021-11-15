#pragma once
#include <string>
#include "Rectangulo.h"
#include "Cuadrado.h"
#include"Triangulo.h"
#include "Poligono.h"
#include "List.h"



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
		int ID = 1;
		int *arreglo;
		int cantidad;
		
	private: System::Windows::Forms::Label^ label15;
	public:
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ txtBinaria;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ txtSecuencial;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ lbCantidad;
	private: System::Windows::Forms::ListBox^ listBox2;


	public:

		   List<Poligono>* poligonos;
		   List<int>* Arreglo;
		   array<List<int>*, 1>^ Hash = gcnew array<List<int>*, 1>(100);
		MyForm(void)
		{
			InitializeComponent();
			poligonos = new List<Poligono>();
			
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
	private: System::Windows::Forms::Button^ btnAceptar;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ btnInicializar;

	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ btnActualizar;

	private: System::Windows::Forms::GroupBox^ groupBoxCuadrado;
	private: System::Windows::Forms::Button^ btnCuadrado;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtLadoC;
	private: System::Windows::Forms::TextBox^ txtColorC;


	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::GroupBox^ groupBoxRectangulo;
	private: System::Windows::Forms::Button^ btnRectangulo;
	private: System::Windows::Forms::TextBox^ txtAlturaR;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtBaseR;
	private: System::Windows::Forms::TextBox^ txtColorR;


	private: System::Windows::Forms::Label^ label12;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBoxTriangulo;
	private: System::Windows::Forms::Button^ btnTriangulo;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtColorT;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtBaseT;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtLadoT;


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
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->txtBinaria = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txtSecuencial = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lbCantidad = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAceptar = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnInicializar = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->btnActualizar = (gcnew System::Windows::Forms::Button());
			this->groupBoxCuadrado = (gcnew System::Windows::Forms::GroupBox());
			this->btnCuadrado = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtLadoC = (gcnew System::Windows::Forms::TextBox());
			this->txtColorC = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->groupBoxRectangulo = (gcnew System::Windows::Forms::GroupBox());
			this->btnRectangulo = (gcnew System::Windows::Forms::Button());
			this->txtAlturaR = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtBaseR = (gcnew System::Windows::Forms::TextBox());
			this->txtColorR = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBoxTriangulo = (gcnew System::Windows::Forms::GroupBox());
			this->btnTriangulo = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtColorT = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtBaseT = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtLadoT = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBoxCuadrado->SuspendLayout();
			this->groupBoxRectangulo->SuspendLayout();
			this->groupBoxTriangulo->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->txtBinaria);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->txtSecuencial);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->lbCantidad);
			this->groupBox1->Controls->Add(this->listBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->btnAceptar);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(573, 642);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ejercicio 1";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(201, 331);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(70, 22);
			this->textBox4->TabIndex = 22;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(74, 334);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(112, 17);
			this->label19->TabIndex = 21;
			this->label19->Text = L"Método de Hash";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(288, 327);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 31);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Aceptar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// txtBinaria
			// 
			this->txtBinaria->Location = System::Drawing::Point(202, 291);
			this->txtBinaria->Name = L"txtBinaria";
			this->txtBinaria->Size = System::Drawing::Size(70, 22);
			this->txtBinaria->TabIndex = 19;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(29, 291);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(167, 17);
			this->label18->TabIndex = 18;
			this->label18->Text = L"Buscar de forma binaria: ";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(289, 287);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 31);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Aceptar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// txtSecuencial
			// 
			this->txtSecuencial->Location = System::Drawing::Point(203, 250);
			this->txtSecuencial->Name = L"txtSecuencial";
			this->txtSecuencial->Size = System::Drawing::Size(70, 22);
			this->txtSecuencial->TabIndex = 16;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 250);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(191, 17);
			this->label16->TabIndex = 15;
			this->label16->Text = L"Buscar de forma secuencial: ";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(290, 246);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 31);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Aceptar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// lbCantidad
			// 
			this->lbCantidad->AutoSize = true;
			this->lbCantidad->Location = System::Drawing::Point(421, 612);
			this->lbCantidad->Name = L"lbCantidad";
			this->lbCantidad->Size = System::Drawing::Size(0, 17);
			this->lbCantidad->TabIndex = 13;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(398, 101);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(101, 500);
			this->listBox2->TabIndex = 3;
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
			// btnAceptar
			// 
			this->btnAceptar->Location = System::Drawing::Point(424, 45);
			this->btnAceptar->Name = L"btnAceptar";
			this->btnAceptar->Size = System::Drawing::Size(75, 31);
			this->btnAceptar->TabIndex = 0;
			this->btnAceptar->Text = L"Aceptar";
			this->btnAceptar->UseVisualStyleBackColor = true;
			this->btnAceptar->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label2);
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
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(471, 429);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(69, 17);
			this->label15->TabIndex = 22;
			this->label15->Text = L"Perímetro";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(366, 429);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(38, 17);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Área";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(254, 429);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 17);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Color";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(109, 429);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(96, 17);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Tipo de figura";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(51, 429);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 17);
			this->label2->TabIndex = 18;
			this->label2->Text = L"ID";
			// 
			// btnInicializar
			// 
			this->btnInicializar->Location = System::Drawing::Point(22, 362);
			this->btnInicializar->Name = L"btnInicializar";
			this->btnInicializar->Size = System::Drawing::Size(183, 24);
			this->btnInicializar->TabIndex = 8;
			this->btnInicializar->Text = L"Inicializar lista (Resetear)";
			this->btnInicializar->UseVisualStyleBackColor = true;
			this->btnInicializar->Click += gcnew System::EventHandler(this, &MyForm::btnInicializar_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(22, 449);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(540, 180);
			this->listBox1->TabIndex = 7;
			// 
			// btnActualizar
			// 
			this->btnActualizar->Location = System::Drawing::Point(384, 362);
			this->btnActualizar->Name = L"btnActualizar";
			this->btnActualizar->Size = System::Drawing::Size(183, 24);
			this->btnActualizar->TabIndex = 6;
			this->btnActualizar->Text = L"Actualizar la lista";
			this->btnActualizar->UseVisualStyleBackColor = true;
			this->btnActualizar->Click += gcnew System::EventHandler(this, &MyForm::btnActualizar_Click);
			// 
			// groupBoxCuadrado
			// 
			this->groupBoxCuadrado->Controls->Add(this->btnCuadrado);
			this->groupBoxCuadrado->Controls->Add(this->label13);
			this->groupBoxCuadrado->Controls->Add(this->txtLadoC);
			this->groupBoxCuadrado->Controls->Add(this->txtColorC);
			this->groupBoxCuadrado->Controls->Add(this->label17);
			this->groupBoxCuadrado->Location = System::Drawing::Point(385, 45);
			this->groupBoxCuadrado->Name = L"groupBoxCuadrado";
			this->groupBoxCuadrado->Size = System::Drawing::Size(177, 300);
			this->groupBoxCuadrado->TabIndex = 4;
			this->groupBoxCuadrado->TabStop = false;
			this->groupBoxCuadrado->Text = L"Cuadrado";
			// 
			// btnCuadrado
			// 
			this->btnCuadrado->Location = System::Drawing::Point(48, 249);
			this->btnCuadrado->Name = L"btnCuadrado";
			this->btnCuadrado->Size = System::Drawing::Size(75, 24);
			this->btnCuadrado->TabIndex = 14;
			this->btnCuadrado->Text = L"Enviar";
			this->btnCuadrado->UseVisualStyleBackColor = true;
			this->btnCuadrado->Click += gcnew System::EventHandler(this, &MyForm::btnCuadrado_Click);
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
			// txtLadoC
			// 
			this->txtLadoC->Location = System::Drawing::Point(46, 76);
			this->txtLadoC->Name = L"txtLadoC";
			this->txtLadoC->Size = System::Drawing::Size(79, 22);
			this->txtLadoC->TabIndex = 13;
			// 
			// txtColorC
			// 
			this->txtColorC->Location = System::Drawing::Point(56, 205);
			this->txtColorC->Name = L"txtColorC";
			this->txtColorC->Size = System::Drawing::Size(111, 22);
			this->txtColorC->TabIndex = 20;
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
			// groupBoxRectangulo
			// 
			this->groupBoxRectangulo->Controls->Add(this->btnRectangulo);
			this->groupBoxRectangulo->Controls->Add(this->txtAlturaR);
			this->groupBoxRectangulo->Controls->Add(this->label7);
			this->groupBoxRectangulo->Controls->Add(this->txtBaseR);
			this->groupBoxRectangulo->Controls->Add(this->txtColorR);
			this->groupBoxRectangulo->Controls->Add(this->label12);
			this->groupBoxRectangulo->Controls->Add(this->label10);
			this->groupBoxRectangulo->Location = System::Drawing::Point(201, 45);
			this->groupBoxRectangulo->Name = L"groupBoxRectangulo";
			this->groupBoxRectangulo->Size = System::Drawing::Size(178, 300);
			this->groupBoxRectangulo->TabIndex = 3;
			this->groupBoxRectangulo->TabStop = false;
			this->groupBoxRectangulo->Text = L"Rectángulo";
			// 
			// btnRectangulo
			// 
			this->btnRectangulo->Location = System::Drawing::Point(48, 249);
			this->btnRectangulo->Name = L"btnRectangulo";
			this->btnRectangulo->Size = System::Drawing::Size(75, 24);
			this->btnRectangulo->TabIndex = 14;
			this->btnRectangulo->Text = L"Enviar";
			this->btnRectangulo->UseVisualStyleBackColor = true;
			this->btnRectangulo->Click += gcnew System::EventHandler(this, &MyForm::btnRectangulo_Click);
			// 
			// txtAlturaR
			// 
			this->txtAlturaR->Location = System::Drawing::Point(48, 154);
			this->txtAlturaR->Name = L"txtAlturaR";
			this->txtAlturaR->Size = System::Drawing::Size(79, 22);
			this->txtAlturaR->TabIndex = 17;
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
			// txtBaseR
			// 
			this->txtBaseR->Location = System::Drawing::Point(48, 76);
			this->txtBaseR->Name = L"txtBaseR";
			this->txtBaseR->Size = System::Drawing::Size(79, 22);
			this->txtBaseR->TabIndex = 13;
			// 
			// txtColorR
			// 
			this->txtColorR->Location = System::Drawing::Point(56, 205);
			this->txtColorR->Name = L"txtColorR";
			this->txtColorR->Size = System::Drawing::Size(111, 22);
			this->txtColorR->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(20, 39);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(125, 17);
			this->label12->TabIndex = 15;
			this->label12->Text = L"Logitud de la base";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(20, 125);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(130, 17);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Logitud de la altura";
			// 
			// groupBoxTriangulo
			// 
			this->groupBoxTriangulo->Controls->Add(this->btnTriangulo);
			this->groupBoxTriangulo->Controls->Add(this->label8);
			this->groupBoxTriangulo->Controls->Add(this->txtColorT);
			this->groupBoxTriangulo->Controls->Add(this->label5);
			this->groupBoxTriangulo->Controls->Add(this->label6);
			this->groupBoxTriangulo->Controls->Add(this->txtBaseT);
			this->groupBoxTriangulo->Controls->Add(this->label4);
			this->groupBoxTriangulo->Controls->Add(this->label3);
			this->groupBoxTriangulo->Controls->Add(this->txtLadoT);
			this->groupBoxTriangulo->Location = System::Drawing::Point(22, 45);
			this->groupBoxTriangulo->Name = L"groupBoxTriangulo";
			this->groupBoxTriangulo->Size = System::Drawing::Size(173, 300);
			this->groupBoxTriangulo->TabIndex = 2;
			this->groupBoxTriangulo->TabStop = false;
			this->groupBoxTriangulo->Text = L"Triángulo";
			// 
			// btnTriangulo
			// 
			this->btnTriangulo->Location = System::Drawing::Point(48, 249);
			this->btnTriangulo->Name = L"btnTriangulo";
			this->btnTriangulo->Size = System::Drawing::Size(75, 24);
			this->btnTriangulo->TabIndex = 6;
			this->btnTriangulo->Text = L"Enviar";
			this->btnTriangulo->UseVisualStyleBackColor = true;
			this->btnTriangulo->Click += gcnew System::EventHandler(this, &MyForm::btnTriangulo_Click);
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
			// txtColorT
			// 
			this->txtColorT->Location = System::Drawing::Point(56, 205);
			this->txtColorT->Name = L"txtColorT";
			this->txtColorT->Size = System::Drawing::Size(111, 22);
			this->txtColorT->TabIndex = 11;
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
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(31, 125);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 17);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Logitud del lado";
			// 
			// txtBaseT
			// 
			this->txtBaseT->Location = System::Drawing::Point(44, 167);
			this->txtBaseT->Name = L"txtBaseT";
			this->txtBaseT->Size = System::Drawing::Size(79, 22);
			this->txtBaseT->TabIndex = 8;
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(162, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Logitud de los dos lados";
			// 
			// txtLadoT
			// 
			this->txtLadoT->Location = System::Drawing::Point(44, 76);
			this->txtLadoT->Name = L"txtLadoT";
			this->txtLadoT->Size = System::Drawing::Size(79, 22);
			this->txtLadoT->TabIndex = 0;
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
			this->groupBox2->PerformLayout();
			this->groupBoxCuadrado->ResumeLayout(false);
			this->groupBoxCuadrado->PerformLayout();
			this->groupBoxRectangulo->ResumeLayout(false);
			this->groupBoxRectangulo->PerformLayout();
			this->groupBoxTriangulo->ResumeLayout(false);
			this->groupBoxTriangulo->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		
		void funcionRandom() {
			int cantidad = Convert::ToInt16(textBox1->Text);	
			arreglo = new int[cantidad];
			for (int i = 0; i < cantidad; i++) {
				int numero= rand() % (900 - (1 + 1)) + 1;
				arreglo[i] = numero;
				insertarHashDinamico(&numero);
			}	
		}
		void Burbuja(int n)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n - i - 1; j++)
				{
					if (arreglo[j] > arreglo[j + 1])
					{
						int aux = arreglo[j];
						arreglo[j] = arreglo[j + 1];
						arreglo[j + 1] = aux;
						
					}
				}
			}
		}
		void llenarListaConArreglo(int n) {
			int contador = 0;
			for (int i = 0; i < n; i++) {
				listBox2->Items->Add(contador + " --- " + arreglo[i]);
				contador++;
			}
		}
		int metodoSecuencial(int cantidad, int numero) {
		
			for (int i = 0; i < cantidad; i++)
			{
				if (this->arreglo[i] == numero)
				{
					return i;
				}
			}
			return -1;
		}
		int Binario(int m, int s, int numero)
		{
			int medio = 0;
			while (m <= s) {
				medio = (m + s) / 2;
				if (this->arreglo[medio] == numero) {
					return medio;
				}
				if (arreglo[medio] > numero) {
					s = medio;
					medio= (m + s) / 2;
				}
				if (this->arreglo[medio] < numero) {
					m = medio;
					medio = (m + s) / 2;
				}
			}
			return -1;
		}
		int insertarHashDinamico(int* value)
		{
			int Indice = *value % 100;
			if (Hash[Indice] == nullptr)
				Hash[Indice] = new List<int>;
			Hash[Indice]->add(value);
			return Indice;
		}

		int busquedaHashDinamico(int value)
		{
			int Indice = value % 100;
			if (Hash[Indice] == nullptr)
				return -1;
			int Pos = Hash[Indice]->getPosicion(&value);
			if (Pos != 1) {
				return Indice;
			}
			else {
				return -1;
			}
			
		}
		void MarshalString(String^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
		void llenarListBox() {
			listBox1->Items->Clear();
			int contador = 0;
			while (poligonos->get(contador) != nullptr) {
				string Figura;
				string Color;
				Color = poligonos->get(contador)->getColor();
				String^ color = gcnew String(Color.c_str());
				Figura = poligonos->get(contador)->getFigura();
				String^ figura = gcnew String(Figura.c_str());
				listBox1->Items->Add("        " + poligonos->get(contador)->id() + " ----------- " + figura + " ---------------- " + color + " ----------- " + (poligonos->get(contador)->calcularArea()) + " ------------- " + poligonos->get(contador)->calcularPerimetro());
				contador++;
			}
		}
	private: System::Void btnTriangulo_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((txtBaseT->Text->Trim() != "") && (txtLadoT->Text->Trim() != "") && (txtColorT->Text->Trim() != "")) {
			double base = Convert::ToDouble(txtBaseT->Text);
			double ladoT = Convert::ToDouble(txtLadoT->Text);
			String^ color = txtColorT->Text->Trim();
			string color2;
			MarshalString(color, color2);
			String^ figura = "Triángulo";
			string figura2;
			MarshalString(figura, figura2);
			Triangulo* triangulito = new Triangulo(figura2, color2, ID, base, ladoT);
			poligonos->add(triangulito);
			ID++;
			MessageBox::Show("Triángulo insertado exitosamente, cantidad de elementos: " + poligonos->getSize(), "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Complete todos los campos", "Insersión incorrecta", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
	private: System::Void btnActualizar_Click(System::Object^ sender, System::EventArgs^ e) {
		llenarListBox();
	}
	private: System::Void btnRectangulo_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((txtAlturaR->Text->Trim() != "") && (txtBaseR->Text->Trim() != "") && (txtColorR->Text->Trim() != "")) {
			double base = Convert::ToDouble(txtBaseR->Text);
			double ladoT = Convert::ToDouble(txtAlturaR->Text);
			String^ color = txtColorR->Text->Trim();
			string color2;
			MarshalString(color, color2);
			String^ figura = "Rectángulo";
			string figura2;
			MarshalString(figura, figura2);
			Rectangulo* rectangulito = new Rectangulo(figura2, color2, ID, base, ladoT);
			poligonos->add(rectangulito);
			ID++;
			MessageBox::Show("Rectángulo insertado exitosamente, cantidad de elementos: " + poligonos->getSize(), "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Complete todos los campos", "Insersión incorrecta", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}	
	}
	private: System::Void btnCuadrado_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((txtLadoC->Text->Trim() != "") &&  (txtColorC->Text->Trim() != "")) {
		double base = Convert::ToDouble(txtLadoC->Text);
		String^ color = txtColorC->Text->Trim();
		string color2;
		MarshalString(color, color2);
		String^ figura = "Cuadrado";
		string figura2;
		MarshalString(figura, figura2);
		Cuadrado* cuadradito = new Cuadrado(figura2, color2, ID, base);
		poligonos->add(cuadradito);
		ID++;
		MessageBox::Show("Cuadrado insertado exitosamente, cantidad de elementos: " + poligonos->getSize(), "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		MessageBox::Show("Complete todos los campos", "Insersión incorrecta", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
	private: System::Void btnInicializar_Click(System::Object^ sender, System::EventArgs^ e) {
		ID = 1;
		poligonos->clear();
		listBox1->Items->Clear();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox2->Items->Clear();
		if (textBox1->Text != "") {
			cantidad = Convert::ToInt16(textBox1->Text);
			funcionRandom();
			Burbuja(cantidad);
			llenarListaConArreglo(cantidad);
		}
		else {
			MessageBox::Show("Ingrese un número", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtSecuencial->Text != "") {
			int numero = Convert::ToInt16(txtSecuencial->Text);
			if (metodoSecuencial(cantidad, numero) == -1) {
				MessageBox::Show("El número no existe ");
			}
			else {
				MessageBox::Show("El número se encuentra en la posición: " + metodoSecuencial(cantidad, numero));
			}
		}
		else {
			MessageBox::Show("Ingrese un número", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtBinaria->Text != "") {
		int numero = Convert::ToInt16(txtBinaria->Text);
		if (Binario(0, cantidad, numero) == -1) {
			MessageBox::Show("El número no existe ");
		}
		else {
			MessageBox::Show("El número se encuentra en la posición: " + Binario(0, cantidad, numero));
		}
	}
	else {
		MessageBox::Show("Ingrese un número", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
		
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4->Text != "") {
		int numero = Convert::ToInt16(textBox4->Text);
		busquedaHashDinamico(numero);
		if (busquedaHashDinamico(numero) == -1) {
			MessageBox::Show("El número no existe ");
		}
		else {
			MessageBox::Show("El número se encuentra en la posición de la Hashtable: " + busquedaHashDinamico(numero));
		}
	}
	else {
		MessageBox::Show("Ingrese un número", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
		
}
};
}
