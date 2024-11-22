#pragma once
#include <regex>
#include <ctime>  // for seeding random number generator
#include <cstdlib> // for rand and srand functions
namespace projectofsre {
	using namespace System::Data::SqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for PSfrmLogin
	/// </summary>
	public ref class PSfrmLogin : public System::Windows::Forms::Form
	{
	public:
		PSfrmLogin(void)
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
		~PSfrmLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ login;
	protected:

	private: System::Windows::Forms::Panel^ loginpanel;
	private: System::Windows::Forms::Button^ home;
	public: System::Windows::Forms::Panel^ signuppanel;
	private:

	private: System::Windows::Forms::Button^ homebutton2;
	private: System::Windows::Forms::Button^ loginbutton2;
	private: System::Windows::Forms::Button^ signupbutton2;
	private: System::Windows::Forms::TextBox^ phonenum;
	private: System::Windows::Forms::TextBox^ areatxtbox;
	private: System::Windows::Forms::TextBox^ passwordtxtbox;
	private: System::Windows::Forms::TextBox^ confirmpasswordtxtbox;







	private: System::Windows::Forms::TextBox^ nametxtbox;
	private: System::Windows::Forms::TextBox^ emailtxtbox;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		bool isNameValid = false;
		bool isEmailValid = false;
		bool isPhoneValid = false;
		bool isAreaValid = false;
		bool isPasswordValid = false;
	private: System::Windows::Forms::Button^ donebutton;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ logindone;
	private: System::Windows::Forms::TextBox^ passlogin;
	private: System::Windows::Forms::TextBox^ namelogin;


	private:




		   bool isConfirmPasswordValid = false;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PSfrmLogin::typeid));
			this->login = (gcnew System::Windows::Forms::Button());
			this->loginpanel = (gcnew System::Windows::Forms::Panel());
			this->signuppanel = (gcnew System::Windows::Forms::Panel());
			this->donebutton = (gcnew System::Windows::Forms::Button());
			this->emailtxtbox = (gcnew System::Windows::Forms::TextBox());
			this->nametxtbox = (gcnew System::Windows::Forms::TextBox());
			this->phonenum = (gcnew System::Windows::Forms::TextBox());
			this->areatxtbox = (gcnew System::Windows::Forms::TextBox());
			this->passwordtxtbox = (gcnew System::Windows::Forms::TextBox());
			this->confirmpasswordtxtbox = (gcnew System::Windows::Forms::TextBox());
			this->homebutton2 = (gcnew System::Windows::Forms::Button());
			this->loginbutton2 = (gcnew System::Windows::Forms::Button());
			this->home = (gcnew System::Windows::Forms::Button());
			this->signupbutton2 = (gcnew System::Windows::Forms::Button());
			this->namelogin = (gcnew System::Windows::Forms::TextBox());
			this->passlogin = (gcnew System::Windows::Forms::TextBox());
			this->logindone = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->loginpanel->SuspendLayout();
			this->signuppanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// login
			// 
			this->login->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->login->BackColor = System::Drawing::Color::Transparent;
			this->login->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"login.BackgroundImage")));
			this->login->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->login->Location = System::Drawing::Point(1199, 13);
			this->login->Margin = System::Windows::Forms::Padding(4);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(133, 49);
			this->login->TabIndex = 2;
			this->login->UseVisualStyleBackColor = false;
			this->login->Click += gcnew System::EventHandler(this, &PSfrmLogin::login_Click);
			// 
			// loginpanel
			// 
			this->loginpanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loginpanel.BackgroundImage")));
			this->loginpanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->loginpanel->Controls->Add(this->signuppanel);
			this->loginpanel->Controls->Add(this->home);
			this->loginpanel->Controls->Add(this->signupbutton2);
			this->loginpanel->Controls->Add(this->namelogin);
			this->loginpanel->Controls->Add(this->passlogin);
			this->loginpanel->Controls->Add(this->logindone);
			this->loginpanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->loginpanel->Location = System::Drawing::Point(0, 0);
			this->loginpanel->Margin = System::Windows::Forms::Padding(4);
			this->loginpanel->Name = L"loginpanel";
			this->loginpanel->Size = System::Drawing::Size(1558, 892);
			this->loginpanel->TabIndex = 2;
			this->loginpanel->Visible = false;
			this->loginpanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PSfrmLogin::loginpanel_Paint);
			// 
			// signuppanel
			// 
			this->signuppanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->signuppanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"signuppanel.BackgroundImage")));
			this->signuppanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->signuppanel->CausesValidation = false;
			this->signuppanel->Controls->Add(this->donebutton);
			this->signuppanel->Controls->Add(this->emailtxtbox);
			this->signuppanel->Controls->Add(this->nametxtbox);
			this->signuppanel->Controls->Add(this->phonenum);
			this->signuppanel->Controls->Add(this->areatxtbox);
			this->signuppanel->Controls->Add(this->passwordtxtbox);
			this->signuppanel->Controls->Add(this->confirmpasswordtxtbox);
			this->signuppanel->Controls->Add(this->homebutton2);
			this->signuppanel->Controls->Add(this->loginbutton2);
			this->signuppanel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.14286F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signuppanel->Location = System::Drawing::Point(0, 0);
			this->signuppanel->Margin = System::Windows::Forms::Padding(4);
			this->signuppanel->Name = L"signuppanel";
			this->signuppanel->Size = System::Drawing::Size(1558, 892);
			this->signuppanel->TabIndex = 4;
			this->signuppanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PSfrmLogin::signuppanel_Paint);
			// 
			// donebutton
			// 
			this->donebutton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->donebutton->BackColor = System::Drawing::Color::Transparent;
			this->donebutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->donebutton->Location = System::Drawing::Point(1199, 643);
			this->donebutton->Margin = System::Windows::Forms::Padding(4);
			this->donebutton->Name = L"donebutton";
			this->donebutton->Size = System::Drawing::Size(158, 70);
			this->donebutton->TabIndex = 10;
			this->donebutton->UseVisualStyleBackColor = false;
			this->donebutton->Click += gcnew System::EventHandler(this, &PSfrmLogin::donebutton_Click);
			// 
			// emailtxtbox
			// 
			this->emailtxtbox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->emailtxtbox->Location = System::Drawing::Point(520, 366);
			this->emailtxtbox->Margin = System::Windows::Forms::Padding(4);
			this->emailtxtbox->Multiline = true;
			this->emailtxtbox->Name = L"emailtxtbox";
			this->emailtxtbox->Size = System::Drawing::Size(509, 56);
			this->emailtxtbox->TabIndex = 9;
			this->emailtxtbox->TextChanged += gcnew System::EventHandler(this, &PSfrmLogin::emailtxtbox_TextChanged);
			// 
			// nametxtbox
			// 
			this->nametxtbox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->nametxtbox->Location = System::Drawing::Point(520, 308);
			this->nametxtbox->Margin = System::Windows::Forms::Padding(4);
			this->nametxtbox->Multiline = true;
			this->nametxtbox->Name = L"nametxtbox";
			this->nametxtbox->Size = System::Drawing::Size(509, 47);
			this->nametxtbox->TabIndex = 8;
			this->nametxtbox->TextChanged += gcnew System::EventHandler(this, &PSfrmLogin::nametxtbox_TextChanged);
			// 
			// phonenum
			// 
			this->phonenum->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->phonenum->Location = System::Drawing::Point(520, 430);
			this->phonenum->Margin = System::Windows::Forms::Padding(4);
			this->phonenum->Multiline = true;
			this->phonenum->Name = L"phonenum";
			this->phonenum->Size = System::Drawing::Size(509, 51);
			this->phonenum->TabIndex = 7;
			this->phonenum->TextChanged += gcnew System::EventHandler(this, &PSfrmLogin::phonenum_TextChanged);
			// 
			// areatxtbox
			// 
			this->areatxtbox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->areatxtbox->Location = System::Drawing::Point(520, 489);
			this->areatxtbox->Margin = System::Windows::Forms::Padding(4);
			this->areatxtbox->Multiline = true;
			this->areatxtbox->Name = L"areatxtbox";
			this->areatxtbox->Size = System::Drawing::Size(509, 54);
			this->areatxtbox->TabIndex = 5;
			this->areatxtbox->TextChanged += gcnew System::EventHandler(this, &PSfrmLogin::areatxtbox_TextChanged);
			// 
			// passwordtxtbox
			// 
			this->passwordtxtbox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->passwordtxtbox->Location = System::Drawing::Point(520, 551);
			this->passwordtxtbox->Margin = System::Windows::Forms::Padding(4);
			this->passwordtxtbox->Multiline = true;
			this->passwordtxtbox->Name = L"passwordtxtbox";
			this->passwordtxtbox->Size = System::Drawing::Size(509, 51);
			this->passwordtxtbox->TabIndex = 4;
			this->passwordtxtbox->TextChanged += gcnew System::EventHandler(this, &PSfrmLogin::passwordtxtbox_TextChanged);
			// 
			// confirmpasswordtxtbox
			// 
			this->confirmpasswordtxtbox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->confirmpasswordtxtbox->Location = System::Drawing::Point(520, 610);
			this->confirmpasswordtxtbox->Margin = System::Windows::Forms::Padding(4);
			this->confirmpasswordtxtbox->Multiline = true;
			this->confirmpasswordtxtbox->Name = L"confirmpasswordtxtbox";
			this->confirmpasswordtxtbox->Size = System::Drawing::Size(509, 64);
			this->confirmpasswordtxtbox->TabIndex = 3;
			this->confirmpasswordtxtbox->TextChanged += gcnew System::EventHandler(this, &PSfrmLogin::confirmpasswordtxtbox_TextChanged);
			// 
			// homebutton2
			// 
			this->homebutton2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->homebutton2->BackColor = System::Drawing::Color::Transparent;
			this->homebutton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"homebutton2.BackgroundImage")));
			this->homebutton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->homebutton2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->homebutton2->Location = System::Drawing::Point(1216, 67);
			this->homebutton2->Margin = System::Windows::Forms::Padding(4);
			this->homebutton2->Name = L"homebutton2";
			this->homebutton2->Size = System::Drawing::Size(134, 60);
			this->homebutton2->TabIndex = 1;
			this->homebutton2->UseVisualStyleBackColor = false;
			this->homebutton2->Click += gcnew System::EventHandler(this, &PSfrmLogin::homebutton2_Click);
			// 
			// loginbutton2
			// 
			this->loginbutton2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->loginbutton2->BackColor = System::Drawing::Color::Transparent;
			this->loginbutton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loginbutton2.BackgroundImage")));
			this->loginbutton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->loginbutton2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginbutton2->Location = System::Drawing::Point(1358, 67);
			this->loginbutton2->Margin = System::Windows::Forms::Padding(4);
			this->loginbutton2->Name = L"loginbutton2";
			this->loginbutton2->Size = System::Drawing::Size(143, 60);
			this->loginbutton2->TabIndex = 0;
			this->loginbutton2->UseVisualStyleBackColor = false;
			this->loginbutton2->Click += gcnew System::EventHandler(this, &PSfrmLogin::loginbutton2_Click);
			// 
			// home
			// 
			this->home->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->home->BackColor = System::Drawing::Color::Transparent;
			this->home->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"home.BackgroundImage")));
			this->home->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->home->Location = System::Drawing::Point(1216, 13);
			this->home->Margin = System::Windows::Forms::Padding(4);
			this->home->Name = L"home";
			this->home->Size = System::Drawing::Size(167, 61);
			this->home->TabIndex = 0;
			this->home->UseVisualStyleBackColor = false;
			this->home->Click += gcnew System::EventHandler(this, &PSfrmLogin::home_Click);
			// 
			// signupbutton2
			// 
			this->signupbutton2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->signupbutton2->BackColor = System::Drawing::Color::Transparent;
			this->signupbutton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"signupbutton2.BackgroundImage")));
			this->signupbutton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->signupbutton2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signupbutton2->Location = System::Drawing::Point(1391, 13);
			this->signupbutton2->Margin = System::Windows::Forms::Padding(4);
			this->signupbutton2->Name = L"signupbutton2";
			this->signupbutton2->Size = System::Drawing::Size(154, 61);
			this->signupbutton2->TabIndex = 2;
			this->signupbutton2->UseVisualStyleBackColor = false;
			this->signupbutton2->Click += gcnew System::EventHandler(this, &PSfrmLogin::signupbutton2_Click);
			// 
			// namelogin
			// 
			this->namelogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->namelogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.14286F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->namelogin->Location = System::Drawing::Point(520, 399);
			this->namelogin->Multiline = true;
			this->namelogin->Name = L"namelogin";
			this->namelogin->Size = System::Drawing::Size(483, 53);
			this->namelogin->TabIndex = 4;
			this->namelogin->TextChanged += gcnew System::EventHandler(this, &PSfrmLogin::namelogin_TextChanged);
			// 
			// passlogin
			// 
			this->passlogin->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->passlogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.14286F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passlogin->Location = System::Drawing::Point(520, 468);
			this->passlogin->Multiline = true;
			this->passlogin->Name = L"passlogin";
			this->passlogin->PasswordChar = '*';
			this->passlogin->Size = System::Drawing::Size(483, 56);
			this->passlogin->TabIndex = 5;
			this->passlogin->TextChanged += gcnew System::EventHandler(this, &PSfrmLogin::passlogin_TextChanged);
			// 
			// logindone
			// 
			this->logindone->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->logindone->BackColor = System::Drawing::Color::Transparent;
			this->logindone->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logindone.BackgroundImage")));
			this->logindone->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->logindone->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logindone->Location = System::Drawing::Point(956, 657);
			this->logindone->Name = L"logindone";
			this->logindone->Size = System::Drawing::Size(147, 76);
			this->logindone->TabIndex = 3;
			this->logindone->UseVisualStyleBackColor = false;
			this->logindone->Click += gcnew System::EventHandler(this, &PSfrmLogin::logindone_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(1021, 13);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 49);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &PSfrmLogin::button1_Click);
			// 
			// PSfrmLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(168, 168);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1558, 892);
			this->Controls->Add(this->loginpanel);
			this->Controls->Add(this->login);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"PSfrmLogin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PSfrmLogin";
			this->Load += gcnew System::EventHandler(this, &PSfrmLogin::PSfrmLogin_Load);
			this->loginpanel->ResumeLayout(false);
			this->loginpanel->PerformLayout();
			this->signuppanel->ResumeLayout(false);
			this->signuppanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void login_Click(System::Object^ sender, System::EventArgs^ e) {
		//loginpanel->Visible = true;
		signuppanel->Hide();
		loginpanel->Show();
	}

	private: System::Void home_Click(System::Object^ sender, System::EventArgs^ e) {
		/*signuppanel->Visible = false;*/

		//loginpanel->Visible = false;
		loginpanel->Hide();
	}
