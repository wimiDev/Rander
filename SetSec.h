
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
using namespace System::Drawing::Text;
using namespace System::Drawing::Imaging;
using namespace System::Drawing::Printing;

#pragma once
ref class SetSec :public  System::Windows::Forms::Form
{
public:
	SetSec();
public:
	void InitFrom();
	int GetStartNum();
	int GetEndNum();
private: System::Windows::Forms::Button^ OKSec;
private: System::Windows::Forms::TextBox^StartNum;
private: System::Windows::Forms::TextBox^EndNum;
private:System::Windows::Forms::Label^startlab;
private:System::Windows::Forms::Label^endlab;
		 int _startNum;
		 int _endNum;
		 void OnClick(System::Object ^sender, System::EventArgs ^e);
};

