#pragma once


namespace Rander {

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
	/// <summary>
	/// Form1 摘要
	///
	/// 警告: 如果更改此类的名称，则需要更改
	///          与此类所依赖的所有 .resx 文件关联的托管资源编译器工具的
	///          “资源文件名”属性。否则，
	///          设计器将不能与此窗体的关联
	///          本地化资源正确交互。
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  Numberannd;
	private: System::Windows::Forms::ToolStripMenuItem^  设置生成区间ToolStripMenuItem;
	private: System::Windows::Forms::Button^  Begin;



	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
	public:
		Graphics ^grap; 
		RanderData^Randing;
		int star;
		int  end;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Numberannd = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->设置生成区间ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Begin = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Numberannd });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(384, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"生成随机数字";
			// 
			// Numberannd
			// 
			this->Numberannd->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Numberannd->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->设置生成区间ToolStripMenuItem });
			this->Numberannd->Font = (gcnew System::Drawing::Font(L"方正舒体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Numberannd->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Numberannd->Name = L"Numberannd";
			this->Numberannd->Size = System::Drawing::Size(122, 21);
			this->Numberannd->Text = L"生成随机数字";
			// 
			// 设置生成区间ToolStripMenuItem
			// 
			this->设置生成区间ToolStripMenuItem->Name = L"设置生成区间ToolStripMenuItem";
			this->设置生成区间ToolStripMenuItem->Size = System::Drawing::Size(178, 22);
			this->设置生成区间ToolStripMenuItem->Text = L"设置生成区间";
			// 
			// Begin
			// 
			this->Begin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Begin->Font = (gcnew System::Drawing::Font(L"方正舒体", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Begin->ForeColor = System::Drawing::Color::White;
			this->Begin->Location = System::Drawing::Point(121, 320);
			this->Begin->Name = L"Begin";
			this->Begin->Size = System::Drawing::Size(113, 30);
			this->Begin->TabIndex = 1;
			this->Begin->Text = L"开始";
			this->Begin->UseVisualStyleBackColor = false;
			this->Begin->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::BlueViolet;
			this->ClientSize = System::Drawing::Size(384, 362);
			this->Controls->Add(this->Begin);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::Color::Fuchsia;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Rander V1.0.0";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	 this->Invalidate();
				
	}
	
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 star=0;
			 end=50;
			 grap= this->CreateGraphics();

			 GraphicsPath^UIPath = gcnew GraphicsPath();
			 GraphicsPath^RandPath = gcnew GraphicsPath();
			 Point StartPoint = Point(0, 0);
			 Point EndPoint = Point(this->Width, this->Height);
			 Rectangle rec = Rectangle(0,0,this->Width,this->Height-Begin->Height);
			 Rectangle Rrec = Rectangle(0+35, 0+25,300, 300);
			 Rectangle Frec = Rectangle(0 +100, 0 +100, 200, 200);
			 Randing = gcnew RanderData();
			 System::Drawing::Font^font = gcnew System::Drawing::Font("方正舒体", 120);
			 UIPath->AddRectangle(rec);
			 RandPath->AddEllipse(Rrec);
			 RandPath->AddEllipse(Rrec.X+40,Rrec.Y+40,Rrec.Width-80,Rrec.Height-80);
			 LinearGradientBrush^UIbrush = gcnew  LinearGradientBrush(rec, Color::DeepPink, Color::CadetBlue, 45);
			 LinearGradientBrush^Rbrush = gcnew  LinearGradientBrush(Rrec, Color::DarkCyan, Color::White, 45);
			 SolidBrush^Fbrush = gcnew SolidBrush(Color::White);
			 grap->FillPath(UIbrush, UIPath);
			 grap->FillPath(Rbrush, RandPath);
			 grap->DrawString(Randing->Randing(star, end).ToString(), font, Fbrush, Frec);
			
			
}
};
}