private: System::Void homebutton2_Click(System::Object^ sender, System::EventArgs^ e) {
	/*loginpanel->Visible = false;
	signuppanel->Visible = false;*/
	signuppanel->Hide();
	loginpanel->Hide();


}
private: System::Void loginbutton2_Click(System::Object^ sender, System::EventArgs^ e) {

	/*signuppanel->Visible = false;
	loginpanel->Visible = true;*/
	signuppanel->Hide();

	loginpanel->Show();
}

private: System::Void signupbutton2_Click(System::Object^ sender, System::EventArgs^ e) {
	signuppanel->Show();
}
private: System::Void signup_Click(System::Object^ sender, System::EventArgs^ e) {
	signuppanel->Show();
}

private: System::Void PSfrmLogin_Load(System::Object^ sender, System::EventArgs^ e) {
	//loginpanel->Hide();
	//signuppanel->Hide();

}
private: System::Void signuppanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	//signuppanel->Visible = true;
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void nametxtbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::TextBox^ textBox = safe_cast<System::Windows::Forms::TextBox^>(sender);
	isNameValid = true;

	for (int i = 0; i < textBox->Text->Length; i++) {
		if (!System::Char::IsLetter(textBox->Text[i])) {
			isNameValid = false;
			break;
		}
	}

	textBox->ForeColor = isNameValid ? System::Drawing::Color::Black : System::Drawing::Color::Red;
}
private: System::Void emailtxtbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::TextBox^ textBox = safe_cast<System::Windows::Forms::TextBox^>(sender);
	System::String^ emailPattern = "^\\w+([-+.']\\w+)*@\\w+([-.]\\w+)*\\.\\w+([-.]\\w+)*$";
	isEmailValid = System::Text::RegularExpressions::Regex::IsMatch(textBox->Text, emailPattern);

	textBox->ForeColor = isEmailValid ? System::Drawing::Color::Black : System::Drawing::Color::Red;
}

