#include "stdafx.h"
#include "SetSec.h"


SetSec::SetSec()
{
	this->_startNum = 0;
	this->_endNum = 50;
	InitFrom();
	
}
void SetSec::InitFrom()
{

	//控件对象
	this->OKSec = (gcnew System::Windows::Forms::Button());
	this->StartNum = (gcnew System::Windows::Forms::TextBox());
	this->EndNum = (gcnew System::Windows::Forms::TextBox());
	this->startlab = (gcnew System::Windows::Forms::Label());
	this->endlab = (gcnew System::Windows::Forms::Label());


		//oksec
	this->OKSec->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
		static_cast<System::Int32>(static_cast<System::Byte>(192)));
	this->OKSec->Font = (gcnew System::Drawing::Font(L"方正舒体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(134)));
	this->OKSec->ForeColor = System::Drawing::Color::White;
	this->OKSec->Location = System::Drawing::Point((this->Width-this->OKSec->Width)/2,250);
	this->OKSec->Name = L"OKSec";
	this->OKSec->Size = System::Drawing::Size(113, 30);
	this->OKSec->TabIndex = 1;
	this->OKSec->Text = L"完成设置";
	this->OKSec->UseVisualStyleBackColor = false;
	this->OKSec->Click+=gcnew System::EventHandler(this, &SetSec::OnClick);
	//this->OKSec->Click += gcnew System::EventHandler(this, &For::button1_Click);
	
	//startnum
	this->StartNum->BackColor = Color::GhostWhite;
	this->StartNum->Font = (gcnew System::Drawing::Font(L"方正舒体", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(134)));
	this->StartNum->Location = Drawing::Point((this->Width - this->OKSec->Width) / 2,100);
	this->StartNum->Name = "StartNum";
	this->StartNum->Size = Drawing::Size(113,30);
	this->StartNum->Text = "0";
	//this->StartNum->



	//endnum
	this->EndNum->BackColor = Color::GhostWhite;
	this->EndNum->Font = (gcnew System::Drawing::Font(L"方正舒体", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(134)));
	this->EndNum->Location = Drawing::Point((this->Width - this->OKSec->Width) / 2, 150);
	this->EndNum->Name = "EndNum";
	this->EndNum->Size = Drawing::Size(113, 30);
	this->EndNum->Text = "0";
	
	//startlab
	this->startlab->Font = (gcnew System::Drawing::Font(L"方正舒体", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(134)));
	this->startlab->Location = Drawing::Point(((this->Width - this->OKSec->Width) / 2)-20, 80);
	this->startlab->Text = "开始的数：";
	this->startlab->ForeColor = Color::Black;

	//endlab
	this->endlab->Font = (gcnew System::Drawing::Font(L"方正舒体", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(134)));
	this->endlab->Location = Drawing::Point(((this->Width - this->OKSec->Width) / 2) - 20, 130);
	this->endlab->Text = "结束的数：";
	this->endlab->ForeColor = Color::Black;
	//form
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
	this->BackColor = System::Drawing::Color::BurlyWood;
	this->ClientSize = System::Drawing::Size(300, 300);
	this->Controls->Add(this->OKSec);
	this->Controls->Add(this->StartNum);
	this->Controls->Add(this->EndNum);
	this->Controls->Add(this->startlab);
	this->Controls->Add(this->endlab);
	this->ForeColor = System::Drawing::Color::Fuchsia;
	this->AcceptButton = this->OKSec;
	this->Name = L"SetSec";
	this->Text = L"设置随机区域";
	//this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
	this->Show();
	this->ResumeLayout(false);
	this->PerformLayout();
	

}
int SetSec::GetStartNum()
{
	return this->_startNum;
}
int SetSec::GetEndNum()
{
	return this->_endNum;
}
void SetSec::OnClick(System::Object ^sender, System::EventArgs ^e)
{
	//throw gcnew System::NotImplementedException();
	this->_startNum = Convert::ToInt32(StartNum->Text);
	this->_endNum = Convert::ToInt32(EndNum->Text);
	this->Close();
}
