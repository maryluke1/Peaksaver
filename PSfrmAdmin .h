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
	/// Summary for PSfrmAdmin
	/// </summary>
	public ref class PSfrmAdmin : public System::Windows::Forms::Form
	{
	public:
		PSfrmAdmin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			pnlAdmin1->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PSfrmAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Button^ btnDone;
	protected:

	protected:

	private: System::Windows::Forms::Button^ btnHome;
	private: System::Windows::Forms::TextBox^ tbusername;
	private: System::Windows::Forms::TextBox^ tbkey;
	private: System::Windows::Forms::Panel^ pnlAdmin1;
	private: System::Windows::Forms::TextBox^ tbtaxes;
	private: System::Windows::Forms::TextBox^ tboffpeak;
	private: System::Windows::Forms::TextBox^ tbpeak;
	private: System::Windows::Forms::TextBox^ tbname;
	private: System::Windows::Forms::TextBox^ tbid;
	private: System::Windows::Forms::DataGridView^ district;
	private: System::Windows::Forms::Button^ btnupdate;
	private: System::Windows::Forms::Button^ load;
	private: System::Windows::Forms::TextBox^ tblevel;


	private: System::Windows::Forms::DataGridView^ priority;
	private: System::Windows::Forms::TextBox^ tbwatts;
	private: System::Windows::Forms::TextBox^ tbpeakstart;
	private: System::Windows::Forms::TextBox^ tbpeakend;
	private: System::Windows::Forms::Button^ btnback;





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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->btnDone = (gcnew System::Windows::Forms::Button());
			this->btnHome = (gcnew System::Windows::Forms::Button());
			this->tbusername = (gcnew System::Windows::Forms::TextBox());
			this->tbkey = (gcnew System::Windows::Forms::TextBox());
			this->pnlAdmin1 = (gcnew System::Windows::Forms::Panel());
			this->btnback = (gcnew System::Windows::Forms::Button());
			this->tbpeakstart = (gcnew System::Windows::Forms::TextBox());
			this->tbpeakend = (gcnew System::Windows::Forms::TextBox());
			this->tbwatts = (gcnew System::Windows::Forms::TextBox());
			this->tblevel = (gcnew System::Windows::Forms::TextBox());
			this->priority = (gcnew System::Windows::Forms::DataGridView());
			this->load = (gcnew System::Windows::Forms::Button());
			this->btnupdate = (gcnew System::Windows::Forms::Button());
			this->tbtaxes = (gcnew System::Windows::Forms::TextBox());
			this->tboffpeak = (gcnew System::Windows::Forms::TextBox());
			this->tbpeak = (gcnew System::Windows::Forms::TextBox());
			this->tbname = (gcnew System::Windows::Forms::TextBox());
			this->tbid = (gcnew System::Windows::Forms::TextBox());
			this->district = (gcnew System::Windows::Forms::DataGridView());
			this->pnlAdmin1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->priority))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->district))->BeginInit();
			this->SuspendLayout();
			// 
			// btnLogin
			// 
			this->btnLogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnLogin->Location = System::Drawing::Point(964, 124);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(210, 98);
			this->btnLogin->TabIndex = 0;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &PSfrmAdmin::button1_Click);
			// 
			// btnDone
			// 
			this->btnDone->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnDone->Location = System::Drawing::Point(964, 501);
			this->btnDone->Name = L"btnDone";
			this->btnDone->Size = System::Drawing::Size(210, 98);
			this->btnDone->TabIndex = 1;
			this->btnDone->Text = L"Done";
			this->btnDone->UseVisualStyleBackColor = true;
			this->btnDone->Click += gcnew System::EventHandler(this, &PSfrmAdmin::button2_Click);
			// 
			// btnHome
			// 
			this->btnHome->Location = System::Drawing::Point(1247, 124);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(210, 98);
			this->btnHome->TabIndex = 2;
			this->btnHome->Text = L"Home";
			this->btnHome->UseVisualStyleBackColor = true;
			this->btnHome->Click += gcnew System::EventHandler(this, &PSfrmAdmin::button3_Click);
			// 
			// tbusername
			// 
			this->tbusername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbusername->Location = System::Drawing::Point(338, 245);
			this->tbusername->Multiline = true;
			this->tbusername->Name = L"tbusername";
			this->tbusername->Size = System::Drawing::Size(323, 38);
			this->tbusername->TabIndex = 3;
			this->tbusername->TextChanged += gcnew System::EventHandler(this, &PSfrmAdmin::tbusername_TextChanged);
			// 
			// tbkey
			// 
			this->tbkey->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.1F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbkey->Location = System::Drawing::Point(338, 332);
			this->tbkey->Multiline = true;
			this->tbkey->Name = L"tbkey";
			this->tbkey->Size = System::Drawing::Size(323, 44);
			this->tbkey->TabIndex = 4;
			this->tbkey->TextChanged += gcnew System::EventHandler(this, &PSfrmAdmin::textBox1_TextChanged);
			// 
			// pnlAdmin1
			// 
			this->pnlAdmin1->Controls->Add(this->btnback);
			this->pnlAdmin1->Controls->Add(this->tbpeakstart);
			this->pnlAdmin1->Controls->Add(this->tbpeakend);
			this->pnlAdmin1->Controls->Add(this->tbwatts);
			this->pnlAdmin1->Controls->Add(this->tblevel);
			this->pnlAdmin1->Controls->Add(this->priority);
			this->pnlAdmin1->Controls->Add(this->load);
			this->pnlAdmin1->Controls->Add(this->btnupdate);
			this->pnlAdmin1->Controls->Add(this->tbtaxes);
			this->pnlAdmin1->Controls->Add(this->tboffpeak);
			this->pnlAdmin1->Controls->Add(this->tbpeak);
			this->pnlAdmin1->Controls->Add(this->tbname);
			this->pnlAdmin1->Controls->Add(this->tbid);
			this->pnlAdmin1->Controls->Add(this->district);
			this->pnlAdmin1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlAdmin1->Location = System::Drawing::Point(0, 0);
			this->pnlAdmin1->Name = L"pnlAdmin1";
			this->pnlAdmin1->Size = System::Drawing::Size(1966, 957);
			this->pnlAdmin1->TabIndex = 5;
			this->pnlAdmin1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PSfrmAdmin::pnlAdmin1_Paint);
			// 
			// btnback
			// 
			this->btnback->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnback->Location = System::Drawing::Point(1181, 514);
			this->btnback->Name = L"btnback";
			this->btnback->Size = System::Drawing::Size(253, 69);
			this->btnback->TabIndex = 40;
			this->btnback->Text = L"back";
			this->btnback->UseVisualStyleBackColor = true;
			this->btnback->Click += gcnew System::EventHandler(this, &PSfrmAdmin::btnback_Click);
			// 
			// tbpeakstart
			// 
			this->tbpeakstart->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbpeakstart->Location = System::Drawing::Point(731, 514);
			this->tbpeakstart->Multiline = true;
			this->tbpeakstart->Name = L"tbpeakstart";
			this->tbpeakstart->Size = System::Drawing::Size(300, 54);
			this->tbpeakstart->TabIndex = 39;
			this->tbpeakstart->Text = L"START";
			// 
			// tbpeakend
			// 
			this->tbpeakend->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbpeakend->Location = System::Drawing::Point(354, 864);
			this->tbpeakend->Multiline = true;
			this->tbpeakend->Name = L"tbpeakend";
			this->tbpeakend->Size = System::Drawing::Size(300, 54);
			this->tbpeakend->TabIndex = 38;
			this->tbpeakend->Text = L"END";
			this->tbpeakend->TextChanged += gcnew System::EventHandler(this, &PSfrmAdmin::tbpeakend_TextChanged);
			// 
			// tbwatts
			// 
			this->tbwatts->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbwatts->Location = System::Drawing::Point(1181, 700);
			this->tbwatts->Multiline = true;
			this->tbwatts->Name = L"tbwatts";
			this->tbwatts->Size = System::Drawing::Size(300, 54);
			this->tbwatts->TabIndex = 37;
			this->tbwatts->TextChanged += gcnew System::EventHandler(this, &PSfrmAdmin::tbwatts_TextChanged);
			// 
			// tblevel
			// 
			this->tblevel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tblevel->Location = System::Drawing::Point(1181, 608);
			this->tblevel->Multiline = true;
			this->tblevel->Name = L"tblevel";
			this->tblevel->Size = System::Drawing::Size(300, 54);
			this->tblevel->TabIndex = 36;
			this->tblevel->TextChanged += gcnew System::EventHandler(this, &PSfrmAdmin::tblevel_TextChanged);
			// 
			// priority
			// 
			this->priority->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->priority->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->priority->BackgroundColor = System::Drawing::Color::Silver;
			this->priority->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->priority->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->priority->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::RosyBrown;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->priority->DefaultCellStyle = dataGridViewCellStyle3;
			this->priority->GridColor = System::Drawing::Color::RosyBrown;
			this->priority->Location = System::Drawing::Point(1322, 63);
			this->priority->Name = L"priority";
			this->priority->RowHeadersVisible = false;
			this->priority->RowHeadersWidth = 102;
			this->priority->Size = System::Drawing::Size(444, 417);
			this->priority->TabIndex = 35;
			this->priority->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PSfrmAdmin::priority_CellContentClick);
			// 
			// load
			// 
			this->load->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->load->Location = System::Drawing::Point(731, 759);
			this->load->Name = L"load";
			this->load->Size = System::Drawing::Size(253, 69);
			this->load->TabIndex = 34;
			this->load->Text = L"Load";
			this->load->UseVisualStyleBackColor = true;
			this->load->Click += gcnew System::EventHandler(this, &PSfrmAdmin::button1_Click_1);
			// 
			// btnupdate
			// 
			this->btnupdate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnupdate->Location = System::Drawing::Point(731, 660);
			this->btnupdate->Name = L"btnupdate";
			this->btnupdate->Size = System::Drawing::Size(270, 75);
			this->btnupdate->TabIndex = 6;
			this->btnupdate->Text = L"update";
			this->btnupdate->UseVisualStyleBackColor = true;
			this->btnupdate->Click += gcnew System::EventHandler(this, &PSfrmAdmin::btnupdate_Click);
			// 
			// tbtaxes
			// 
			this->tbtaxes->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbtaxes->Location = System::Drawing::Point(361, 774);
			this->tbtaxes->Multiline = true;
			this->tbtaxes->Name = L"tbtaxes";
			this->tbtaxes->Size = System::Drawing::Size(300, 54);
			this->tbtaxes->TabIndex = 5;
			this->tbtaxes->TextChanged += gcnew System::EventHandler(this, &PSfrmAdmin::tbtaxes_TextChanged);
			// 
			// tboffpeak
			// 
			this->tboffpeak->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tboffpeak->Location = System::Drawing::Point(731, 589);
			this->tboffpeak->Multiline = true;
			this->tboffpeak->Name = L"tboffpeak";
			this->tboffpeak->Size = System::Drawing::Size(300, 54);
			this->tboffpeak->TabIndex = 4;
			this->tboffpeak->Text = L"OFFPEAK";
			this->tboffpeak->TextChanged += gcnew System::EventHandler(this, &PSfrmAdmin::tboffpeak_TextChanged);
			// 
			// tbpeak
			// 
			this->tbpeak->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbpeak->Location = System::Drawing::Point(361, 679);
			this->tbpeak->Multiline = true;
			this->tbpeak->Name = L"tbpeak";
			this->tbpeak->Size = System::Drawing::Size(300, 60);
			this->tbpeak->TabIndex = 3;
			this->tbpeak->TextChanged += gcnew System::EventHandler(this, &PSfrmAdmin::tbpeak_TextChanged);
			// 
			// tbname
			// 
			this->tbname->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbname->Location = System::Drawing::Point(365, 605);
			this->tbname->Multiline = true;
			this->tbname->Name = L"tbname";
			this->tbname->Size = System::Drawing::Size(289, 57);
			this->tbname->TabIndex = 2;
			this->tbname->Text = L"NAME";
			this->tbname->TextChanged += gcnew System::EventHandler(this, &PSfrmAdmin::tbname_TextChanged);
			// 
			// tbid
			// 
			this->tbid->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbid->Location = System::Drawing::Point(371, 514);
			this->tbid->Multiline = true;
			this->tbid->Name = L"tbid";
			this->tbid->Size = System::Drawing::Size(290, 54);
			this->tbid->TabIndex = 1;
			this->tbid->TextChanged += gcnew System::EventHandler(this, &PSfrmAdmin::tbid_TextChanged);
			// 
			// district
			// 
			this->district->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->district->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->district->BackgroundColor = System::Drawing::Color::Silver;
			this->district->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->district->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->district->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::RosyBrown;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->district->DefaultCellStyle = dataGridViewCellStyle4;
			this->district->GridColor = System::Drawing::Color::RosyBrown;
			this->district->Location = System::Drawing::Point(371, 52);
			this->district->Name = L"district";
			this->district->RowHeadersVisible = false;
			this->district->RowHeadersWidth = 102;
			this->district->Size = System::Drawing::Size(883, 414);
			this->district->TabIndex = 33;
			this->district->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PSfrmAdmin::district_CellContentClick);
			// 
			// PSfrmAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(240, 240);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(1966, 957);
			this->Controls->Add(this->pnlAdmin1);
			this->Controls->Add(this->tbkey);
			this->Controls->Add(this->tbusername);
			this->Controls->Add(this->btnHome);
			this->Controls->Add(this->btnDone);
			this->Controls->Add(this->btnLogin);
			this->Name = L"PSfrmAdmin";
			this->Text = L"PSfrmAdmin";
			this->Load += gcnew System::EventHandler(this, &PSfrmAdmin::PSfrmAdmin_Load);
			this->pnlAdmin1->ResumeLayout(false);
			this->pnlAdmin1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->priority))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->district))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {// Check if both credentials are correct
		if (tbusername->Text == "peaksaver" && tbkey->Text == "12345")
		{
			// Move to next form (replace Form2 with the actual form name)
			//this->Hide();
			// Hide the current panel or form
			//this->Hide();

			// Show the admin panel
			pnlAdmin1->Visible = true;

		}
		else
		{
			MessageBox::Show("Incorrect Admin Credentials", "Welcome Message", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbusername_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PSfrmAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void district_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}


	private: System::Void btnupdate_Click(System::Object^ sender, System::EventArgs^ e) {
		// Step 1: Capture the data from the textboxes
		String^ districtId = tbid->Text;  // ID of the district to be updated
		String^ districtName = tbname->Text;
		String^ peakValue = tbpeak->Text;
		String^ offPeakValue = tboffpeak->Text;
		String^ taxesValue = tbtaxes->Text;
		String^ peakstart = tbpeakstart->Text;
		String^ peakend= tbpeakend->Text;
		String^ levelName = tblevel->Text;  // For Watt_Management
		String^ levelWatts = tbwatts->Text;  // For Watt_Management

		// Step 2: Validate the inputs
		if ((districtId->Length == 0 && (levelName->Length == 0 || levelWatts->Length == 0)) ||
			(districtId->Length > 0 && (districtName->Length == 0 || peakValue->Length == 0 ||
				offPeakValue->Length == 0 || taxesValue->Length == 0 || peakstart->Length == 0 || peakstart->Length == 0))) {
			MessageBox::Show("Please fill in the required fields for either District or Watt Management.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Step 3: Check if districtId is between 1 and 6 only if the districtId is not empty
		if (districtId->Length > 0) {
			int id = Convert::ToInt32(districtId);
			if (id < 1 || id > 6) {
				MessageBox::Show("District ID must be between 1 and 6.", "Validation Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}


		try {
			TimeSpan peakStartTime;
			TimeSpan peakEndTime;

			// Connection string for database
			String^ connString = "Data Source=SPECTRE\\SQLEXPRESS;Initial Catalog=PeakSaver;Integrated Security=True";
			SqlConnection sqlconn(connString);

			// Open database connection
			sqlconn.Open();

			// Boolean flags to check if updates happen for each table
			bool updateDistrict = (districtId->Length > 0 && districtName->Length > 0 && peakValue->Length > 0 &&
				offPeakValue->Length > 0 && taxesValue->Length > 0);
			bool updateWattManagement = (levelName->Length > 0 && levelWatts->Length > 0);
			if (TimeSpan::TryParse(peakstart, peakStartTime) && TimeSpan::TryParse(peakend, peakEndTime)) {
				// Step 4: Update District Table if required
				if (updateDistrict) {
					// SQL query to update district details
					String^ sqlQueryDistrict = "UPDATE District SET D_name = @name, D_peakrates = @peak, D_offpeakrates = @offpeak, D_Taxes = @taxes , D_peakstarttime= @peakstart, D_peakendtime= @peakend WHERE D_Id = @id";
					SqlCommand CommandDistrict(sqlQueryDistrict, % sqlconn);

					// Add parameters to the query
					CommandDistrict.Parameters->AddWithValue("@id", districtId);
					CommandDistrict.Parameters->AddWithValue("@name", districtName);
					CommandDistrict.Parameters->AddWithValue("@peak", peakValue);
					CommandDistrict.Parameters->AddWithValue("@offpeak", offPeakValue);
					CommandDistrict.Parameters->AddWithValue("@taxes", taxesValue);
					CommandDistrict.Parameters->AddWithValue("@peakstart", peakStartTime.ToString());
					CommandDistrict.Parameters->AddWithValue("@peakend", peakEndTime.ToString());




					// Execute the query and check the number of rows affected
					int rowsAffectedDistrict = CommandDistrict.ExecuteNonQuery();

					if (rowsAffectedDistrict > 0) {
						MessageBox::Show("District Update successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
					else {
						MessageBox::Show("No rows updated for District. Check if the District ID exists.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
				}
			}

			// Step 5: Update Watt_Management Table if required
			if (updateWattManagement) {
				// SQL query to update watt management details
				String^ sqlQueryWattManagement = "UPDATE Watt_Management SET level_watts = @watts WHERE level_name = @level";
				SqlCommand CommandWattManagement(sqlQueryWattManagement, % sqlconn);

				// Add parameters to the query
				CommandWattManagement.Parameters->AddWithValue("@level", levelName);
				CommandWattManagement.Parameters->AddWithValue("@watts", levelWatts);

				// Execute the query and check the number of rows affected
				int rowsAffectedWattManagement = CommandWattManagement.ExecuteNonQuery();

				if (rowsAffectedWattManagement > 0) {
					MessageBox::Show("Watt Management Update successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					MessageBox::Show("No rows updated for Watt Management. Check if the level name exists.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

			// Close the database connection
			sqlconn.Close();

			// Step 6: Handle case where no updates were made
			if (!updateDistrict && !updateWattManagement) {
				MessageBox::Show("Please fill in fields for either District or Watt Management to update.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to Connect to Database\nError: " + ex->Message, "Database Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		// Create a connection to your database (adjust the connection string to match your setup)
		SqlConnection^ conn = gcnew SqlConnection("Data Source=SPECTRE\\SQLEXPRESS;Initial Catalog=PeakSaver;Integrated Security=True");

		try {
			// Open the connection
			conn->Open();

			// Create a query to select all data from the district table
			String^ queryDistrict = "SELECT * FROM district";
			String^ queryWattManagement = "SELECT level_name, level_watts FROM Watt_Management"; // Query for Watt_Management

			// Create SqlCommand objects with the queries and connection
			SqlCommand^ cmdDistrict = gcnew SqlCommand(queryDistrict, conn);
			SqlCommand^ cmdWattManagement = gcnew SqlCommand(queryWattManagement, conn);

			// Execute the first query (district table)
			SqlDataReader^ readerDistrict = cmdDistrict->ExecuteReader();

			// Check if we got any data for district
			if (readerDistrict->HasRows) {
				// Create a DataTable to store the district results
				DataTable^ dtDistrict = gcnew DataTable();
				dtDistrict->Load(readerDistrict);

				// Set the DataGridView's DataSource to the DataTable to display the district data
				district->DataSource = dtDistrict;
			}
			else {
				// Show a message if no data is found in the district table
				MessageBox::Show("No data found in the district table.");
			}

			// Close the reader for district table
			readerDistrict->Close();

			// Execute the second query (Watt_Management table)
			SqlDataReader^ readerWattManagement = cmdWattManagement->ExecuteReader();

			// Check if we got any data for Watt_Management
			if (readerWattManagement->HasRows) {
				// Create a DataTable to store the Watt_Management results
				DataTable^ dtWattManagement = gcnew DataTable();
				dtWattManagement->Load(readerWattManagement);

				// Set the DataGridView's DataSource to the DataTable to display the Watt_Management data
				priority->DataSource = dtWattManagement;
			}
			else {
				// Show a message if no data is found in the Watt_Management table
				MessageBox::Show("No data found in the Watt_Management table.");
			}

			// Close the reader for Watt_Management table
			readerWattManagement->Close();
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




	private: System::Void pnlAdmin1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		// Create a connection to your database (adjust the connection string to match your setup)
		SqlConnection^ conn = gcnew SqlConnection("Data Source=SPECTRE\\SQLEXPRESS;Initial Catalog=PeakSaver;Integrated Security=True");

		try {
			// Open the connection
			conn->Open();

			// Create a query to select all data from the district table
			String^ queryDistrict = "SELECT * FROM district";
			String^ queryWattManagement = "SELECT level_name, level_watts FROM Watt_Management"; // Query for Watt_Management

			// Create SqlCommand objects with the queries and connection
			SqlCommand^ cmdDistrict = gcnew SqlCommand(queryDistrict, conn);
			SqlCommand^ cmdWattManagement = gcnew SqlCommand(queryWattManagement, conn);

			// Execute the first query (district table)
			SqlDataReader^ readerDistrict = cmdDistrict->ExecuteReader();

			// Check if we got any data for district
			if (readerDistrict->HasRows) {
				// Create a DataTable to store the district results
				DataTable^ dtDistrict = gcnew DataTable();
				dtDistrict->Load(readerDistrict);

				// Set the DataGridView's DataSource to the DataTable to display the district data
				district->DataSource = dtDistrict;
			}
			else {
				// Show a message if no data is found in the district table
				MessageBox::Show("No data found in the district table.");
			}

			// Close the reader for district table
			readerDistrict->Close();

			// Execute the second query (Watt_Management table)
			SqlDataReader^ readerWattManagement = cmdWattManagement->ExecuteReader();

			// Check if we got any data for Watt_Management
			if (readerWattManagement->HasRows) {
				// Create a DataTable to store the Watt_Management results
				DataTable^ dtWattManagement = gcnew DataTable();
				dtWattManagement->Load(readerWattManagement);

				// Set the DataGridView's DataSource to the DataTable to display the Watt_Management data
				priority->DataSource = dtWattManagement;
			}
			else {
				// Show a message if no data is found in the Watt_Management table
				MessageBox::Show("No data found in the Watt_Management table.");
			}

			// Close the reader for Watt_Management table
			readerWattManagement->Close();
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
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void priority_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void tbwatts_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tblevel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tbtaxes_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tboffpeak_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tbpeak_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tbname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tbid_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void tbpeakend_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnback_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlAdmin1->Hide();
}
};
}