private: System::Void phonenum_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::TextBox^ textBox = safe_cast<System::Windows::Forms::TextBox^>(sender);
	System::String^ phonePattern = "^\\d{1,11}$";
	isPhoneValid = System::Text::RegularExpressions::Regex::IsMatch(textBox->Text, phonePattern);

	textBox->ForeColor = isPhoneValid ? System::Drawing::Color::Black : System::Drawing::Color::Red;
	textBox->MaxLength = 11; // Ensure max length
}

private: System::Void areatxtbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::TextBox^ textBox = safe_cast<System::Windows::Forms::TextBox^>(sender);
	isAreaValid = true;

	for (int i = 0; i < textBox->Text->Length; i++) {
		if (!System::Char::IsLetter(textBox->Text[i])) {
			isAreaValid = false;
			break;
		}
	}

	textBox->ForeColor = isAreaValid ? System::Drawing::Color::Black : System::Drawing::Color::Red;
}

private: System::Void passwordtxtbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::TextBox^ textBox = safe_cast<System::Windows::Forms::TextBox^>(sender);
	isPasswordValid = textBox->Text->Length >= 8;
	textBox->ForeColor = isPasswordValid ? System::Drawing::Color::Black : System::Drawing::Color::Red;
}


private: System::Void confirmpasswordtxtbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::TextBox^ confirmTextBox = safe_cast<System::Windows::Forms::TextBox^>(sender);
	System::Windows::Forms::TextBox^ passwordTextBox = this->passwordtxtbox;
	isConfirmPasswordValid = (confirmTextBox->Text == passwordTextBox->Text);

	confirmTextBox->ForeColor = isConfirmPasswordValid ? System::Drawing::Color::Black : System::Drawing::Color::Red;
}

	   String^ GenerateRandomString(int length) {
		   String^ randomString = "";
		   String^ chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
		   srand(static_cast<unsigned int>(time(0)));  // seed for randomness

		   for (int i = 0; i < length; i++) {
			   randomString += chars[rand() % chars->Length];
		   }

		   return randomString;
	   }
