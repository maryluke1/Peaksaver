#pragma once

namespace PeakSaver {
	using namespace System::Data::SqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PSfrmmeterrecording
	/// </summary>
	public ref class PSfrmmeterrecording : public System::Windows::Forms::Form
	{
	public:
		PSfrmmeterrecording(void)
		{
			InitializeComponent();
			panel1->Hide();
			//
			//TODO: Add the constructor code here
			//
			//this->meterDataGridView = (gcnew System::Windows::Forms::DataGridView());
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PSfrmmeterrecording()
		{
			if (components)
				
			{
				delete components;
			}
		}

	protected:

	protected:

	protected:
	private: System::Windows::Forms::DateTimePicker^ dtdatetime;
	private: System::Windows::Forms::Label^ lbmetername;
	private: System::Windows::Forms::Label^ lbmeterreading;
	private: System::Windows::Forms::TextBox^ tbmetername;
	private: System::Windows::Forms::TextBox^ tbmeterreading;

	private: System::Windows::Forms::Button^ btnnext;
	private: System::Windows::Forms::Button^ btnnextreading;
	private: System::Windows::Forms::DataGridView^ meterDataGridView;
	private: System::Windows::Forms::Label^ lbdate;
	private: System::Windows::Forms::Label^ lbDay;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnback;


	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ btnhome;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




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
			this->dtdatetime = (gcnew System::Windows::Forms::DateTimePicker());
			this->lbmetername = (gcnew System::Windows::Forms::Label());
			this->lbmeterreading = (gcnew System::Windows::Forms::Label());
			this->tbmetername = (gcnew System::Windows::Forms::TextBox());
			this->tbmeterreading = (gcnew System::Windows::Forms::TextBox());
			this->btnnext = (gcnew System::Windows::Forms::Button());
			this->btnnextreading = (gcnew System::Windows::Forms::Button());
			this->meterDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->lbdate = (gcnew System::Windows::Forms::Label());
			this->lbDay = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnhome = (gcnew System::Windows::Forms::Button());
			this->btnback = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->meterDataGridView))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dtdatetime
			// 
			this->dtdatetime->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dtdatetime->Location = System::Drawing::Point(843, 148);
			this->dtdatetime->Name = L"dtdatetime";
			this->dtdatetime->Size = System::Drawing::Size(378, 38);
			this->dtdatetime->TabIndex = 1;
			this->dtdatetime->ValueChanged += gcnew System::EventHandler(this, &PSfrmmeterrecording::dtdatetime_ValueChanged);
			// 
			// lbmetername
			// 
			this->lbmetername->AutoSize = true;
			this->lbmetername->Location = System::Drawing::Point(855, 288);
			this->lbmetername->Name = L"lbmetername";
			this->lbmetername->Size = System::Drawing::Size(168, 32);
			this->lbmetername->TabIndex = 2;
			this->lbmetername->Text = L"Meter Name";
			this->lbmetername->Click += gcnew System::EventHandler(this, &PSfrmmeterrecording::label1_Click);
			// 
			// lbmeterreading
			// 
			this->lbmeterreading->AutoSize = true;
			this->lbmeterreading->Location = System::Drawing::Point(855, 370);
			this->lbmeterreading->Name = L"lbmeterreading";
			this->lbmeterreading->Size = System::Drawing::Size(200, 32);
			this->lbmeterreading->TabIndex = 3;
			this->lbmeterreading->Text = L"Meter Reading";
			// 
			// tbmetername
			// 
			this->tbmetername->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbmetername->Location = System::Drawing::Point(1051, 285);
			this->tbmetername->Multiline = true;
			this->tbmetername->Name = L"tbmetername";
			this->tbmetername->Size = System::Drawing::Size(436, 55);
			this->tbmetername->TabIndex = 4;
			// 
			// tbmeterreading
			// 
			this->tbmeterreading->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbmeterreading->Location = System::Drawing::Point(1061, 367);
			this->tbmeterreading->Multiline = true;
			this->tbmeterreading->Name = L"tbmeterreading";
			this->tbmeterreading->Size = System::Drawing::Size(434, 45);
			this->tbmeterreading->TabIndex = 5;
			// 
			// btnnext
			// 
			this->btnnext->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnnext->Location = System::Drawing::Point(1205, 616);
			this->btnnext->Name = L"btnnext";
			this->btnnext->Size = System::Drawing::Size(260, 68);
			this->btnnext->TabIndex = 7;
			this->btnnext->Text = L"Next";
			this->btnnext->UseVisualStyleBackColor = true;
			this->btnnext->Click += gcnew System::EventHandler(this, &PSfrmmeterrecording::btnnext_Click);
			// 
			// btnnextreading
			// 
			this->btnnextreading->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnnextreading->Location = System::Drawing::Point(1254, 445);
			this->btnnextreading->Name = L"btnnextreading";
			this->btnnextreading->Size = System::Drawing::Size(260, 68);
			this->btnnextreading->TabIndex = 8;
			this->btnnextreading->Text = L"Next Reading";
			this->btnnextreading->UseVisualStyleBackColor = true;
			this->btnnextreading->Click += gcnew System::EventHandler(this, &PSfrmmeterrecording::btnnextreading_Click);
			// 
			// meterDataGridView
			// 
			this->meterDataGridView->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->meterDataGridView->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->meterDataGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->meterDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->meterDataGridView->GridColor = System::Drawing::Color::RosyBrown;
			this->meterDataGridView->Location = System::Drawing::Point(63, 130);
			this->meterDataGridView->Name = L"meterDataGridView";
			this->meterDataGridView->RowHeadersVisible = false;
			this->meterDataGridView->RowHeadersWidth = 102;
			this->meterDataGridView->RowTemplate->Height = 40;
			this->meterDataGridView->Size = System::Drawing::Size(713, 682);
			this->meterDataGridView->TabIndex = 15;
			this->meterDataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PSfrmmeterrecording::meterDataGridView_CellContentClick);
			// 
			// lbdate
			// 
			this->lbdate->AutoSize = true;
			this->lbdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbdate->Location = System::Drawing::Point(73, 66);
			this->lbdate->Name = L"lbdate";
			this->lbdate->Size = System::Drawing::Size(115, 46);
			this->lbdate->TabIndex = 16;
			this->lbdate->Text = L"Date:";
			// 
			// lbDay
			// 
			this->lbDay->AutoSize = true;
			this->lbDay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDay->Location = System::Drawing::Point(636, 66);
			this->lbDay->Name = L"lbDay";
			this->lbDay->Size = System::Drawing::Size(113, 46);
			this->lbDay->TabIndex = 17;
			this->lbDay->Text = L"Day :";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->btnhome);
			this->panel1->Controls->Add(this->btnback);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(2023, 1026);
			this->panel1->TabIndex = 18;
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::Color::RosyBrown;
			this->dataGridView1->Location = System::Drawing::Point(248, 148);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 102;
			this->dataGridView1->RowTemplate->Height = 40;
			this->dataGridView1->Size = System::Drawing::Size(797, 580);
			this->dataGridView1->TabIndex = 16;
			// 
			// btnhome
			// 
			this->btnhome->Location = System::Drawing::Point(1090, 178);
			this->btnhome->Name = L"btnhome";
			this->btnhome->Size = System::Drawing::Size(239, 122);
			this->btnhome->TabIndex = 3;
			this->btnhome->Text = L"Home";
			this->btnhome->UseVisualStyleBackColor = true;
			this->btnhome->Click += gcnew System::EventHandler(this, &PSfrmmeterrecording::btnhome_Click);
			// 
			// btnback
			// 
			this->btnback->Location = System::Drawing::Point(1100, 589);
			this->btnback->Name = L"btnback";
			this->btnback->Size = System::Drawing::Size(239, 122);
			this->btnback->TabIndex = 2;
			this->btnback->Text = L"back";
			this->btnback->UseVisualStyleBackColor = true;
			this->btnback->Click += gcnew System::EventHandler(this, &PSfrmmeterrecording::btnback_Click);
			// 
			// PSfrmmeterrecording
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(2023, 1026);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lbDay);
			this->Controls->Add(this->lbdate);
			this->Controls->Add(this->meterDataGridView);
			this->Controls->Add(this->btnnextreading);
			this->Controls->Add(this->btnnext);
			this->Controls->Add(this->tbmeterreading);
			this->Controls->Add(this->tbmetername);
			this->Controls->Add(this->lbmeterreading);
			this->Controls->Add(this->lbmetername);
			this->Controls->Add(this->dtdatetime);
			this->Name = L"PSfrmmeterrecording";
			this->Text = L"PSfrmmeterrecording";
			this->Load += gcnew System::EventHandler(this, &PSfrmmeterrecording::PSfrmmeterrecording_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->meterDataGridView))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnload_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
	}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void PSfrmmeterrecording_Load(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ conn = gcnew SqlConnection("Data Source=SPECTRE\\SQLEXPRESS;Initial Catalog=PeakSaver;Integrated Security=True");

	try {
		// Open the connection
		conn->Open();

		// Create a query to select all data from the Addmeters table
		String^ queryMeter = "SELECT * FROM Addmeters";  // Adjust the table name and columns as per your schema

		// Create SqlCommand object with the query and connection
		SqlCommand^ cmdMeter = gcnew SqlCommand(queryMeter, conn);

		// Execute the query (Meter table)
		SqlDataReader^ readerMeter = cmdMeter->ExecuteReader();

		// Check if we got any data for Meter table
		if (readerMeter->HasRows) {
			// Create a DataTable to store the Meter results
			DataTable^ dtMeter = gcnew DataTable();
			dtMeter->Load(readerMeter);  // Load data into the DataTable

			// Set the DataGridView's DataSource to the DataTable to display the Meter data

			meterDataGridView->DataSource = dtMeter;  // meterDataGridView is the name of your DataGridView
		}
		else {
			// Show a message if no data is found in the Meter table
			MessageBox::Show("No data found in the Meter table.");
		}

		// Close the reader for Meter table
		readerMeter->Close();
	}
	catch (Exception^ ex) {
		// Handle any errors that might occur during database access
		MessageBox::Show("Error: " + ex->Message);
	}
	finally {
		// Always close the connection when done
		if (conn->State == ConnectionState::Open) {
			conn->Close();
		}
	}
}
private: System::Void btnnextreading_Click(System::Object^ sender, System::EventArgs^ e) {
	// Step 1: Capture the data from the textboxes
	String^ meterName = tbmetername->Text;    // Meter name from textbox
	String^ meterReading = tbmeterreading->Text; // Meter reading from textbox
	String^ meterDate = lbdate->Text;        // Date from label

	// Step 2: Validate the inputs
	if (meterName->Length == 0 || meterReading->Length == 0 || meterDate->Length == 0) {
		MessageBox::Show("Please fill in all the fields.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	try {
		// Connection string for database
		String^ connString = "Data Source=SPECTRE\\SQLEXPRESS;Initial Catalog=PeakSaver;Integrated Security=True";
		SqlConnection sqlconn(connString);

		// Open database connection
		sqlconn.Open();

		// Step 3: Insert into MeterReading table
		String^ sqlQueryMeter = "INSERT INTO MeterReading (MeterName, MeterDate, MeterReading) VALUES (@meterName, @meterDate, @meterReading)";
		SqlCommand commandMeter(sqlQueryMeter, % sqlconn);

		// Add parameters to the query
		commandMeter.Parameters->AddWithValue("@meterName", meterName);
		commandMeter.Parameters->AddWithValue("@meterDate", meterDate);
		commandMeter.Parameters->AddWithValue("@meterReading", meterReading);

		// Execute the query
		int rowsAffected = commandMeter.ExecuteNonQuery();

		if (rowsAffected > 0) {
			MessageBox::Show("Meter reading inserted successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Step 4: Clear the fields for the next entry
			tbmetername->Text = "";
			tbmeterreading->Text = "";
			lbdate->Text = ""; // Reset the date if needed; otherwise, keep the current value
		}
		else {
			MessageBox::Show("Failed to insert meter reading.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Close the connection
		sqlconn.Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// Step 5: Reopen the same form for the next entry
	// Reload the current form
	this->Hide();  // Hide the current instance
	PSfrmmeterrecording^ newForm = gcnew 	PSfrmmeterrecording();  // Replace `YourFormName` with the actual name of your form class
	newForm->ShowDialog();  // Show the new form
	this->Close();  // Close the hidden instanc
}
private: System::Void meterDataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	// Check if the clicked row is valid (avoid clicking on the header row)
	if (e->RowIndex >= 0) {
		// Access the row that was clicked
		System::Windows::Forms::DataGridViewRow^ row = meterDataGridView->Rows[e->RowIndex];

		// Ensure the clicked cell isn't empty or invalid
		if (row->Cells["Meter_name"]->Value != nullptr) {
			// Retrieve the value from the "Meter_name" column (replace "Meter_name" with the actual column name or index)
			String^ meterName = row->Cells["Meter_name"]->Value->ToString();

			// Set the value in the text box (assuming tbMeterName is the TextBox control you want to update)
			tbmetername->Text = meterName;
		}
		else {
			// Handle the case where the Meter_name cell is empty or invalid (optional)
			tbmetername->Text = "No Meter Name"; // You can customize this message
		}
	}
}


private: System::Void dtdatetime_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	// Update the label with the selected date from DateTimePicker
	lbdate->Text = dtdatetime->Value.ToString("yyyy-MM-dd");

	////For Schedule table
	//tbDate->Text = dateTimePicker1->Value.ToString("yyyy-MM-dd");
	//lbSchedule_day->Text = dateTimePicker1->Value.ToString("yyyy-MM-dd");

	//// Optional: You can also display the day of the week
	lbDay->Text = "Day: " + dtdatetime->Value.DayOfWeek.ToString();

	//when selected, display schedule on the screen as per baba   

	//get the date n the varibalw to acces scheulde
//	datee = lbDate;

}
private: System::Void btnloadfinal_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnnext_Click(System::Object^ sender, System::EventArgs^ e) {

	//this->Hide();
	panel1->Show();
	SqlConnection^ conn = gcnew SqlConnection("Data Source=SPECTRE\\SQLEXPRESS;Initial Catalog=PeakSaver;Integrated Security=True");

	try {
		// Open the connection
		conn->Open();

		// Create a query to select all data from the MeterReading table
		String^ queryMeterReading = "SELECT * FROM MeterReading";

		// Create an SqlCommand object with the query and connection
		SqlCommand^ cmdMeterReading = gcnew SqlCommand(queryMeterReading, conn);

		// Execute the query and read data
		SqlDataReader^ readerMeterReading = cmdMeterReading->ExecuteReader();

		// Check if data exists in the MeterReading table
		if (readerMeterReading->HasRows) {
			// Create a DataTable to store the MeterReading results
			DataTable^ dtMeterReading = gcnew DataTable();
			dtMeterReading->Load(readerMeterReading);

			// Set the DataGridView's DataSource to the DataTable to display the MeterReading data
			dataGridView1->DataSource = dtMeterReading;
		}
		else {
			// Show a message if no data is found in the MeterReading table
			MessageBox::Show("No data found in the MeterReading table.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		// Close the reader
		readerMeterReading->Close();
	}
	catch (Exception^ ex) {
		// Handle any database errors
		MessageBox::Show("Error: " + ex->Message, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		// Ensure the connection is closed
		if (conn->State == ConnectionState::Open) {
			conn->Close();
		}
	}
}
private: System::Void btnhome_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnback_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Hide();
}
};
}
