#include "HelperClass.h"
#include "frmBillGeneration.h"
#include "frmMonthSchedule.h"
#include <string>
#include <iostream>
#pragma once

namespace PeakSaver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for PSfrmScheduleTypeSelection
	/// </summary>
	public ref class PSfrmScheduleTypeSelection : public System::Windows::Forms::Form
	{
		SqlConnection^ sqlConn = gcnew SqlConnection();
		SqlCommand^ sqlCmd = gcnew SqlCommand();

		DataTable^ sqlDt = gcnew DataTable();
		SqlDataAdapter^ sqlDtA = gcnew SqlDataAdapter();
	private: System::Windows::Forms::Button^ btnBack2;

	private: System::Windows::Forms::Panel^ pnlShowSchedule;

	private: System::Windows::Forms::Label^ lbSchedule_day;



	private: System::Windows::Forms::Label^ lbChangeTime;






	private: System::Windows::Forms::Label^ label6;



	private: System::Windows::Forms::TextBox^ tbApplianceID_StartEnd;







	private: System::Windows::Forms::Label^ lbChangeDay;






	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbMonthlyBudget;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::Button^ btnNextAppliance;


	private: System::Windows::Forms::TextBox^ tbDuration;


	private: System::Windows::Forms::TextBox^ tbApplianceName;

	private: System::Windows::Forms::TextBox^ tbKwh;



	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::MaskedTextBox^ mtbStart;
	private: System::Windows::Forms::Label^ Minutes;

	private: System::Windows::Forms::Button^ btnScheduleShow_Next;
	private: System::Windows::Forms::DataGridView^ dgvFinalSchedule;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::Button^ btnBillGen;











	private: System::Windows::Forms::TextBox^ tbStartTime;
	private: System::Windows::Forms::TextBox^ tbDate;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ cbSelection;
	private: System::Windows::Forms::Panel^ pnlMonth;















	private: System::Windows::Forms::DateTimePicker^ dtpDate;
private: System::Windows::Forms::TextBox^ tbMonthFrequency;
private: System::Windows::Forms::Button^ btnMonthSave;
private: System::Windows::Forms::Button^ btnMonthNextApp;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::ComboBox^ cbMonthSelection;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;


private: System::Windows::Forms::TextBox^ tbMonthStartTime;
private: System::Windows::Forms::TextBox^ tbMonthDuration;


private: System::Windows::Forms::DataGridView^ dgvMonthAppliances;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ tbMonthKWH;
private: System::Windows::Forms::TextBox^ tbMonthApplianceName;









































		   SqlDataReader^ sqlRd;
	public:
		PSfrmScheduleTypeSelection(void)
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
		~PSfrmScheduleTypeSelection()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	protected:
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ btnNext;
	private: System::Windows::Forms::Panel^ pnlApplianceSelection;

	private: System::Windows::Forms::Label^ lbDay;
	private: System::Windows::Forms::Label^ lbDate;
	private: System::Windows::Forms::Button^ BtnNext2;


	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->pnlApplianceSelection = (gcnew System::Windows::Forms::Panel());
			this->pnlShowSchedule = (gcnew System::Windows::Forms::Panel());
			this->pnlMonth = (gcnew System::Windows::Forms::Panel());
			this->tbMonthFrequency = (gcnew System::Windows::Forms::TextBox());
			this->btnMonthSave = (gcnew System::Windows::Forms::Button());
			this->btnMonthNextApp = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->cbMonthSelection = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tbMonthStartTime = (gcnew System::Windows::Forms::TextBox());
			this->tbMonthDuration = (gcnew System::Windows::Forms::TextBox());
			this->tbMonthKWH = (gcnew System::Windows::Forms::TextBox());
			this->tbMonthApplianceName = (gcnew System::Windows::Forms::TextBox());
			this->dgvMonthAppliances = (gcnew System::Windows::Forms::DataGridView());
			this->btnBillGen = (gcnew System::Windows::Forms::Button());
			this->btnScheduleShow_Next = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbApplianceID_StartEnd = (gcnew System::Windows::Forms::TextBox());
			this->lbChangeDay = (gcnew System::Windows::Forms::Label());
			this->lbChangeTime = (gcnew System::Windows::Forms::Label());
			this->lbSchedule_day = (gcnew System::Windows::Forms::Label());
			this->dgvFinalSchedule = (gcnew System::Windows::Forms::DataGridView());
			this->tbStartTime = (gcnew System::Windows::Forms::TextBox());
			this->dtpDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->Minutes = (gcnew System::Windows::Forms::Label());
			this->mtbStart = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tbApplianceName = (gcnew System::Windows::Forms::TextBox());
			this->tbKwh = (gcnew System::Windows::Forms::TextBox());
			this->btnNextAppliance = (gcnew System::Windows::Forms::Button());
			this->tbDuration = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnBack2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->lbDay = (gcnew System::Windows::Forms::Label());
			this->lbDate = (gcnew System::Windows::Forms::Label());
			this->BtnNext2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbMonthlyBudget = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tbDate = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->cbSelection = (gcnew System::Windows::Forms::ComboBox());
			this->pnlApplianceSelection->SuspendLayout();
			this->pnlShowSchedule->SuspendLayout();
			this->pnlMonth->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMonthAppliances))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFinalSchedule))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(94, 398);
			this->dateTimePicker1->MinDate = System::DateTime(2024, 11, 18, 2, 2, 38, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(449, 38);
			this->dateTimePicker1->TabIndex = 0;
			this->dateTimePicker1->Value = System::DateTime(2024, 11, 18, 2, 2, 38, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &PSfrmScheduleTypeSelection::dateTimePicker1_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(88, 340);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(232, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Date of Schedule";
			// 
			// btnNext
			// 
			this->btnNext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNext->Location = System::Drawing::Point(1160, 652);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(124, 55);
			this->btnNext->TabIndex = 4;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &PSfrmScheduleTypeSelection::btnNext_Click);
			// 
			// pnlApplianceSelection
			// 
			this->pnlApplianceSelection->Controls->Add(this->pnlShowSchedule);
			this->pnlApplianceSelection->Controls->Add(this->Minutes);
			this->pnlApplianceSelection->Controls->Add(this->mtbStart);
			this->pnlApplianceSelection->Controls->Add(this->label16);
			this->pnlApplianceSelection->Controls->Add(this->label15);
			this->pnlApplianceSelection->Controls->Add(this->tbApplianceName);
			this->pnlApplianceSelection->Controls->Add(this->tbKwh);
			this->pnlApplianceSelection->Controls->Add(this->btnNextAppliance);
			this->pnlApplianceSelection->Controls->Add(this->tbDuration);
			this->pnlApplianceSelection->Controls->Add(this->label13);
			this->pnlApplianceSelection->Controls->Add(this->label11);
			this->pnlApplianceSelection->Controls->Add(this->label5);
			this->pnlApplianceSelection->Controls->Add(this->btnBack2);
			this->pnlApplianceSelection->Controls->Add(this->dataGridView1);
			this->pnlApplianceSelection->Controls->Add(this->lbDay);
			this->pnlApplianceSelection->Controls->Add(this->lbDate);
			this->pnlApplianceSelection->Controls->Add(this->BtnNext2);
			this->pnlApplianceSelection->Location = System::Drawing::Point(0, 0);
			this->pnlApplianceSelection->Name = L"pnlApplianceSelection";
			this->pnlApplianceSelection->Size = System::Drawing::Size(443, 777);
			this->pnlApplianceSelection->TabIndex = 5;
			this->pnlApplianceSelection->Visible = false;
			// 
			// pnlShowSchedule
			// 
			this->pnlShowSchedule->Controls->Add(this->pnlMonth);
			this->pnlShowSchedule->Controls->Add(this->btnBillGen);
			this->pnlShowSchedule->Controls->Add(this->btnScheduleShow_Next);
			this->pnlShowSchedule->Controls->Add(this->label4);
			this->pnlShowSchedule->Controls->Add(this->label6);
			this->pnlShowSchedule->Controls->Add(this->tbApplianceID_StartEnd);
			this->pnlShowSchedule->Controls->Add(this->lbChangeDay);
			this->pnlShowSchedule->Controls->Add(this->lbChangeTime);
			this->pnlShowSchedule->Controls->Add(this->lbSchedule_day);
			this->pnlShowSchedule->Controls->Add(this->dgvFinalSchedule);
			this->pnlShowSchedule->Controls->Add(this->tbStartTime);
			this->pnlShowSchedule->Controls->Add(this->dtpDate);
			this->pnlShowSchedule->Location = System::Drawing::Point(0, 0);
			this->pnlShowSchedule->Name = L"pnlShowSchedule";
			this->pnlShowSchedule->Size = System::Drawing::Size(320, 777);
			this->pnlShowSchedule->TabIndex = 6;
			this->pnlShowSchedule->Visible = false;
			this->pnlShowSchedule->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PSfrmScheduleTypeSelection::pnlShowSchedule_Paint);
			// 
			// pnlMonth
			// 
			this->pnlMonth->Controls->Add(this->tbMonthFrequency);
			this->pnlMonth->Controls->Add(this->btnMonthSave);
			this->pnlMonth->Controls->Add(this->btnMonthNextApp);
			this->pnlMonth->Controls->Add(this->label22);
			this->pnlMonth->Controls->Add(this->label20);
			this->pnlMonth->Controls->Add(this->cbMonthSelection);
			this->pnlMonth->Controls->Add(this->label19);
			this->pnlMonth->Controls->Add(this->label18);
			this->pnlMonth->Controls->Add(this->label17);
			this->pnlMonth->Controls->Add(this->label14);
			this->pnlMonth->Controls->Add(this->tbMonthStartTime);
			this->pnlMonth->Controls->Add(this->tbMonthDuration);
			this->pnlMonth->Controls->Add(this->tbMonthKWH);
			this->pnlMonth->Controls->Add(this->tbMonthApplianceName);
			this->pnlMonth->Controls->Add(this->dgvMonthAppliances);
			this->pnlMonth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlMonth->Location = System::Drawing::Point(0, 0);
			this->pnlMonth->Name = L"pnlMonth";
			this->pnlMonth->Size = System::Drawing::Size(224, 777);
			this->pnlMonth->TabIndex = 13;
			this->pnlMonth->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PSfrmScheduleTypeSelection::pnlMonth_Paint);
			// 
			// tbMonthFrequency
			// 
			this->tbMonthFrequency->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tbMonthFrequency->Location = System::Drawing::Point(799, 305);
			this->tbMonthFrequency->Name = L"tbMonthFrequency";
			this->tbMonthFrequency->Size = System::Drawing::Size(323, 38);
			this->tbMonthFrequency->TabIndex = 16;
			this->tbMonthFrequency->Visible = false;
			// 
			// btnMonthSave
			// 
			this->btnMonthSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMonthSave->Location = System::Drawing::Point(1054, 688);
			this->btnMonthSave->Name = L"btnMonthSave";
			this->btnMonthSave->Size = System::Drawing::Size(254, 41);
			this->btnMonthSave->TabIndex = 14;
			this->btnMonthSave->Text = L"Save";
			this->btnMonthSave->UseVisualStyleBackColor = true;
			// 
			// btnMonthNextApp
			// 
			this->btnMonthNextApp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMonthNextApp->Location = System::Drawing::Point(1054, 585);
			this->btnMonthNextApp->Name = L"btnMonthNextApp";
			this->btnMonthNextApp->Size = System::Drawing::Size(254, 66);
			this->btnMonthNextApp->TabIndex = 13;
			this->btnMonthNextApp->Text = L"Next Appliance";
			this->btnMonthNextApp->UseVisualStyleBackColor = true;
			this->btnMonthNextApp->Click += gcnew System::EventHandler(this, &PSfrmScheduleTypeSelection::btnMonthNextApp_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(469, 227);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(332, 32);
			this->label22->TabIndex = 12;
			this->label22->Text = L"Select from the following:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(550, 308);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(245, 32);
			this->label20->TabIndex = 10;
			this->label20->Text = L"Usage Frequency:";
			this->label20->Visible = false;
			// 
			// cbMonthSelection
			// 
			this->cbMonthSelection->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbMonthSelection->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cbMonthSelection->FormattingEnabled = true;
			this->cbMonthSelection->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Daily", L"Weekly", L"Monthly" });
			this->cbMonthSelection->Location = System::Drawing::Point(799, 227);
			this->cbMonthSelection->Name = L"cbMonthSelection";
			this->cbMonthSelection->Size = System::Drawing::Size(323, 39);
			this->cbMonthSelection->TabIndex = 9;
			this->cbMonthSelection->SelectedIndexChanged += gcnew System::EventHandler(this, &PSfrmScheduleTypeSelection::cbMonthSelection_SelectedIndexChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(630, 458);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(152, 32);
			this->label19->TabIndex = 8;
			this->label19->Text = L"Start Time:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(663, 388);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(130, 32);
			this->label18->TabIndex = 7;
			this->label18->Text = L"Duration:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(992, 38);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(213, 32);
			this->label17->TabIndex = 6;
			this->label17->Text = L"Appliance KWH";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(357, 41);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(223, 32);
			this->label14->TabIndex = 5;
			this->label14->Text = L"Appliance Name";
			// 
			// tbMonthStartTime
			// 
			this->tbMonthStartTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tbMonthStartTime->Location = System::Drawing::Point(799, 458);
			this->tbMonthStartTime->Name = L"tbMonthStartTime";
			this->tbMonthStartTime->Size = System::Drawing::Size(323, 38);
			this->tbMonthStartTime->TabIndex = 4;
			// 
			// tbMonthDuration
			// 
			this->tbMonthDuration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbMonthDuration->Location = System::Drawing::Point(799, 382);
			this->tbMonthDuration->Name = L"tbMonthDuration";
			this->tbMonthDuration->Size = System::Drawing::Size(323, 38);
			this->tbMonthDuration->TabIndex = 3;
			// 
			// tbMonthKWH
			// 
			this->tbMonthKWH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbMonthKWH->Location = System::Drawing::Point(1213, 32);
			this->tbMonthKWH->Name = L"tbMonthKWH";
			this->tbMonthKWH->Size = System::Drawing::Size(109, 38);
			this->tbMonthKWH->TabIndex = 2;
			this->tbMonthKWH->TextChanged += gcnew System::EventHandler(this, &PSfrmScheduleTypeSelection::tbMonthKWH_TextChanged);
			// 
			// tbMonthApplianceName
			// 
			this->tbMonthApplianceName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tbMonthApplianceName->Location = System::Drawing::Point(595, 35);
			this->tbMonthApplianceName->Name = L"tbMonthApplianceName";
			this->tbMonthApplianceName->Size = System::Drawing::Size(323, 38);
			this->tbMonthApplianceName->TabIndex = 1;
			// 
			// dgvMonthAppliances
			// 
			this->dgvMonthAppliances->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMonthAppliances->Location = System::Drawing::Point(57, 155);
			this->dgvMonthAppliances->Name = L"dgvMonthAppliances";
			this->dgvMonthAppliances->RowHeadersWidth = 51;
			this->dgvMonthAppliances->RowTemplate->Height = 24;
			this->dgvMonthAppliances->Size = System::Drawing::Size(371, 562);
			this->dgvMonthAppliances->TabIndex = 0;
			this->dgvMonthAppliances->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PSfrmScheduleTypeSelection::dgvMonthAppliances_CellContentClick);
			// 
			// btnBillGen
			// 
			this->btnBillGen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBillGen->Location = System::Drawing::Point(998, 598);
			this->btnBillGen->Name = L"btnBillGen";
			this->btnBillGen->Size = System::Drawing::Size(310, 63);
			this->btnBillGen->TabIndex = 35;
			this->btnBillGen->Text = L"Bill Generation";
			this->btnBillGen->UseVisualStyleBackColor = true;
			this->btnBillGen->Visible = false;
			this->btnBillGen->Click += gcnew System::EventHandler(this, &PSfrmScheduleTypeSelection::btnBillGen_Click);
			// 
			// btnScheduleShow_Next
			// 
			this->btnScheduleShow_Next->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnScheduleShow_Next->Location = System::Drawing::Point(1163, 710);
			this->btnScheduleShow_Next->Name = L"btnScheduleShow_Next";
			this->btnScheduleShow_Next->Size = System::Drawing::Size(145, 52);
			this->btnScheduleShow_Next->TabIndex = 33;
			this->btnScheduleShow_Next->Text = L"Next";
			this->btnScheduleShow_Next->UseVisualStyleBackColor = true;
			this->btnScheduleShow_Next->Click += gcnew System::EventHandler(this, &PSfrmScheduleTypeSelection::btnScheduleShow_Next_Click_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1126, 295);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 16);
			this->label4->TabIndex = 32;
			this->label4->Text = L"Mascot here";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(851, 72);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(162, 25);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Appliance Name:";
			// 
			// tbApplianceID_StartEnd
			// 
			this->tbApplianceID_StartEnd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tbApplianceID_StartEnd->Location = System::Drawing::Point(1020, 69);
			this->tbApplianceID_StartEnd->Name = L"tbApplianceID_StartEnd";
			this->tbApplianceID_StartEnd->Size = System::Drawing::Size(187, 30);
			this->tbApplianceID_StartEnd->TabIndex = 22;
			// 
			// lbChangeDay
			// 
			this->lbChangeDay->AutoSize = true;
			this->lbChangeDay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbChangeDay->Location = System::Drawing::Point(17, 669);
			this->lbChangeDay->Name = L"lbChangeDay";
			this->lbChangeDay->Size = System::Drawing::Size(310, 25);
			this->lbChangeDay->TabIndex = 19;
			this->lbChangeDay->Text = L"Change Day of selected appliance";
			// 
			// lbChangeTime
			// 
			this->lbChangeTime->AutoSize = true;
			this->lbChangeTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbChangeTime->Location = System::Drawing::Point(20, 518);
			this->lbChangeTime->Name = L"lbChangeTime";
			this->lbChangeTime->Size = System::Drawing::Size(320, 25);
			this->lbChangeTime->TabIndex = 18;
			this->lbChangeTime->Text = L"Change time of Selected appliance ";
			// 
			// lbSchedule_day
			// 
			this->lbSchedule_day->AutoSize = true;
			this->lbSchedule_day->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSchedule_day->Location = System::Drawing::Point(98, 16);
			this->lbSchedule_day->Name = L"lbSchedule_day";
			this->lbSchedule_day->Size = System::Drawing::Size(82, 32);
			this->lbSchedule_day->TabIndex = 13;
			this->lbSchedule_day->Text = L"Date:";
			// 
			// dgvFinalSchedule
			// 
			this->dgvFinalSchedule->AllowUserToAddRows = false;
			this->dgvFinalSchedule->AllowUserToDeleteRows = false;
			this->dgvFinalSchedule->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgvFinalSchedule->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvFinalSchedule->Location = System::Drawing::Point(49, 64);
			this->dgvFinalSchedule->Name = L"dgvFinalSchedule";
			this->dgvFinalSchedule->ReadOnly = true;
			this->dgvFinalSchedule->RowHeadersWidth = 51;
			this->dgvFinalSchedule->RowTemplate->Height = 24;
			this->dgvFinalSchedule->Size = System::Drawing::Size(454, 426);
			this->dgvFinalSchedule->TabIndex = 12;
			this->dgvFinalSchedule->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PSfrmScheduleTypeSelection::dgvFinalSchedule_CellContentClick);
			// 
			// tbStartTime
			// 
			this->tbStartTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbStartTime->Location = System::Drawing::Point(380, 509);
			this->tbStartTime->Name = L"tbStartTime";
			this->tbStartTime->Size = System::Drawing::Size(163, 38);
			this->tbStartTime->TabIndex = 37;
			// 
			// dtpDate
			// 
			this->dtpDate->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpDate->Location = System::Drawing::Point(373, 669);
			this->dtpDate->Name = L"dtpDate";
			this->dtpDate->Size = System::Drawing::Size(206, 22);
			this->dtpDate->TabIndex = 38;
			// 
			// Minutes
			// 
			this->Minutes->AutoSize = true;
			this->Minutes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Minutes->Location = System::Drawing::Point(1158, 190);
			this->Minutes->Name = L"Minutes";
			this->Minutes->Size = System::Drawing::Size(81, 25);
			this->Minutes->TabIndex = 32;
			this->Minutes->Text = L"Minutes\r\n";
			// 
			// mtbStart
			// 
			this->mtbStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mtbStart->Location = System::Drawing::Point(737, 398);
			this->mtbStart->Mask = L"00:00:00";
			this->mtbStart->Name = L"mtbStart";
			this->mtbStart->Size = System::Drawing::Size(117, 38);
			this->mtbStart->TabIndex = 31;
			this->mtbStart->Text = L"090000";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(975, 80);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(87, 32);
			this->label16->TabIndex = 29;
			this->label16->Text = L"KWH:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(550, 79);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(231, 32);
			this->label15->TabIndex = 28;
			this->label15->Text = L"Appliance Name:";
			// 
			// tbApplianceName
			// 
			this->tbApplianceName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbApplianceName->Location = System::Drawing::Point(556, 115);
			this->tbApplianceName->Name = L"tbApplianceName";
			this->tbApplianceName->Size = System::Drawing::Size(369, 38);
			this->tbApplianceName->TabIndex = 27;
			// 
			// tbKwh
			// 
			this->tbKwh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbKwh->Location = System::Drawing::Point(981, 115);
			this->tbKwh->Name = L"tbKwh";
			this->tbKwh->Size = System::Drawing::Size(139, 38);
			this->tbKwh->TabIndex = 26;
			// 
			// btnNextAppliance
			// 
			this->btnNextAppliance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNextAppliance->Location = System::Drawing::Point(1084, 504);
			this->btnNextAppliance->Name = L"btnNextAppliance";
			this->btnNextAppliance->Size = System::Drawing::Size(155, 39);
			this->btnNextAppliance->TabIndex = 21;
			this->btnNextAppliance->Text = L"Next Appliance";
			this->btnNextAppliance->UseVisualStyleBackColor = true;
			this->btnNextAppliance->Click += gcnew System::EventHandler(this, &PSfrmScheduleTypeSelection::btnNextAppliance_Click);
			// 
			// tbDuration
			// 
			this->tbDuration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbDuration->Location = System::Drawing::Point(869, 178);
			this->tbDuration->Name = L"tbDuration";
			this->tbDuration->Size = System::Drawing::Size(274, 38);
			this->tbDuration->TabIndex = 18;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(551, 355);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(90, 25);
			this->label13->TabIndex = 16;
			this->label13->Text = L"Optional ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(569, 398);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(152, 32);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Start Time:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(542, 189);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(295, 32);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Duration of Appliance:";
			// 
			// btnBack2
			// 
			this->btnBack2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBack2->Location = System::Drawing::Point(49, 679);
			this->btnBack2->Name = L"btnBack2";
			this->btnBack2->Size = System::Drawing::Size(131, 59);
			this->btnBack2->TabIndex = 12;
			this->btnBack2->Text = L"Back";
			this->btnBack2->UseVisualStyleBackColor = true;
			this->btnBack2->Click += gcnew System::EventHandler(this, &PSfrmScheduleTypeSelection::btnBack_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(25, 79);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(403, 464);
			this->dataGridView1->TabIndex = 11;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PSfrmScheduleTypeSelection::dataGridView1_CellContentClick);
			// 
			// lbDay
			// 
			this->lbDay->AutoSize = true;
			this->lbDay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDay->Location = System::Drawing::Point(562, 29);
			this->lbDay->Name = L"lbDay";
			this->lbDay->Size = System::Drawing::Size(72, 32);
			this->lbDay->TabIndex = 8;
			this->lbDay->Text = L"Day:";
			// 
			// lbDate
			// 
			this->lbDate->AutoSize = true;
			this->lbDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDate->Location = System::Drawing::Point(26, 29);
			this->lbDate->Name = L"lbDate";
			this->lbDate->Size = System::Drawing::Size(82, 32);
			this->lbDate->TabIndex = 7;
			this->lbDate->Text = L"Date:";
			// 
			// BtnNext2
			// 
			this->BtnNext2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnNext2->Location = System::Drawing::Point(1020, 679);
			this->BtnNext2->Name = L"BtnNext2";
			this->BtnNext2->Size = System::Drawing::Size(235, 59);
			this->BtnNext2->TabIndex = 6;
			this->BtnNext2->Text = L"Next";
			this->BtnNext2->UseVisualStyleBackColor = true;
			this->BtnNext2->Click += gcnew System::EventHandler(this, &PSfrmScheduleTypeSelection::BtnNext2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(88, 545);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(590, 32);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Enter Monthly Budget for Power consumption ";
			// 
			// tbMonthlyBudget
			// 
			this->tbMonthlyBudget->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbMonthlyBudget->Location = System::Drawing::Point(94, 613);
			this->tbMonthlyBudget->Name = L"tbMonthlyBudget";
			this->tbMonthlyBudget->Size = System::Drawing::Size(449, 38);
			this->tbMonthlyBudget->TabIndex = 8;
			this->tbMonthlyBudget->TextChanged += gcnew System::EventHandler(this, &PSfrmScheduleTypeSelection::tbMonthlyBudget_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(563, 622);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(79, 25);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Rupees";
			// 
			// tbDate
			// 
			this->tbDate->Location = System::Drawing::Point(595, 398);
			this->tbDate->Name = L"tbDate";
			this->tbDate->Size = System::Drawing::Size(183, 22);
			this->tbDate->TabIndex = 9;
			this->tbDate->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(88, 155);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(394, 32);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Choose between the following";
			// 
			// cbSelection
			// 
			this->cbSelection->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbSelection->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbSelection->FormattingEnabled = true;
			this->cbSelection->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Day", L"Week", L"Month" });
			this->cbSelection->Location = System::Drawing::Point(94, 199);
			this->cbSelection->Name = L"cbSelection";
			this->cbSelection->Size = System::Drawing::Size(449, 39);
			this->cbSelection->TabIndex = 12;
			// 
			// PSfrmScheduleTypeSelection
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1341, 777);
			this->Controls->Add(this->pnlApplianceSelection);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbMonthlyBudget);
			this->Controls->Add(this->tbDate);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->cbSelection);
			this->Controls->Add(this->label9);
			this->Name = L"PSfrmScheduleTypeSelection";
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &PSfrmScheduleTypeSelection::PSfrmScheduleTypeSelection_Load);
			this->pnlApplianceSelection->ResumeLayout(false);
			this->pnlApplianceSelection->PerformLayout();
			this->pnlShowSchedule->ResumeLayout(false);
			this->pnlShowSchedule->PerformLayout();
			this->pnlMonth->ResumeLayout(false);
			this->pnlMonth->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMonthAppliances))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFinalSchedule))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//All variables 
		int WeekDay_Count = 1;		//for day count
		int monthlyBudget = 0;		//for max budget for power consumption
		float generatedCost = 0;		//to store sum
		String^ applianceName;
		String^ datee;
		float cost = 0.0;			//temp for storing cost
		float kwh = 0.0;			//for storing kwh of an appliance
		double temp = 0;  // This will hold the running total cost
		double taxes = 0;  // for taxes 
		int DayMax = 0;
		//----------------------------------------------------------------------------------------------------------------
		//----------------------------------------------------------------------------------------------------------------
		//----------------------------------------------------------------------------------------------------------------
		//----------------------------------------------------------------------------------------------------------------
		//Parent Form
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{

		// Update the label with the selected date from DateTimePicker
		lbDate->Text = dateTimePicker1->Value.ToString("yyyy-MM-dd");

		//For Schedule table
		tbDate->Text = dateTimePicker1->Value.ToString("yyyy-MM-dd");
		lbSchedule_day->Text = dateTimePicker1->Value.ToString("yyyy-MM-dd");

		// Optional: You can also display the day of the week
		lbDay->Text = "Day: " + dateTimePicker1->Value.DayOfWeek.ToString();

		//when selected, display schedule on the screen as per baba   

		//get the date n the varibalw to acces scheulde
	//	datee = lbDate;

	}

	private: System::Void btnNext_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Check if tbMonthlyBudget is not empty and contains a valid value
		if (String::IsNullOrWhiteSpace(tbMonthlyBudget->Text))
		{
			MessageBox::Show("Please enter a monthly budget.", "Incomplete Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Check if DateTimePicker has a selected value (ensure it is not the default)
		if (dateTimePicker1->Value == DateTimePicker::MinimumDateTime)
		{
			MessageBox::Show("Please select a date.", "Incomplete Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		DayMax = 7; // Default to 7
		if (cbSelection->Text == "Day") // Assuming cbSelection is a ComboBox with text "Day" or other options
		{
			DayMax = 1;
		}
		if (cbSelection->Text == "Month") // Assuming cbSelection is a ComboBox with text "Day" or other options
		{
			pnlMonth->Visible = true;
			pnlMonth->Show();

			// Ensure you're passing the correct date format from DateTimePicker to the form
			String^ selectedDate = dateTimePicker1->Value.ToString("yyyy-MM-dd");  // Adjust format as needed
			frmMonthSchedule^ obj = gcnew frmMonthSchedule(selectedDate);  // Pass the string formatted date
			obj->ShowDialog();
		}

		//day/week selection
		if (cbSelection->Text == "Day")
		{
			isDailyMode = true; // Switch to daily mode
		}
		else
			isDailyMode = false; // Switch to weekly mode

		// If all conditions are met, show the next panel
	
			pnlApplianceSelection->Show();

	}

	private: System::Void PSfrmScheduleTypeSelection_Load(System::Object^ sender, System::EventArgs^ e)
	{
		pnlApplianceSelection->Visible = false;
		//show data in tables
		try
		{
			lbDate->Text = dateTimePicker1->Value.ToString("yyyy-MM-dd");
			lbSchedule_day->Text = dateTimePicker1->Value.ToString("yyyy-MM-dd");
			lbDay->Text = "Day: " + dateTimePicker1->Value.DayOfWeek.ToString();

			HelperClass h;
			sqlConn->ConnectionString = h.ConString;

			sqlConn->Open();
			sqlCmd->Connection = sqlConn;

			// First query for tb_PSAppliances
			sqlCmd->CommandText = "Select Name, Kwh from tb_PSAppliances";
			sqlRd = sqlCmd->ExecuteReader();
			sqlDt->Load(sqlRd);
			sqlRd->Close();
			dataGridView1->DataSource = sqlDt; // Display in dgvAppliances
			dgvMonthAppliances->DataSource = sqlDt; // Display in dgvAppliances
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Failed to Access DataBase", "Error", MessageBoxButtons::OK);
		}

	}

	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pnlApplianceSelection->Hide();
	}

		   //	nooooo       arrange later//----------------------------------------------------------------------------------------------------------------
			   //----------------------------------------------------------------------------------------------------------------
			   //----------------------------------------------------------------------------------------------------------------
			   //----------------------------------------------------------------------------------------------------------------
			   //Appliances Adding form
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		if (e->RowIndex >= 0)
		{
			System::Windows::Forms::DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];

			// Assign appliance name
			tbApplianceName->Text = row->Cells[0]->Value->ToString();
			tbKwh->Text = row->Cells[1]->Value->ToString();

			// Assign kWh of appliance, ensuring the value is converted properly
			//kwh = System::Convert::ToInt32(row->Cells[2]->Value);
		}
	}

		   //private:
		   //	double totalUnits = 0;  // To store the running total of units
		   //	double MonthlyBudget = 1000; // Example budget for validation

		   //private: System::Void btnNextAppliance_Click(System::Object^ sender, System::EventArgs^ e)
		   //{
		   //	try
		   //	{
		   //		// Validate required fields
		   //		if (String::IsNullOrWhiteSpace(tbDuration->Text) || String::IsNullOrWhiteSpace(tbApplianceName->Text))
		   //		{
		   //			MessageBox::Show("Please fill in all required fields.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		   //			return;
		   //		}

		   //		// Validate tbDuration (ensure it's a valid number)
		   //		int duration;
		   //		if (!Int32::TryParse(tbDuration->Text, duration) || duration <= 0)
		   //		{
		   //			MessageBox::Show("Please enter a valid duration (positive integer).", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		   //			return;
		   //		}

		   //		// Handle and validate the date
		   //		String^ dateString = lbDate->Text;
		   //		DateTime selectedDate;
		   //		if (!DateTime::TryParse(dateString, selectedDate))
		   //		{
		   //			MessageBox::Show("Invalid date format. Please select a valid date.", "Date Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		   //			return;
		   //		}

		   //		// Handle the start time
		   //		String^ startTime = String::IsNullOrWhiteSpace(mtbStart->Text) ? "09:00:00" : mtbStart->Text;
		   //		DateTime startTimeParsed;
		   //		/*	if (!DateTime::TryParseExact(startTime, "HH:mm:ss", nullptr, System::Globalization::DateTimeStyles::None, startTimeParsed))
		   //			{
		   //				MessageBox::Show("Invalid start time format. Please use HH:mm:ss format.", "Invalid Time", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		   //				return;
		   //			}*/



		   //			// Insert data into the tb_PSSchedule table
		   //		HelperClass h;
		   //		String^ connString = h.ConString;
		   //		SqlConnection^ connection = gcnew SqlConnection(connString);

		   //		// Prepare the SQL query
		   //		String^ sqlquery = "INSERT INTO tb_PSSchedule (Name, Duration, Start_time, End_time, Date) VALUES ";
		   //		sqlquery += "(@Name, @Duration, @Start_time, NULL, @Date)";

		   //		SqlCommand^ command = gcnew SqlCommand(sqlquery, connection);
		   //		command->Parameters->AddWithValue("@Name", tbApplianceName->Text);
		   //		command->Parameters->AddWithValue("@Duration", duration);
		   //		command->Parameters->AddWithValue("@Start_time", startTimeParsed.ToString("HH:mm:ss"));
		   //		command->Parameters->AddWithValue("@Date", selectedDate.ToString("yyyy-MM-dd"));

		   //		connection->Open();
		   //		command->ExecuteNonQuery();
		   //		connection->Close();

		   //		// Retrieve the Start_time and Duration for the latest entry
		   //		sqlquery = "SELECT TOP 1 Start_time, Duration FROM tb_PSSchedule WHERE Name = @Name ORDER BY schedule_id DESC";
		   //		command = gcnew SqlCommand(sqlquery, connection);
		   //		command->Parameters->AddWithValue("@Name", tbApplianceName->Text);
		   //		// Validate and format the date from lbDate
		   //		try {
		   //			String^ dateText = lbDate->Text;

		   //			// Check if the date is empty or invalid
		   //			if (String::IsNullOrWhiteSpace(dateText)) {
		   //				MessageBox::Show("Please select a valid date.", "Date Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		   //				return;
		   //			}

		   //			// Parse the date into a standard format
		   //			DateTime parsedDate = DateTime::ParseExact(dateText, "yyyy-MM-dd", nullptr); // Ensure the format matches the database
		   //			String^ formattedDate = parsedDate.ToString("yyyy-MM-dd"); // Standard ISO format

		   //			// Use the formatted date for SQL queries
		   //			sqlquery += "'" + formattedDate + "')"; // Append to the query

		   //		}
		   //		catch (FormatException^ ex) {
		   //			MessageBox::Show("Invalid date format. Please use the format YYYY-MM-DD.", "Date Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		   //			return;
		   //		}

		   //		connection->Open();
		   //		SqlDataReader^ reader = command->ExecuteReader();

		   //		DateTime startDateTime;
		   //		if (reader->Read())
		   //		{
		   //			startDateTime = DateTime::Parse(reader["Start_time"]->ToString());
		   //			duration = Int32::Parse(reader["Duration"]->ToString());
		   //		}
		   //		connection->Close();

		   //		// Calculate End_time
		   //		DateTime endDateTime = startDateTime.AddMinutes(duration);
		   //		String^ endTime = endDateTime.ToString("HH:mm:ss");

		   //		// Update End_time in the database
		   //		sqlquery = "UPDATE tb_PSSchedule SET End_time = @End_time WHERE Name = @Name AND Start_time = @Start_time";
		   //		SqlCommand^ updateCommand = gcnew SqlCommand(sqlquery, connection);
		   //		updateCommand->Parameters->AddWithValue("@End_time", endTime);
		   //		updateCommand->Parameters->AddWithValue("@Name", tbApplianceName->Text);
		   //		updateCommand->Parameters->AddWithValue("@Start_time", startDateTime.ToString("HH:mm:ss"));

		   //		connection->Open();
		   //		updateCommand->ExecuteNonQuery();
		   //		connection->Close();

		   //		// Retrieve Kwh from the appliances table
		   //		sqlquery = "SELECT Kwh FROM tb_PSAppliances WHERE Name = @Name";
		   //		command = gcnew SqlCommand(sqlquery, connection);
		   //		command->Parameters->AddWithValue("@Name", tbApplianceName->Text);

		   //		connection->Open();
		   //		reader = command->ExecuteReader();
		   //		double kwh = 0;
		   //		if (reader->Read())
		   //		{
		   //			kwh = Convert::ToDouble(reader["Kwh"]);
		   //		}
		   //		connection->Close();

		   //		// Calculate cost and units
		   //		double cost = duration * kwh;
		   //		double units = duration * kwh;
		   //		temp += cost;
		   //		totalUnits += units;

		   //		// Update Cost and Unit columns
		   //		sqlquery = "UPDATE tb_PSSchedule SET Cost = @Cost, Unit = @Unit WHERE Name = @Name AND Start_time = @Start_time";
		   //		command = gcnew SqlCommand(sqlquery, connection);
		   //		command->Parameters->AddWithValue("@Cost", cost);
		   //		command->Parameters->AddWithValue("@Unit", units);
		   //		command->Parameters->AddWithValue("@Name", tbApplianceName->Text);
		   //		command->Parameters->AddWithValue("@Start_time", startDateTime.ToString("HH:mm:ss"));

		   //		connection->Open();
		   //		command->ExecuteNonQuery();
		   //		connection->Close();

		   //		// Double the cost if units exceed 200
		   //		if (totalUnits > 200)
		   //		{
		   //			cost *= 2;
		   //			sqlquery = "UPDATE tb_PSSchedule SET Cost = @DoubledCost WHERE Name = @Name AND Start_time = @Start_time";
		   //			command = gcnew SqlCommand(sqlquery, connection);
		   //			command->Parameters->AddWithValue("@DoubledCost", cost); //peakhour cost to be replaced here
		   //			command->Parameters->AddWithValue("@Name", tbApplianceName->Text);
		   //			command->Parameters->AddWithValue("@Start_time", startDateTime.ToString("HH:mm:ss"));

		   //			connection->Open();
		   //			command->ExecuteNonQuery();
		   //			connection->Close();

		   //			MessageBox::Show("Total units have exceeded 200. The cost for this appliance has been doubled.", "Units Exceeded", MessageBoxButtons::OK);
		   //		}

		   //		// Notify the user about the total cost
		   //		MessageBox::Show("Total Cost for this session: " + temp.ToString(), "Cost Calculation", MessageBoxButtons::OK);

		   //		// Clear textboxes after processing
		   //		tbDuration->Clear();
		   //		tbApplianceName->Clear();
		   //	}
		   //	catch (Exception^ ex)
		   //	{
		   //		// Show an error message if something goes wrong
		   //		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		   //	}
		   //}

	private: System::Void btnNextAppliance_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			// Validate required fields
			if (String::IsNullOrWhiteSpace(tbDuration->Text) || String::IsNullOrWhiteSpace(tbApplianceName->Text))
			{
				MessageBox::Show("Please fill in all required fields.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			// Validate tbDuration (ensure it's a valid number)
			int duration;
			if (!Int32::TryParse(tbDuration->Text, duration) || duration <= 0)
			{
				MessageBox::Show("Please enter a valid duration (positive integer).", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			// Handle and validate the date
			String^ dateString = lbDate->Text;
			DateTime selectedDate;
			if (!DateTime::TryParse(dateString, selectedDate))
			{
				MessageBox::Show("Invalid date format. Please select a valid date.", "Date Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Handle the start time
			String^ startTime = String::IsNullOrWhiteSpace(mtbStart->Text) ? "09:00:00" : mtbStart->Text;
			DateTime startTimeParsed;

			// Get areacode and associated details
			HelperClass h;
			String^ connString = h.ConString;
			SqlConnection^ connection = gcnew SqlConnection(connString);

			String^ areacode;
			double peakRates = 0, offPeakRates = 0;
			TimeSpan peakStartTime, peakEndTime;

			// Retrieve areacode and related information from District
			String^ sqlquery = "SELECT d.D_peakrates, d.D_offpeakrates, d.D_Taxes, d.D_peakstarttime, d.D_peakendtime "
				"FROM tb_PSAppliances a "
				"INNER JOIN District d ON a.areacode = d.D_name "
				"WHERE a.Name = @Name";

			SqlCommand^ command = gcnew SqlCommand(sqlquery, connection);
			command->Parameters->AddWithValue("@Name", tbApplianceName->Text);
			connection->Open();
			SqlDataReader^ reader = command->ExecuteReader();

			if (reader->Read())
			{
				peakRates = Convert::ToDouble(reader["D_peakrates"]);
				offPeakRates = Convert::ToDouble(reader["D_offpeakrates"]);
				taxes = Convert::ToDouble(reader["D_Taxes"]);
				peakStartTime = TimeSpan::Parse(reader["D_peakstarttime"]->ToString());
				peakEndTime = TimeSpan::Parse(reader["D_peakendtime"]->ToString());
			}
			connection->Close();

			// Retrieve user_id from tb_PSAppliances
			int userId = 0;
			sqlquery = "SELECT user_id FROM tb_PSAppliances WHERE Name = @Name";
			command = gcnew SqlCommand(sqlquery, connection);
			command->Parameters->AddWithValue("@Name", tbApplianceName->Text);
			connection->Open();
			reader = command->ExecuteReader();

			if (reader->Read())
			{
				userId = Convert::ToInt32(reader["user_id"]);
			}
			connection->Close();

			// Deduct taxes from the monthly budget
			monthlyBudget -= taxes;
			if (monthlyBudget <= 0)
			{
				MessageBox::Show("Budget exceeded due to taxes.", "Budget Error", MessageBoxButtons::OK);
				return;
			}

			// Calculate cost based on peak or off-peak rates
			TimeSpan startTimeSpan = startTimeParsed.TimeOfDay;
			double kwh = 0;
			sqlquery = "SELECT Kwh FROM tb_PSAppliances WHERE Name = @Name";
			command = gcnew SqlCommand(sqlquery, connection);
			command->Parameters->AddWithValue("@Name", tbApplianceName->Text);

			connection->Open();
			reader = command->ExecuteReader();
			if (reader->Read())
			{
				kwh = Convert::ToDouble(reader["Kwh"]);
			}
			connection->Close();

			double cost = 0;
			if (startTimeSpan >= peakStartTime && startTimeSpan <= peakEndTime)
			{
				cost = kwh * duration * peakRates; // Peak time
			}
			else
			{
				cost = kwh * duration * offPeakRates; // Off-peak time
			}

			// Check if units exceed 200, and if so, double the cost
			double units = kwh * duration; // Total units
			if (units > 200)
			{
				cost *= 2;
				MessageBox::Show("Total units have exceeded 200. The cost for this appliance has been doubled.", "Units Exceeded", MessageBoxButtons::OK);
			}

			// Check if the calculated cost exceeds the available budget
			if (cost > monthlyBudget)
			{
				MessageBox::Show("Cost exceeds the available budget.", "Budget Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			// Add the new check for high usage: cost > 100 and peak time
			if (cost > 100 && startTimeSpan >= peakStartTime && startTimeSpan <= peakEndTime)
			{
				MessageBox::Show("Warning: This appliance is a high-usage item, costing more during peak hours.", "High Usage", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}

			// Insert data into tb_PSSchedule
			sqlquery = "INSERT INTO tb_PSSchedule (Name, Duration, Start_time, End_time, Date, Cost, Unit) "
				"VALUES (@Name, @Duration, @Start_time, NULL, @Date, @Cost, @Unit)";

			SqlCommand^ insertCommand = gcnew SqlCommand(sqlquery, connection);
			insertCommand->Parameters->AddWithValue("@Name", tbApplianceName->Text);
			insertCommand->Parameters->AddWithValue("@Duration", duration);
			insertCommand->Parameters->AddWithValue("@Start_time", startTimeParsed.ToString("HH:mm:ss"));
			insertCommand->Parameters->AddWithValue("@Date", selectedDate.ToString("yyyy-MM-dd"));
			insertCommand->Parameters->AddWithValue("@Cost", cost);
			insertCommand->Parameters->AddWithValue("@Unit", units);

			connection->Open();
			insertCommand->ExecuteNonQuery();
			connection->Close();

			// Clear textboxes after processing
			tbDuration->Clear();
			tbApplianceName->Clear();
		}
		catch (Exception^ ex)
		{
			// Show an error message if something goes wrong
			MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}




	private: System::Void btnScheduleShow_Back_Click(System::Object^ sender, System::EventArgs^ e)
	{
		pnlShowSchedule->Hide();
	}

	private: System::Void tbMonthlyBudget_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			// Attempt to parse the text as an integer
			int value = Int32::Parse(tbMonthlyBudget->Text);

			// Check if the value is positive
			if (value > 0)
			{
				monthlyBudget = value; // Store the valid positive value
			}
			else
			{
				monthlyBudget = 0; // Set to default if not positive
				MessageBox::Show("Please enter a positive value.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		catch (FormatException^)
		{
			// Handle invalid input (e.g., non-numeric value)
			monthlyBudget = 0;
			MessageBox::Show("Please enter a valid numeric value.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		catch (OverflowException^)
		{
			// Handle input too large or too small for an int
			monthlyBudget = 0;
			MessageBox::Show("The value is too large. Please enter a smaller number.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}




		   //private:
		   //	int dayCounter = 1; // Counter to track the current day, starting at 1
		   //	DateTime currentDate; // Store the initial date globally
		   //	DateTime TempDate; // Store the initial date globally

		   //	System::Void BtnNext2_Click(System::Object^ sender, System::EventArgs^ e)
		   //	{
		   //		try
		   //		{
		   //			// Ensure that we process for 7 days
		   //			if (dayCounter <= DayMax) // Change from < 7 to <= 7 so we process for all 7 days
		   //			{
		   //				// Parse the initial date from lbDate on the first click (only once)
		   //				if (dayCounter == 1)
		   //				{
		   //					if (!DateTime::TryParse(lbDate->Text, currentDate))
		   //					{
		   //						throw gcnew Exception("Invalid date format in lbDate.");
		   //					}
		   //					TempDate = currentDate;
		   //					// Debugging: Print the initial parsed date
		   //					Console::WriteLine("Initial Date: " + currentDate.ToString("yyyy-MM-dd"));
		   //				}

		   //				// Increment the date based on the counter
		   //				DateTime incrementedDate = currentDate.AddDays(dayCounter); // Start from 0 on the first click

		   //				// Debugging: Print the incremented date before updating the label
		   //				Console::WriteLine("Incremented Date: " + incrementedDate.ToString("yyyy-MM-dd"));

		   //				// Update the lbDate label with the incremented date
		   //				lbDate->Text = incrementedDate.ToString("yyyy-MM-dd");

		   //				// Force the label to refresh and display the updated value
		   //				lbDate->Refresh();

		   //				// Initialize the database connection
		   //				HelperClass h;
		   //				String^ connString = h.ConString;
		   //				SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		   //				sqlConn->Open();

		   //				// SQL Command to fetch data for the incremented date
		   //				SqlCommand^ sqlCmd = gcnew SqlCommand();
		   //				sqlCmd->Connection = sqlConn;
		   //				sqlCmd->CommandText = "SELECT Name, Start_time, End_time FROM tb_PSSchedule WHERE date = @Date";
		   //				sqlCmd->Parameters->AddWithValue("@Date", TempDate);

		   //				// Load data into a DataTable
		   //				DataTable^ scheduleTable = gcnew DataTable();
		   //				SqlDataReader^ sqlRd = sqlCmd->ExecuteReader();
		   //				scheduleTable->Load(sqlRd);
		   //				sqlRd->Close();

		   //				// Bind data to the DataGridView
		   //				dgvFinalSchedule->DataSource = scheduleTable;

		   //				// Close the connection
		   //				sqlConn->Close();

		   //				// Increment the counter for the next click
		   //				dayCounter++;

		   //				// If we are on the 7th day, show the next panel
		   //				if (dayCounter == DayMax)
		   //					BtnNext2->Text = "Schedule";
		   //				if (dayCounter > DayMax)
		   //				{
		   //					dayCounter = 1;
		   //					currentDate = TempDate;
		   //					//MessageBox::Show("7 days processed. Moving to next panel.", "Information", MessageBoxButtons::OK);

		   //					pnlShowSchedule->Hide(); // Hide current panel
		   //					pnlShowSchedule->Show(); // Show next panel (replace pnlNextPanel with your actual panel variable)
		   //				}
		   //			}
		   //			else
		   //			{
		   //				// If 7 days are already processed, no more actions
		   //				// This part is unnecessary now due to the change in the flow above
		   //				// The form will transition automatically after 7 iterations
		   //			}
		   //		}
		   //		catch (SqlException^ sqlEx)
		   //		{
		   //			// Handle SQL exceptions
		   //			MessageBox::Show("SQL Error: " + sqlEx->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		   //		}
		   //		catch (Exception^ ex)
		   //		{
		   //			// Handle general exceptions
		   //			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		   //		}
		   //	}






	private:
		int dayCounter = 1; // Counter to track the current day, starting at 1
		DateTime currentDate; // Store the initial date globally
		DateTime TempDate; // Temporary storage for the initial date
		bool isDailyMode = true; // Flag to toggle between daily and weekly modes

		System::Void BtnNext2_Click(System::Object^ sender, System::EventArgs^ e)
		{
			try
			{
				// Handle logic based on daily or weekly mode
				if (isDailyMode || dayCounter <= DayMax)
				{
					// Parse the initial date from lbDate on the first click (only once)
					if (dayCounter == 1)
					{
						if (!DateTime::TryParse(lbDate->Text, currentDate))
						{
							throw gcnew Exception("Invalid date format in lbDate.");
						}
						TempDate = currentDate;
						Console::WriteLine("Initial Date: " + currentDate.ToString("yyyy-MM-dd"));
					}

					// Increment the date for weekly mode or stay on the same day for daily mode
					DateTime targetDate = isDailyMode ? currentDate : currentDate.AddDays(dayCounter);

					// Debugging: Print the target date before updating the label
					Console::WriteLine("Target Date: " + targetDate.ToString("yyyy-MM-dd"));

					// Update the lbDate label with the target date
					lbDate->Text = targetDate.ToString("yyyy-MM-dd");
					lbDate->Refresh();

					// Initialize the database connection
					HelperClass h;
					String^ connString = h.ConString;
					SqlConnection^ sqlConn = gcnew SqlConnection(connString);
					sqlConn->Open();

					// SQL Command to fetch data for the target date
					SqlCommand^ sqlCmd = gcnew SqlCommand();
					sqlCmd->Connection = sqlConn;
					sqlCmd->CommandText = "SELECT Name, Start_time, End_time FROM tb_PSSchedule WHERE date = @Date";
					sqlCmd->Parameters->AddWithValue("@Date", targetDate);

					// Load data into a DataTable
					DataTable^ scheduleTable = gcnew DataTable();
					SqlDataReader^ sqlRd = sqlCmd->ExecuteReader();
					scheduleTable->Load(sqlRd);
					sqlRd->Close();

					// Bind data to the DataGridView
					dgvFinalSchedule->DataSource = scheduleTable;

					// Close the connection
					sqlConn->Close();

					// Increment the counter only for weekly mode
					if (!isDailyMode)
					{
						dayCounter++;
					}

					// Handle end of processing logic
					if (isDailyMode)
					{
						BtnNext2->Text = "Schedule";
						isDailyMode = false; // Reset to avoid multiple daily clicks
						// Transition to the next panel or logic
						//this->Hide();			
					//	btnBillGen->Visible = true;

						pnlShowSchedule->Show(); // Replace with your actual target panel
					}
					else if (dayCounter == DayMax)
					{
						BtnNext2->Text = "Schedule";
						//btnBillGen->Visible = true;
					}
					else if (dayCounter > DayMax)
					{
						dayCounter = 1;
						currentDate = TempDate;

						// Transition to the next panel or logic
						//this->Hide();
						pnlShowSchedule->Show(); // Replace with your actual target panel
					}
				}
			}
			catch (SqlException^ sqlEx)
			{
				MessageBox::Show("SQL Error: " + sqlEx->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}






























	private: System::Void btnScheduleShow_Next_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Updated Date Label: " + lbSchedule_day->Text);

	}
	private: System::Void btnScheduleShow_Next_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			if (dayCounter <= DayMax)
			{
				// Initialize incrementedDate early
				DateTime incrementedDate;
				if (!DateTime::TryParse(lbSchedule_day->Text, incrementedDate))
				{
					throw gcnew Exception("Invalid date format in lbSchedule_day.");
				}

				// Initialize TempDate if dayCounter is 1
				if (dayCounter == 1)
				{
					if (!DateTime::TryParse(lbSchedule_day->Text, TempDate))
					{
						throw gcnew Exception("Invalid date format in lbDate.");
					}
					Console::WriteLine("Initial Date: " + TempDate.ToString("yyyy-MM-dd"));
				}

				if (!String::IsNullOrEmpty(tbStartTime->Text)) // Check if tbStartTime is not empty
				{
					TimeSpan startTime;
					// Parse the input as hours explicitly
					String^ formattedTime = tbStartTime->Text->PadLeft(2, '0') + ":00:00"; // Ensure hh:mm:ss format
					if (!(TimeSpan::TryParseExact(formattedTime, "hh\\:mm\\:ss", System::Globalization::CultureInfo::InvariantCulture, startTime)))
					{
						throw gcnew Exception("Invalid time format in tbStartTime.");
					}

					// SQL operations
					HelperClass h;
					String^ connString = h.ConString;
					SqlConnection^ sqlConn = gcnew SqlConnection(connString);
					sqlConn->Open();

					try
					{
						// Fetch duration
						SqlCommand^ durationCmd = gcnew SqlCommand();
						durationCmd->Connection = sqlConn;
						durationCmd->CommandText = "SELECT duration FROM tb_PSSchedule WHERE date = @Date AND Name = @Name";
						durationCmd->Parameters->AddWithValue("@Date", incrementedDate.ToString("yyyy-MM-dd"));
						durationCmd->Parameters->AddWithValue("@Name", tbApplianceID_StartEnd->Text);

						SqlDataReader^ durationReader = durationCmd->ExecuteReader();
						int duration = 0;

						if (durationReader->Read())
						{
							if (!durationReader->IsDBNull(0))
							{
								duration = durationReader->GetInt32(0);
							}
							else
							{
								throw gcnew Exception("Duration not found for the specified record.");
							}
						}
						durationReader->Close();

						TimeSpan endTime = startTime.Add(TimeSpan(0, duration, 0));

						// Update schedule
						SqlCommand^ updateCmd = gcnew SqlCommand();
						updateCmd->Connection = sqlConn;
						updateCmd->CommandText = "UPDATE tb_PSSchedule SET Start_time = '" + startTime.ToString() + "' , End_time = '" + endTime.ToString() + "' WHERE date = '" + incrementedDate.ToString("yyyy-MM-dd") + "' AND Name = '" + tbApplianceID_StartEnd->Text + "'";

						int rowsAffected = updateCmd->ExecuteNonQuery();
						if (rowsAffected > 0)
						{
							MessageBox::Show("Schedule updated successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
						}
						else
						{
							MessageBox::Show("No matching record found to update.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
						}
					}
					finally
					{
						sqlConn->Close();
					}
				}
				else
				{
					// Do nothing if tbStartTime is empty
					Console::WriteLine("tbStartTime is empty. Skipping update.");
				}

				// Check if the user has selected a date in dtpDate
				if (dtpDate->Value != DateTime::MinValue)
				{
					// Move data for the appliance to the selected date (dtpDate)
					DateTime selectedDate = dtpDate->Value;

					// Update schedule to the selected date
					HelperClass h2;
					String^ connString2 = h2.ConString;
					SqlConnection^ sqlConn2 = gcnew SqlConnection(connString2);
					sqlConn2->Open();

					try
					{
						SqlCommand^ updateDateCmd = gcnew SqlCommand();
						updateDateCmd->Connection = sqlConn2;
						updateDateCmd->CommandText = "UPDATE tb_PSSchedule SET date = @NewDate WHERE Name = @Name";
						updateDateCmd->Parameters->AddWithValue("@NewDate", selectedDate.ToString("yyyy-MM-dd"));
						updateDateCmd->Parameters->AddWithValue("@Name", tbApplianceID_StartEnd->Text);

						int rowsAffected = updateDateCmd->ExecuteNonQuery();
						if (rowsAffected > 0)
						{
							MessageBox::Show("Data moved to the selected date.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
						}
						else
						{
							MessageBox::Show("No data found to move.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
						}
					}
					finally
					{
						sqlConn2->Close();
					}

					// Clear the selected date from dtpDate after the operation is complete
					dtpDate->Value = DateTime(2024, 11, 18);  // Set the date to November 18, 2024
				}

				incrementedDate = TempDate.AddDays(dayCounter);
				// Fetch and display updated schedule
				HelperClass h3;
				String^ connString3 = h3.ConString;
				SqlConnection^ sqlConn3 = gcnew SqlConnection(connString3);
				sqlConn3->Open();

				try
				{
					SqlCommand^ sqlCmd = gcnew SqlCommand();
					sqlCmd->Connection = sqlConn3;
					sqlCmd->CommandText = "SELECT Name, Start_time, End_time FROM tb_PSSchedule WHERE date = @Date";
					sqlCmd->Parameters->AddWithValue("@Date", incrementedDate.ToString("yyyy-MM-dd"));

					DataTable^ scheduleTable = gcnew DataTable();
					SqlDataReader^ sqlRd = sqlCmd->ExecuteReader();
					scheduleTable->Load(sqlRd);
					sqlRd->Close();

					if (scheduleTable->Rows->Count > 0)
					{
						// MessageBox::Show("Data fetched for " + incrementedDate.ToString("yyyy-MM-dd"));
					}
					else
					{
						MessageBox::Show("No data found for next date.");
					}

					dgvFinalSchedule->DataSource = scheduleTable;
				}
				finally
				{
					sqlConn3->Close();
				}

				lbSchedule_day->Text = incrementedDate.ToString("yyyy-MM-dd");
				Console::WriteLine("Incremented Date: " + incrementedDate.ToString("yyyy-MM-dd"));
				dayCounter++;
				Console::WriteLine("Day Counter: " + dayCounter);

				if (dayCounter == DayMax)
				{
					Console::WriteLine("7 days processed. Transitioning to the next panel.");
					btnScheduleShow_Next->Text = "Home";
					//make the bill button visible (which will calculate the bill)
					btnBillGen->Visible = true;
				}
				if (dayCounter == DayMax + 1 && btnBillGen->Visible == true)
				{
					pnlShowSchedule->Hide();
				}
			}
		}
		catch (SqlException^ sqlEx)
		{
			MessageBox::Show("SQL Error: " + sqlEx->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		tbStartTime->Clear();
		tbApplianceID_StartEnd->Clear();
	}









	private: System::Void dgvFinalSchedule_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		if (e->RowIndex >= 0)
		{
			System::Windows::Forms::DataGridViewRow^ row = dgvFinalSchedule->Rows[e->RowIndex];

			// Assign appliance name
			tbApplianceID_StartEnd->Text = row->Cells[0]->Value->ToString();
		}
	}
	private: System::Void btnBillGen_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int budget = Convert::ToInt32(tbMonthlyBudget->Text);  // Convert the Text to integer
		frmBillGeneration^ obj = gcnew frmBillGeneration(budget, taxes);
		obj->ShowDialog();
	}



	private: System::Void pnlShowSchedule_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{
		if (DayMax == 1)
		{
			//Console::WriteLine("Single day schedule processed.");
			btnScheduleShow_Next->Text = "Home";
			btnBillGen->Visible = true; // Ensure the button is visible
			//pnlShowSchedule->Hide();    // Hide the panel immediately if needed
			return; // Exit to avoid further increments
		}
	}
	private: System::Void tbMonthKWH_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

		   //-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
		   //-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
		   //-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
		   //-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
		   //-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
		   //-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	private: System::Void btnMonthNextApp_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			// Validate required fields
			if (String::IsNullOrWhiteSpace(tbMonthDuration->Text) ||
				String::IsNullOrWhiteSpace(tbMonthStartTime->Text) ||
				String::IsNullOrWhiteSpace(tbMonthApplianceName->Text))
			{
				MessageBox::Show("Please fill in all required fields.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			// Parse duration
			int duration;
			if (!Int32::TryParse(tbMonthDuration->Text, duration) || duration <= 0)
			{
				MessageBox::Show("Please enter a valid duration (positive integer).", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			// Parse start time
			TimeSpan startTime;
			if (!TimeSpan::TryParseExact(tbMonthStartTime->Text, "hh\\:mm", System::Globalization::CultureInfo::InvariantCulture, startTime))
			{
				MessageBox::Show("Invalid start time format. Please use HH:mm.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			// Calculate end time
			TimeSpan durationTimeSpan = TimeSpan::FromMinutes(duration);
			TimeSpan endTime = startTime.Add(durationTimeSpan);

			// Get initial date from DateTimePicker
			DateTime currentDate = dateTimePicker1->Value;

			// Database connection setup
			HelperClass h;
			String^ connString = h.ConString;
			SqlConnection^ connection = gcnew SqlConnection(connString);

			int frequency = 1; // Default frequency for daily
			if (!String::IsNullOrWhiteSpace(tbMonthFrequency->Text))
			{
				Int32::TryParse(tbMonthFrequency->Text, frequency);
			}

			// Check if Daily or Weekly is selected
			String^ selection = cbMonthSelection->Text;

			if (selection == "daily")
			{
				// Daily scheduling logic
				for (int i = 0; i < 30; i++)
				{
					// Prepare the SQL query for inserting data
					String^ sqlQuery = "INSERT INTO tb_PSSchedule (Name, Start_time, End_time, duration, date, Cost, Unit) VALUES (@Name, @Start_time, @End_time, @Duration, @Date, @Cost, @Unit)";
					SqlCommand^ command = gcnew SqlCommand(sqlQuery, connection);

					// Calculate KWH and cost from appliances table
					String^ applianceName = tbMonthApplianceName->Text;
					double kwh = 0;
					String^ fetchKwhQuery = "SELECT Kwh FROM tb_PSAppliances WHERE Name = @Name";
					SqlCommand^ fetchCommand = gcnew SqlCommand(fetchKwhQuery, connection);
					fetchCommand->Parameters->AddWithValue("@Name", applianceName);

					connection->Open();
					SqlDataReader^ reader = fetchCommand->ExecuteReader();
					if (reader->Read())
					{
						kwh = Convert::ToDouble(reader["Kwh"]);
					}
					connection->Close();

					double cost = kwh * duration;
					double units = kwh * duration;

					// Add parameters to query
					command->Parameters->AddWithValue("@Name", applianceName);
					command->Parameters->AddWithValue("@Start_time", startTime.ToString("hh\\:mm"));
					command->Parameters->AddWithValue("@End_time", endTime.ToString("hh\\:mm"));
					command->Parameters->AddWithValue("@Duration", duration);
					command->Parameters->AddWithValue("@Date", currentDate.ToString("yyyy-MM-dd"));
					command->Parameters->AddWithValue("@Cost", cost);
					command->Parameters->AddWithValue("@Unit", units);

					// Execute the query
					connection->Open();
					command->ExecuteNonQuery();
					connection->Close();

					// Move to the next day
					currentDate = currentDate.AddDays(1);
				}
			}
			else if (selection == "Monthly")
			{
				// Monthly scheduling logic
				tbMonthFrequency->Visible = true; // Show frequency input for monthly

				for (int i = 0; i < 30; i += frequency) // Use frequency to insert data for the whole month
				{
					// Prepare the SQL query for inserting data
					String^ sqlQuery = "INSERT INTO tb_PSSchedule (Name, Start_time, End_time, duration, date, Cost, Unit) VALUES (@Name, @Start_time, @End_time, @Duration, @Date, @Cost, @Unit)";
					SqlCommand^ command = gcnew SqlCommand(sqlQuery, connection);

					// Calculate KWH and cost from appliances table
					String^ applianceName = tbMonthApplianceName->Text;
					double kwh = 0;
					String^ fetchKwhQuery = "SELECT Kwh FROM tb_PSAppliances WHERE Name = @Name";
					SqlCommand^ fetchCommand = gcnew SqlCommand(fetchKwhQuery, connection);
					fetchCommand->Parameters->AddWithValue("@Name", applianceName);

					connection->Open();
					SqlDataReader^ reader = fetchCommand->ExecuteReader();
					if (reader->Read())
					{
						kwh = Convert::ToDouble(reader["Kwh"]);
					}
					connection->Close();

					double cost = kwh * duration;
					double units = kwh * duration;

					// Add parameters to query
					command->Parameters->AddWithValue("@Name", applianceName);
					command->Parameters->AddWithValue("@Start_time", startTime.ToString("hh\\:mm"));
					command->Parameters->AddWithValue("@End_time", endTime.ToString("hh\\:mm"));
					command->Parameters->AddWithValue("@Duration", duration);
					command->Parameters->AddWithValue("@Date", currentDate.ToString("yyyy-MM-dd"));
					command->Parameters->AddWithValue("@Cost", cost);
					command->Parameters->AddWithValue("@Unit", units);

					// Execute the query
					connection->Open();
					command->ExecuteNonQuery();
					connection->Close();

					// Move to the next frequency-based date in the month
					currentDate = currentDate.AddDays(frequency * 30 / 12); // Adjust for monthly intervals
				}
			}

			else if (selection == "Weekly")
			{
				// Weekly scheduling logic
				tbMonthFrequency->Visible = true; // Show frequency input for weekly

				for (int i = 0; i < 30; i += (frequency == 1 ? 1 : 7 - frequency)) // Weekly frequency step
				{
					for (int j = 0; j < frequency; j++) // Loop for the weekly days
					{
						// Prepare the SQL query for inserting data
						String^ sqlQuery = "INSERT INTO tb_PSSchedule (Name, Start_time, End_time, duration, date, Cost, Unit) VALUES (@Name, @Start_time, @End_time, @Duration, @Date, @Cost, @Unit)";
						SqlCommand^ command = gcnew SqlCommand(sqlQuery, connection);

						// Calculate KWH and cost from appliances table
						String^ applianceName = tbMonthApplianceName->Text;
						double kwh = 0;
						String^ fetchKwhQuery = "SELECT Kwh FROM tb_PSAppliances WHERE Name = @Name";
						SqlCommand^ fetchCommand = gcnew SqlCommand(fetchKwhQuery, connection);
						fetchCommand->Parameters->AddWithValue("@Name", applianceName);

						connection->Open();
						SqlDataReader^ reader = fetchCommand->ExecuteReader();
						if (reader->Read())
						{
							kwh = Convert::ToDouble(reader["Kwh"]);
						}
						connection->Close();

						double cost = kwh * duration;
						double units = kwh * duration;

						// Add parameters to query
						command->Parameters->AddWithValue("@Name", applianceName);
						command->Parameters->AddWithValue("@Start_time", startTime.ToString("hh\\:mm"));
						command->Parameters->AddWithValue("@End_time", endTime.ToString("hh\\:mm"));
						command->Parameters->AddWithValue("@Duration", duration);
						command->Parameters->AddWithValue("@Date", currentDate.ToString("yyyy-MM-dd"));
						command->Parameters->AddWithValue("@Cost", cost);
						command->Parameters->AddWithValue("@Unit", units);

						// Execute the query
						connection->Open();
						command->ExecuteNonQuery();
						connection->Close();

						// Move to the next day
						currentDate = currentDate.AddDays(1);
					}

					// If frequency > 1, skip the remaining days to repeat for the next week
					if (frequency > 1)
					{
						currentDate = currentDate.AddDays(7 - frequency); // Skip the remaining days
					}
				}
			}

			tbMonthFrequency->Visible = false; // Hide the frequency textbox after use

			MessageBox::Show("Data successfully added.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Clear fields after processing
			tbMonthApplianceName->Clear();
			tbMonthKWH->Clear();
			tbMonthDuration->Clear();
			tbMonthStartTime->Clear();
			tbMonthFrequency->Clear();
			cbMonthSelection->SelectedIndex = -1;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


	private: System::Void dgvMonthAppliances_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		if (e->RowIndex >= 0)
		{
			System::Windows::Forms::DataGridViewRow^ row = dgvMonthAppliances->Rows[e->RowIndex];

			// Assign appliance name
			tbMonthApplianceName->Text = row->Cells[0]->Value->ToString();
			tbMonthKWH->Text = row->Cells[1]->Value->ToString();

			// Assign kWh of appliance, ensuring the value is converted properly
			//kwh = System::Convert::ToInt32(row->Cells[2]->Value);
		}
	}
	private: System::Void pnlMonth_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{

	}
	private: System::Void cbMonthSelection_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		// Check if the selected item is not "daily"
		if (cbMonthSelection->SelectedItem != nullptr && cbMonthSelection->SelectedItem->ToString() != "daily")
		{
			tbMonthFrequency->Visible = true;  // Show frequency input when 'Weekly' or others are selected
		}
		else
		{
			tbMonthFrequency->Visible = false;  // Hide frequency input when 'daily' is selected or nothing is selected
		}
	}
	};
}