private: System::Void donebutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isNameValid && isEmailValid && isPhoneValid && isAreaValid && isPasswordValid && isConfirmPasswordValid) {
		/*signuppanel->Visible = false;
		loginpanel->Visible = true;*/
		String^ areaText = areatxtbox->Text;
		String^ Name = nametxtbox->Text;
		String^ uEmail = emailtxtbox->Text;
		String^ uPassword = passwordtxtbox->Text;
		String^ ContactNo = phonenum->Text;
		try
		{

			String^ connString = "Data Source = DESKTOP-80K9IE5\\SQLEXPRESS;Initial Catalog=PeakSaver;Integrated Security=True";  //server address

			//class SqlConnection has an obj sqlconn which opens path (variable) connString
			SqlConnection sqlconn(connString);    //opens the path kinda

			//to open the database connection
			sqlconn.Open();
			String^ randomUserId = GenerateRandomString(8);
			// sqlquery to insert the record in database table
			String^ sqlquery = "Insert into tbUserData " + "(user_id, username, password, phone_no, area,email) VALUES " + "(@randomUserId2 ,@UName,@UPassword,@ContactNo2 ,@areaText2 ,@UEmail)";

			//assign the  insert query   to the database                 
			SqlCommand command(sqlquery, % sqlconn);

			//to pass the parameter 
			/*command.Parameters->AddWithValue("@UName", Name);
			command.Parameters->AddWithValue("@UEmail", uEmail);
			command.Parameters->AddWithValue("@UPassword", uPassword);
			command.Parameters->AddWithValue("@ContactNo", ContactNo);*/
			command.Parameters->AddWithValue("@randomUserId2", randomUserId);
			command.Parameters->AddWithValue("@UName", Name);
			command.Parameters->AddWithValue("@UPassword", uPassword);
			command.Parameters->AddWithValue("@ContactNo2", ContactNo);
			command.Parameters->AddWithValue("@areaText2", areaText);
			command.Parameters->AddWithValue("@UEmail", uEmail);

			//execute query
			command.ExecuteNonQuery();
			signuppanel->Visible = false;
			loginpanel->Visible = true;

		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Failed to display", "Failed", MessageBoxButtons::OK);
		}

	}
	else {
		System::String^ errorMessage = "Please fix the following issues:\n";
		if (!isNameValid) errorMessage += "Name must contain only letters.\n";
		if (!isEmailValid) errorMessage += "Invalid email format.\n";
		if (!isPhoneValid) errorMessage += "Phone number must be 11 digits.\n";
		if (!isAreaValid) errorMessage += "Area must contain only letters.\n";
		if (!isPasswordValid) errorMessage += "Password must be at least 8 characters.\n";
		if (!isConfirmPasswordValid) errorMessage += "Confirm password must match the password.\n";

		System::Windows::Forms::MessageBox::Show(errorMessage, "Input Error", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
	}
}
private: System::Void buttonsignup_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//MessageBox::Show("Button Clicked");
	loginpanel->Show();

	signuppanel->Show();
	signuppanel->BringToFront();
	//signuppanel->Show();
	/*loginpanel->Hide();*/
	signuppanel->Visible = true;;
	//loginpanel->Hide();
	}
