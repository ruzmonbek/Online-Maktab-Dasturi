//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)

TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Text1Click(TObject *Sender)
{
//	Rectangle8->Stroke->Color= #FF0063FF;
//	Rectangle8->Stroke->Color = 0xFF0063FF;
//    Rectangle8->Stroke->Color = clBlue;

  if ((Edit1->Text == "o'quvchi" || Edit1->Text == "O'quvchi") && Edit2->Text == "1234")
{
	Form1->Show();
}
  if ((Edit1->Text == "O'qituvchi" || Edit1->Text == "o'qituvchi") && Edit2->Text == "1234")
{
	Form2->Show();

}
  if ((Edit1->Text == "ota ona" || Edit1->Text == "Ota Ona") && Edit2->Text == "1234")
{
	Form3->Show();

}


   Edit1->Text = "";
   Edit2->Text = "";


}
//---------------------------------------------------------------------------

