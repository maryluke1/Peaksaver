#pragma once
#include "HelperClass.h"
//when calling this write---- Application::Run(gcnew PSfrmAddappliance(true)); // Initial form load
namespace projectofsre {
	using namespace System::Data::SqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PSfrmAddappliance
	/// </summary>
	public ref class PSfrmAddappliance : public System::Windows::Forms::Form
	{
	public:
		PSfrmAddappliance(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//currentapliancenum->Text = "0";
			//
		}
		PSfrmAddappliance(bool isFirstLoad) {
			InitializeComponent();
			if (isFirstLoad) {
				totalappliances->Enabled = true;  // Enable total appliances TextBox
				currentapliancenum->Text = "0";  // Initialize current appliance number
			}
		}

		// Constructor for subsequent loads
		PSfrmAddappliance(int currentAppliance, int totalAppliances) {
			InitializeComponent();
			totalappliances->Enabled = false;                         // Disable total appliances TextBox
			totalappliances->Text = totalAppliances.ToString();       // Set the total appliances TextBox
			currentapliancenum->Text = currentAppliance.ToString();   // Set the current appliance TextBox
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PSfrmAddappliance()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ totalappliances;
	private: System::Windows::Forms::TextBox^ appliancename;
	private: System::Windows::Forms::TextBox^ kwhofappliance;
	private: System::Windows::Forms::TextBox^ currentapliancenum;
	protected:

	protected:



	private: System::Windows::Forms::Button^ next_button;


	private: System::Windows::Forms::RadioButton^ verylow;
	private: System::Windows::Forms::RadioButton^ low;
	private: System::Windows::Forms::RadioButton^ medium;
	private: System::Windows::Forms::RadioButton^ high;
	private: System::Windows::Forms::RadioButton^ veryhigh;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

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
			this->totalappliances = (gcnew System::Windows::Forms::TextBox());
			this->appliancename = (gcnew System::Windows::Forms::TextBox());
			this->kwhofappliance = (gcnew System::Windows::Forms::TextBox());
			this->currentapliancenum = (gcnew System::Windows::Forms::TextBox());
			this->next_button = (gcnew System::Windows::Forms::Button());
			this->verylow = (gcnew System::Windows::Forms::RadioButton());
			this->low = (gcnew System::Windows::Forms::RadioButton());
			this->medium = (gcnew System::Windows::Forms::RadioButton());
			this->high = (gcnew System::Windows::Forms::RadioButton());
			this->veryhigh = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// totalappliances
			// 
			this->totalappliances->Location = System::Drawing::Point(223, 85);
			this->totalappliances->Multiline = true;
			this->totalappliances->Name = L"totalappliances";
			this->totalappliances->Size = System::Drawing::Size(406, 42);
			this->totalappliances->TabIndex = 0;
			this->totalappliances->TextChanged += gcnew System::EventHandler(this, &PSfrmAddappliance::totalappliances_TextChanged);
			// 
			// appliancename
			// 
			this->appliancename->Location = System::Drawing::Point(206, 343);
			this->appliancename->Multiline = true;
			this->appliancename->Name = L"appliancename";
			this->appliancename->Size = System::Drawing::Size(363, 52);
			this->appliancename->TabIndex = 1;
			this->appliancename->TextChanged += gcnew System::EventHandler(this, &PSfrmAddappliance::appliancename_TextChanged);
			// 
			// kwhofappliance
			// 
			this->kwhofappliance->Location = System::Drawing::Point(223, 487);
			this->kwhofappliance->Multiline = true;
			this->kwhofappliance->Name = L"kwhofappliance";
			this->kwhofappliance->Size = System::Drawing::Size(333, 42);
			this->kwhofappliance->TabIndex = 2;
			this->kwhofappliance->TextChanged += gcnew System::EventHandler(this, &PSfrmAddappliance::kwhofappliance_TextChanged);
			// 
			// currentapliancenum
			// 
			this->currentapliancenum->Location = System::Drawing::Point(948, 179);
			this->currentapliancenum->Multiline = true;
			this->currentapliancenum->Name = L"currentapliancenum";
			this->currentapliancenum->Size = System::Drawing::Size(335, 50);
			this->currentapliancenum->TabIndex = 3;
			this->currentapliancenum->TextChanged += gcnew System::EventHandler(this, &PSfrmAddappliance::currentapliancenum_TextChanged);
			// 
			// next_button
			// 
			this->next_button->Location = System::Drawing::Point(1108, 614);
			this->next_button->Name = L"next_button";
			this->next_button->Size = System::Drawing::Size(175, 97);
			this->next_button->TabIndex = 4;
			this->next_button->Text = L"next";
			this->next_button->UseVisualStyleBackColor = true;
			this->next_button->Click += gcnew System::EventHandler(this, &PSfrmAddappliance::next_button_Click);
			// 
			// verylow
			// 
			this->verylow->AutoSize = true;
			this->verylow->Location = System::Drawing::Point(684, 550);
			this->verylow->Name = L"verylow";
			this->verylow->Size = System::Drawing::Size(108, 29);
			this->verylow->TabIndex = 5;
			this->verylow->TabStop = true;
			this->verylow->Text = L"very low";
			this->verylow->UseVisualStyleBackColor = true;
			this->verylow->CheckedChanged += gcnew System::EventHandler(this, &PSfrmAddappliance::verylow_CheckedChanged);
			// 
			// low
			// 
			this->low->AutoSize = true;
			this->low->Location = System::Drawing::Point(684, 595);
			this->low->Name = L"low";
			this->low->Size = System::Drawing::Size(66, 29);
			this->low->TabIndex = 6;
			this->low->TabStop = true;
			this->low->Text = L"low";
			this->low->UseVisualStyleBackColor = true;
			this->low->CheckedChanged += gcnew System::EventHandler(this, &PSfrmAddappliance::low_CheckedChanged);
			// 
			// medium
			// 
			this->medium->AutoSize = true;
			this->medium->Location = System::Drawing::Point(684, 648);
			this->medium->Name = L"medium";
			this->medium->Size = System::Drawing::Size(106, 29);
			this->medium->TabIndex = 7;
			this->medium->TabStop = true;
			this->medium->Text = L"medium";
			this->medium->UseVisualStyleBackColor = true;
			this->medium->CheckedChanged += gcnew System::EventHandler(this, &PSfrmAddappliance::medium_CheckedChanged);
			// 
			// high
			// 
			this->high->AutoSize = true;
			this->high->Location = System::Drawing::Point(684, 704);
			this->high->Name = L"high";
			this->high->Size = System::Drawing::Size(74, 29);
			this->high->TabIndex = 8;
			this->high->TabStop = true;
			this->high->Text = L"high";
			this->high->UseVisualStyleBackColor = true;
			this->high->CheckedChanged += gcnew System::EventHandler(this, &PSfrmAddappliance::high_CheckedChanged);
			// 
			// veryhigh
			// 
			this->veryhigh->AutoSize = true;
			this->veryhigh->Location = System::Drawing::Point(684, 750);
			this->veryhigh->Name = L"veryhigh";
			this->veryhigh->Size = System::Drawing::Size(116, 29);
			this->veryhigh->TabIndex = 9;
			this->veryhigh->TabStop = true;
			this->veryhigh->Text = L"very high";
			this->veryhigh->UseVisualStyleBackColor = true;
			this->veryhigh->CheckedChanged += gcnew System::EventHandler(this, &PSfrmAddappliance::veryhigh_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 25);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Total appliances";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(679, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(232, 25);
			this->label2->TabIndex = 11;
			this->label2->Text = L"current appliance number";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 360);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 25);
			this->label3->TabIndex = 12;
			this->label3->Text = L"appliance name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(31, 490);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(161, 25);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Kwh of appliance";
			// 
			// PSfrmAddappliance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1718, 946);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->veryhigh);
			this->Controls->Add(this->high);
			this->Controls->Add(this->medium);
			this->Controls->Add(this->low);
			this->Controls->Add(this->verylow);
			this->Controls->Add(this->next_button);
			this->Controls->Add(this->currentapliancenum);
			this->Controls->Add(this->kwhofappliance);
			this->Controls->Add(this->appliancename);
			this->Controls->Add(this->totalappliances);
			this->Name = L"PSfrmAddappliance";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PSfrmAddappliance";
			this->Load += gcnew System::EventHandler(this, &PSfrmAddappliance::PSfrmAddappliance_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		private:
			double kWh;
	private: System::Void totalappliances_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int totalAppliances = 0;

		// Check if the input can be parsed as an integer
		if (int::TryParse(totalappliances->Text, totalAppliances)) {
			// If valid, reset the text color to default (black)
			totalappliances->ForeColor = System::Drawing::Color::Black;

			// Refresh the form when a valid total number of appliances is entered
			currentapliancenum->Text = "1"; // Start current appliance count from 1
			next_button->Enabled = true;   // Ensure the next button is enabled
		}
		else {
			// If invalid, set the text color to red
			totalappliances->ForeColor = System::Drawing::Color::Red;

			// Disable the next button
			next_button->Enabled = false;

			// Optionally show a message box to guide the user
			//MessageBox::Show("Please enter a valid number of appliances.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

private: System::Void appliancename_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	System::String^ input = appliancename->Text;

	// Check if the input contains only alphabets
	bool isValid = true;
	for (int i = 0; i < input->Length; i++) {
		if (!System::Char::IsLetter(input[i])) {
			isValid = false;
			break;
		}
	}

	// If valid, reset the text color to black; otherwise, set it to red
	if (isValid) {
		appliancename->ForeColor = System::Drawing::Color::Black;
	}
	else {
		appliancename->ForeColor = System::Drawing::Color::Red;
	}
}
private: System::Void kwhofappliance_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	System::String^ input = kwhofappliance->Text;

	// Disable or enable radio buttons based on textbox input
	if (!String::IsNullOrWhiteSpace(input)) {
		// Disable radio buttons if text is entered
		verylow->Enabled = false;
		low->Enabled = false;
		medium->Enabled = false;
		high->Enabled = false;
		veryhigh->Enabled = false;

		// Check if the input contains only numeric characters
		bool isValid = true;
		for (int i = 0; i < input->Length; i++) {
			if (!System::Char::IsDigit(input[i])) {
				isValid = false;
				break;
			}
		}

		// If valid, reset the text color to black; otherwise, set it to red
		if (isValid) {
			kwhofappliance->ForeColor = System::Drawing::Color::Black;
		}
		else {
			kwhofappliance->ForeColor = System::Drawing::Color::Red;
		}
	}
	else {
		// Enable radio buttons if the textbox is empty
		verylow->Enabled = true;
		low->Enabled = true;
		medium->Enabled = true;
		high->Enabled = true;
		veryhigh->Enabled = true;
	}
}

private: System::Void currentapliancenum_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void next_button_Click(System::Object^ sender, System::EventArgs^ e) {
	int totalAppliances = 0;

	// Validate total appliances input
	if (int::TryParse(totalappliances->Text, totalAppliances)) {
		int currentApplianceNum = 0;

		// Validate current appliance input
		if (int::TryParse(currentapliancenum->Text, currentApplianceNum)) {
			// Increment the current appliance number
			currentApplianceNum++;

			// Check if the current appliance number is within the limit
			if (currentApplianceNum <= totalAppliances) {
				// Get appliance details
				String^ applianceName = appliancename->Text;
				String^ applianceKwh = kwhofappliance->Text;

				// If the kWh textbox is not empty, use that value, otherwise use the radio button kWh value
				double applianceKwhValue = 0;
				if (!String::IsNullOrWhiteSpace(applianceKwh)) {
					applianceKwhValue = Convert::ToDouble(applianceKwh);
				}
				else {
					applianceKwhValue = kWh; // Use kWh from radio button selection
				}

				// Check if appliance name is empty
				if (String::IsNullOrWhiteSpace(applianceName)) {
					MessageBox::Show("Appliance name must not be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				// Validate appliance name (should contain only alphabets)
				bool isNameValid = true;
				for (int i = 0; i < applianceName->Length; i++) {
					if (!System::Char::IsLetter(applianceName[i])) {
						isNameValid = false;
						break;
					}
				}

				// If the appliance name is valid, proceed
				if (isNameValid) {
					try {
						// Encrypt appliance details if necessary
						String^ encryptedApplianceName = applianceName;
						String^ encryptedKwh = applianceKwhValue.ToString();

						// Database connection string
						HelperClass h;
						String^ connString = h.ConString;

						SqlConnection sqlconn(connString);
						sqlconn.Open();

						// SQL query to insert appliance data
						String^ sqlquery = "INSERT INTO tb_PSAppliances (Name, Kwh) VALUES (@ApplianceName, @Kwh)";
						SqlCommand command(sqlquery, % sqlconn);
						command.Parameters->AddWithValue("@ApplianceName", encryptedApplianceName);
						command.Parameters->AddWithValue("@Kwh", encryptedKwh);

						command.ExecuteNonQuery();
					}
					catch (Exception^ ex) {
						MessageBox::Show("Failed to insert appliance data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}

					this->Hide(); // Hide the current form

					// Use the second constructor for subsequent reloads
					PSfrmAddappliance^ newForm = gcnew PSfrmAddappliance(currentApplianceNum, totalAppliances);
					newForm->ShowDialog();
					this->Close(); // Close the current form
				}
				else {
					MessageBox::Show("Invalid appliance name.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else {
				next_button->Enabled = false;
				MessageBox::Show("All appliances have been processed.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		else {
			MessageBox::Show("Invalid current appliance number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Invalid total appliances number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}




private: System::Void PSfrmAddappliance_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void verylow_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (verylow->Checked) {
		// Set kWh to the dummy value for very low
		kWh = 0.5;
	}
}

private: System::Void low_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (low->Checked) {
		// Set kWh to the dummy value for low
		kWh = 1.0;
	}
}

private: System::Void medium_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (medium->Checked) {
		// Set kWh to the dummy value for medium
		kWh = 2.0;
	}
}

private: System::Void high_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (high->Checked) {
		// Set kWh to the dummy value for high
		kWh = 3.5;
	}
}

private: System::Void veryhigh_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (veryhigh->Checked) {
		// Set kWh to the dummy value for very high
		kWh = 5.0;
	}
}

};
}