private: System::Void loginpanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	 
private: System::Void logindone_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (String::IsNullOrWhiteSpace(namelogin->Text))
	{
		MessageBox::Show("Name field cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return; // Exit the function to avoid further processing
	}

	// Check if the password textbox is empty
	if (String::IsNullOrWhiteSpace(passlogin->Text))
	{
		MessageBox::Show("Password field cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return; // Exit the function to avoid further processing
	}

	//// Proceed with login logic if both fields are filled
	//MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	try
	{
		
		String^ Name = namelogin->Text;
		String^ uPassword = passlogin->Text;
		
		String^ connString = "Data Source = DESKTOP-80K9IE5\\SQLEXPRESS;Initial Catalog=PeakSaver;Integrated Security=True";  //server address

		SqlConnection sqlconn(connString);

		//to open the database connection
		sqlconn.Open();

		String^ sqlQuery = "SELECT * FROM tbUserData WHERE username=@Name AND password=@uPassword;";
		SqlCommand Command(sqlQuery, % sqlconn);

		Command.Parameters->AddWithValue("@Name", Name);
		Command.Parameters->AddWithValue("@uPassword", uPassword);

		SqlDataReader^ Reader = Command.ExecuteReader();

		if (Reader->Read())
		{
			MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			//loginpanel->Hide();
			
		}
		else
		{
			MessageBox::Show("Email or Password is Incorrect ", "Incorrect Credential", MessageBoxButtons::OK);
			return;
		}

	}
	catch (Exception^ ex)
	{
		//MessageBox::Show("Failed to Connect to Database ", "Database Connection Error", MessageBoxButtons::OK);
		MessageBox::Show("Failed to connect to database: " + ex->Message, "Database Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		return;
	}
}
private: System::Void namelogin_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void passlogin_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
