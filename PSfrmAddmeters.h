#pragma once
#using <Microsoft.VisualBasic.dll>

namespace PeakSaver {
	using namespace System::Data::SqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PSfrmAddmeters
	/// </summary>
	public ref class PSfrmAddmeters : public System::Windows::Forms::Form
	{
	public:
		PSfrmAddmeters(void)
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
		~PSfrmAddmeters()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ meternos;
	protected:

	private: System::Windows::Forms::Label^ metername;
	private: System::Windows::Forms::Label^ metertype;
	private: System::Windows::Forms::TextBox^ tbmeternos;
	private: System::Windows::Forms::TextBox^ tbmetername;
	private: System::Windows::Forms::ComboBox^ cbmetertype;
	private: System::Windows::Forms::Button^ btndone;
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
			this->meternos = (gcnew System::Windows::Forms::Label());
			this->metername = (gcnew System::Windows::Forms::Label());
			this->metertype = (gcnew System::Windows::Forms::Label());
			this->tbmeternos = (gcnew System::Windows::Forms::TextBox());
			this->tbmetername = (gcnew System::Windows::Forms::TextBox());
			this->cbmetertype = (gcnew System::Windows::Forms::ComboBox());
			this->btndone = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// meternos
			// 
			this->meternos->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->meternos->AutoSize = true;
			this->meternos->Location = System::Drawing::Point(190, 127);
			this->meternos->Name = L"meternos";
			this->meternos->Size = System::Drawing::Size(271, 46);
			this->meternos->TabIndex = 0;
			this->meternos->Text = L"No_of_meters";
			this->meternos->Click += gcnew System::EventHandler(this, &PSfrmAddmeters::label1_Click);
			// 
			// metername
			// 
			this->metername->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->metername->AutoSize = true;
			this->metername->Location = System::Drawing::Point(190, 251);
			this->metername->Name = L"metername";
			this->metername->Size = System::Drawing::Size(238, 46);
			this->metername->TabIndex = 1;
			this->metername->Text = L"Meter Name";
			// 
			// metertype
			// 
			this->metertype->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->metertype->AutoSize = true;
			this->metertype->Location = System::Drawing::Point(190, 427);
			this->metertype->Name = L"metertype";
			this->metertype->Size = System::Drawing::Size(220, 46);
			this->metertype->TabIndex = 2;
			this->metertype->Text = L"Meter Type";
			// 
			// tbmeternos
			// 
			this->tbmeternos->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbmeternos->Location = System::Drawing::Point(531, 127);
			this->tbmeternos->Name = L"tbmeternos";
			this->tbmeternos->Size = System::Drawing::Size(525, 53);
			this->tbmeternos->TabIndex = 3;
			this->tbmeternos->TextChanged += gcnew System::EventHandler(this, &PSfrmAddmeters::tbmeternos_TextChanged);
			// 
			// tbmetername
			// 
			this->tbmetername->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbmetername->Location = System::Drawing::Point(531, 248);
			this->tbmetername->Name = L"tbmetername";
			this->tbmetername->Size = System::Drawing::Size(525, 53);
			this->tbmetername->TabIndex = 4;
			this->tbmetername->TextChanged += gcnew System::EventHandler(this, &PSfrmAddmeters::tbmetername_TextChanged);
			// 
			// cbmetertype
			// 
			this->cbmetertype->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cbmetertype->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbmetertype->FormattingEnabled = true;
			this->cbmetertype->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Hybrid ", L"Smart ", L"Digital ", L"Analog" });
			this->cbmetertype->Location = System::Drawing::Point(522, 417);
			this->cbmetertype->Name = L"cbmetertype";
			this->cbmetertype->Size = System::Drawing::Size(531, 62);
			this->cbmetertype->TabIndex = 5;
			this->cbmetertype->SelectedIndexChanged += gcnew System::EventHandler(this, &PSfrmAddmeters::cbmetertype_SelectedIndexChanged);
			// 
			// btndone
			// 
			this->btndone->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btndone->Location = System::Drawing::Point(1183, 541);
			this->btndone->Name = L"btndone";
			this->btndone->Size = System::Drawing::Size(166, 100);
			this->btndone->TabIndex = 6;
			this->btndone->Text = L"Done";
			this->btndone->UseVisualStyleBackColor = true;
			this->btndone->Click += gcnew System::EventHandler(this, &PSfrmAddmeters::btndone_Click);
			// 
			// PSfrmAddmeters
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1475, 866);
			this->Controls->Add(this->btndone);
			this->Controls->Add(this->cbmetertype);
			this->Controls->Add(this->tbmetername);
			this->Controls->Add(this->tbmeternos);
			this->Controls->Add(this->metertype);
			this->Controls->Add(this->metername);
			this->Controls->Add(this->meternos);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"PSfrmAddmeters";
			this->Text = L"PSfrmAddmeters";
			this->Load += gcnew System::EventHandler(this, &PSfrmAddmeters::PSfrmAddmeters_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void cbmetertype_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private:
	int meterquantity = 0; // Variable to store the validated value

	System::Void tbmeternos_TextChanged(System::Object ^ sender, System::EventArgs ^ e) {
		// Get the text entered in the textbox
		String^ userInput = tbmeternos->Text;

		// Try to parse the input to an integer
		int value;
		if (Int32::TryParse(userInput, value)) {
			// Check if the value is within the range 1 to 5
			if (value >= 1 && value <= 5) {
				meterquantity = value; // Save the valid value
			}
			else {
				// If not within range, reset textbox and variable
				tbmeternos->Text = "";
				meterquantity = 0;
				MessageBox::Show("Please enter a number between 1 and 5.", "Invalid Input");
			}
		}
		else if (!String::IsNullOrWhiteSpace(userInput)) {
			// If not a number, clear the textbox and reset the variable
			tbmeternos->Text = "";
			meterquantity = 0;
			MessageBox::Show("Please enter a valid number.", "Invalid Input");
		}
	

}
private: System::Void PSfrmAddmeters_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbmetername_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private:
	int meterCounter = 1; // Counter to track the current meter
	int meterquantity1 = 0; // Number of meters
	bool isFirstIteration = true; // Flag to disable tbmeternos after the first iteration

	System::Void btndone_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			// Step 1: Capture the data from the textboxes and combobox
			if (meterCounter == 1)
			{
				// Capture the number of meters (tbmeternos) on the first iteration
				if (!Int32::TryParse(tbmeternos->Text, meterquantity) || meterquantity <= 0)
				{
					MessageBox::Show("Please enter a valid number of meters.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return; // Exit if the input is invalid
				}
			}

			// Disable tbmeternos (meter quantity textbox) after the first iteration
			if (isFirstIteration)
			{
				tbmeternos->Enabled = false;
				isFirstIteration = false; // Disable it only once
			}

			// Capture Meter Name and Meter Type
			String^ meterName = tbmetername->Text;
			String^ meterType = cbmetertype->SelectedItem->ToString();

			// Step 2: Validate inputs
			if (meterName->Length == 0 || meterType->Length == 0)
			{
				MessageBox::Show("Please fill in all required fields for Meter Name and Meter Type.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return; // Exit if validation fails
			}

			// Step 3: Insert data into the database using SQL query
			String^ connString = "Data Source=SPECTRE\\SQLEXPRESS;Initial Catalog=PeakSaver;Integrated Security=True";
			SqlConnection^ sqlconn = gcnew SqlConnection(connString);

			// Open the database connection
			sqlconn->Open();

			// Prepare the SQL insert query
			String^ sqlQuery = "INSERT INTO AddMeters (Meter_ID, Meter_name, Meter_type) VALUES (@Meter_ID, @Meter_name, @Meter_type)";
			SqlCommand^ sqlCmd = gcnew SqlCommand(sqlQuery, sqlconn);

			// Add parameters to the query
			sqlCmd->Parameters->AddWithValue("@Meter_ID", meterCounter);   // Meter_ID = current iteration (meterCounter)
			sqlCmd->Parameters->AddWithValue("@Meter_name", meterName);     // Meter_name = value from tbmetername
			sqlCmd->Parameters->AddWithValue("@Meter_type", meterType);     // Meter_type = selected item from cbmetertype

			// Execute the insert command
			sqlCmd->ExecuteNonQuery();

			// Step 4: Increment the counter for the next meter
			meterCounter++;

			// Step 5: If all meters are processed, show a success message
			if (meterCounter > meterquantity)
			{
				MessageBox::Show("All meters have been added successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				meterCounter = 1; // Reset the counter for the next process
			}

			// Close the database connection
			sqlconn->Close();
		}
		catch (SqlException^ sqlEx)
		{
			// Handle SQL exceptions
			MessageBox::Show("SQL Error: " + sqlEx->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (Exception^ ex)
		{
			// Handle general exceptions
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


};
}
