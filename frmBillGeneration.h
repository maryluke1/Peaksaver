#pragma once

namespace PeakSaver 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmBillGeneration
	/// </summary>
	public ref class frmBillGeneration : public System::Windows::Forms::Form
	{
	public:
	public: frmBillGeneration(int budget, double taxes)
	{
		InitializeComponent();

		// Display budget and taxes in respective textboxes
		tbTaxes->Text = taxes.ToString("F2");  // Format to 2 decimal places if you want
		tbBudget->Text = budget.ToString();

		// Calculate total (sum of taxes and budget)
		double total = budget + taxes;

		// Display the total in tbTotalBill
		tbTotalBill->Text = total.ToString("F2"); // Format to 2 decimal places

		// Calculate the difference (remainder)
		double remainder = budget - total;
	}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmBillGeneration()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TextBox^ tbTotalBill;
	private: System::Windows::Forms::TextBox^ tbTaxes;
	private: System::Windows::Forms::TextBox^ tbBudget;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label3;

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
			this->tbTotalBill = (gcnew System::Windows::Forms::TextBox());
			this->tbTaxes = (gcnew System::Windows::Forms::TextBox());
			this->tbBudget = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tbTotalBill
			// 
			this->tbTotalBill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbTotalBill->Location = System::Drawing::Point(521, 320);
			this->tbTotalBill->Name = L"tbTotalBill";
			this->tbTotalBill->Size = System::Drawing::Size(261, 38);
			this->tbTotalBill->TabIndex = 15;
			// 
			// tbTaxes
			// 
			this->tbTaxes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbTaxes->Location = System::Drawing::Point(521, 232);
			this->tbTaxes->Name = L"tbTaxes";
			this->tbTaxes->Size = System::Drawing::Size(261, 38);
			this->tbTaxes->TabIndex = 14;
			// 
			// tbBudget
			// 
			this->tbBudget->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbBudget->Location = System::Drawing::Point(521, 155);
			this->tbBudget->Name = L"tbBudget";
			this->tbBudget->Size = System::Drawing::Size(261, 38);
			this->tbBudget->TabIndex = 13;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(188, 323);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(133, 32);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Total Bill:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(188, 236);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(259, 32);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Taxes of your Area:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(188, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(237, 32);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Your Budget was:";
			// 
			// frmBillGeneration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1060, 644);
			this->Controls->Add(this->tbTotalBill);
			this->Controls->Add(this->tbTaxes);
			this->Controls->Add(this->tbBudget);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->Name = L"frmBillGeneration";
			this->Text = L"frmBillGeneration";
			this->Load += gcnew System::EventHandler(this, &frmBillGeneration::frmBillGeneration_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmBillGeneration_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
