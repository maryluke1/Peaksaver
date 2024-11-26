#pragma once
#include "HelperClass.h"
namespace historyform {
	using namespace System::Data::SqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PSfrmScheduleHistory
	/// </summary>
	public ref class PSfrmScheduleHistory : public System::Windows::Forms::Form
	{
	public:
		PSfrmScheduleHistory(void)
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
		~PSfrmScheduleHistory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ historygrid;
	private: System::Windows::Forms::DateTimePicker^ historydate;
	private: System::Windows::Forms::Label^ historylabel;
	private: System::Windows::Forms::Button^ displaybutton;


	protected:

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
			this->historygrid = (gcnew System::Windows::Forms::DataGridView());
			this->historydate = (gcnew System::Windows::Forms::DateTimePicker());
			this->historylabel = (gcnew System::Windows::Forms::Label());
			this->displaybutton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->historygrid))->BeginInit();
			this->SuspendLayout();
			// 
			// historygrid
			// 
			this->historygrid->AllowUserToAddRows = false;
			this->historygrid->AllowUserToDeleteRows = false;
			this->historygrid->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->historygrid->ColumnHeadersHeight = 40;
			this->historygrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->historygrid->Location = System::Drawing::Point(178, 178);
			this->historygrid->Name = L"historygrid";
			this->historygrid->ReadOnly = true;
			this->historygrid->RowHeadersWidth = 72;
			this->historygrid->RowTemplate->Height = 31;
			this->historygrid->Size = System::Drawing::Size(1146, 565);
			this->historygrid->TabIndex = 0;
			this->historygrid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PSfrmScheduleHistory::historygrid_CellContentClick);
			// 
			// historydate
			// 
			this->historydate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->historydate->Location = System::Drawing::Point(384, 82);
			this->historydate->Name = L"historydate";
			this->historydate->Size = System::Drawing::Size(503, 39);
			this->historydate->TabIndex = 1;
			this->historydate->ValueChanged += gcnew System::EventHandler(this, &PSfrmScheduleHistory::historydate_ValueChanged);
			// 
			// historylabel
			// 
			this->historylabel->AutoSize = true;
			this->historylabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.14286F));
			this->historylabel->Location = System::Drawing::Point(171, 82);
			this->historylabel->Name = L"historylabel";
			this->historylabel->Size = System::Drawing::Size(187, 39);
			this->historylabel->TabIndex = 2;
			this->historylabel->Text = L"Select date";
			// 
			// displaybutton
			// 
			this->displaybutton->BackColor = System::Drawing::Color::Transparent;
			this->displaybutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->displaybutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.14286F));
			this->displaybutton->Location = System::Drawing::Point(1126, 78);
			this->displaybutton->Name = L"displaybutton";
			this->displaybutton->Size = System::Drawing::Size(139, 57);
			this->displaybutton->TabIndex = 3;
			this->displaybutton->Text = L"display";
			this->displaybutton->UseVisualStyleBackColor = false;
			this->displaybutton->Click += gcnew System::EventHandler(this, &PSfrmScheduleHistory::displaybutton_Click);
			// 
			// PSfrmScheduleHistory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(168, 168);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1597, 910);
			this->Controls->Add(this->displaybutton);
			this->Controls->Add(this->historylabel);
			this->Controls->Add(this->historydate);
			this->Controls->Add(this->historygrid);
			this->Name = L"PSfrmScheduleHistory";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PSfrmScheduleHistory";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->historygrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void historygrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void historydate_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void displaybutton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Initialize the database connection
		HelperClass h;
		String^ connString = h.ConString;
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		sqlConn->Open();
		
		// SQL Command to fetch data for the selected date
		SqlCommand^ sqlCmd = gcnew SqlCommand();
		sqlCmd->Connection = sqlConn;
		sqlCmd->CommandText = "SELECT * FROM tb_PSSchedule WHERE date = @Date";
		sqlCmd->Parameters->AddWithValue("@Date", historydate->Value.ToString("yyyy-MM-dd"));

		// Load data into a DataTable
		DataTable^ scheduleTable = gcnew DataTable();
		SqlDataReader^ sqlRd = sqlCmd->ExecuteReader();
		scheduleTable->Load(sqlRd);
		sqlRd->Close();

		// Check if data is fetched
		if (scheduleTable->Rows->Count > 0) {
			// Optional: Show a success message
			// MessageBox::Show("Data fetched for " + historydate->Value.ToString("yyyy-MM-dd"));
		}
		else {
			MessageBox::Show("No data found for this date.");
		}

		// Bind data to the DataGridView
		historygrid->DataSource = scheduleTable;

		// Close the connection
		sqlConn->Close();
	}
	catch (SqlException^ sqlEx) {
		// Handle SQL exceptions
		MessageBox::Show("SQL Error: " + sqlEx->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ ex) {
		// Handle general exceptions
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
};
}
