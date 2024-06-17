#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ cmdClick;
	private: System::Windows::Forms::Label^ lblMensaje;
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
			this->cmdClick = (gcnew System::Windows::Forms::Button());
			this->lblMensaje = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// cmdClick
			// 
			this->cmdClick->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->cmdClick->Location = System::Drawing::Point(231, 108);
			this->cmdClick->Name = L"cmdClick";
			this->cmdClick->Size = System::Drawing::Size(75, 46);
			this->cmdClick->TabIndex = 0;
			this->cmdClick->Text = L"Click para la magia";
			this->cmdClick->UseVisualStyleBackColor = true;
			this->cmdClick->Click += gcnew System::EventHandler(this, &Form1::cmdClick_Click);
			// 
			// lblMensaje
			// 
			this->lblMensaje->AutoSize = true;
			this->lblMensaje->Location = System::Drawing::Point(59, 118);
			this->lblMensaje->Name = L"lblMensaje";
			this->lblMensaje->Size = System::Drawing::Size(67, 13);
			this->lblMensaje->TabIndex = 1;
			this->lblMensaje->Text = L"Esperando...";
			this->lblMensaje->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(356, 279);
			this->Controls->Add(this->lblMensaje);
			this->Controls->Add(this->cmdClick);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void cmdClick_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->lblMensaje->Text == ":D")
		{
			this->lblMensaje->Text = " (o^o)/";
		}
		else
			this->lblMensaje->Text = ":D";
	}
	};
}
