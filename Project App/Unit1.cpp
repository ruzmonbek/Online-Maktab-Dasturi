//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"

// qo'shimcha framelar ulangan kutubxonalar

#include "Unit7.h"
#include "Unit8.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "Unit7"
#pragma link "Unit8"
#pragma link "Unit9"
#pragma link "Unit10"
#pragma link "Unit11"
#pragma link "Unit12"
#pragma resource "*.fmx"
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle24Click(TObject *Sender)
{
	Rectangle24->Stroke->Thickness=1;

	Form6->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Text1MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
	// Bosh Sahifa buttoni
		   // Tayoqcha va Ko'k ishlashi

   Rectangle9->Visible=false;
   Rectangle10->Visible=false;
   Rectangle12->Visible=false;
   Rectangle13->Visible=false;
   Rectangle15->Visible=false;
   Rectangle16->Visible=false;
   Rectangle20->Visible=false;
   Rectangle18->Visible=false;
   Rectangle21->Visible=false;
   Rectangle22->Visible=false;
   Rectangle23->Visible=false;
   Rectangle24->Visible=false;

   Rectangle6->Visible=true;
   Rectangle7->Visible=true;

   Frame111->Rectangle7->Stroke->Thickness=0;
   Frame111->Rectangle12->Stroke->Thickness=0;
   Frame111->Rectangle17->Stroke->Thickness=0;
   Frame111->Rectangle22->Stroke->Thickness=0;
   Frame111->Rectangle27->Stroke->Thickness=0;
   Frame111->Rectangle32->Stroke->Thickness=0;
   Frame111->Rectangle2->Stroke->Thickness=0;
   Frame111->Rectangle42->Stroke->Thickness=0;
   Frame111->Rectangle47->Stroke->Thickness=0;
   Frame111->Rectangle52->Stroke->Thickness=0;
   Frame111->Rectangle57->Stroke->Thickness=0;
   Frame111->Rectangle62->Stroke->Thickness=0;
   Frame111->Rectangle67->Stroke->Thickness=0;
   Frame111->Rectangle72->Stroke->Thickness=0;
   Frame111->Rectangle77->Stroke->Thickness=0;
   Frame111->Rectangle37->Stroke->Thickness=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Text7MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
	  // Online Maktab O'quvchi oynasidagi chiqish buttoni

   Rectangle9->Visible=false;
   Rectangle10->Visible=false;
   Rectangle12->Visible=false;
   Rectangle13->Visible=false;
   Rectangle15->Visible=false;
   Rectangle16->Visible=false;
   Rectangle20->Visible=false;
   Rectangle18->Visible=false;
   Rectangle21->Visible=false;
   Rectangle22->Visible=false;
   Rectangle6->Visible=false;
   Rectangle7->Visible=false;


   Rectangle23 -> Visible = true;
   Rectangle24->Visible= true;


   Frame111->Rectangle7->Stroke->Thickness=0;
   Frame111->Rectangle12->Stroke->Thickness=0;
   Frame111->Rectangle17->Stroke->Thickness=0;
   Frame111->Rectangle22->Stroke->Thickness=0;
   Frame111->Rectangle27->Stroke->Thickness=0;
   Frame111->Rectangle32->Stroke->Thickness=0;
   Frame111->Rectangle2->Stroke->Thickness=0;
   Frame111->Rectangle42->Stroke->Thickness=0;
   Frame111->Rectangle47->Stroke->Thickness=0;
   Frame111->Rectangle52->Stroke->Thickness=0;
   Frame111->Rectangle57->Stroke->Thickness=0;
   Frame111->Rectangle62->Stroke->Thickness=0;
   Frame111->Rectangle67->Stroke->Thickness=0;
   Frame111->Rectangle72->Stroke->Thickness=0;
   Frame111->Rectangle77->Stroke->Thickness=0;
   Frame111->Rectangle37->Stroke->Thickness=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle7Click(TObject *Sender)
{
   // Bosh sahifa buttoni bosilgana qo'shimha ko'k ishlash kodi

   Rectangle27->Visible=false;
   Rectangle28->Visible=false;
   Rectangle29->Visible=false;
   Rectangle30->Visible=false;
   Rectangle31->Visible=false;

   Rectangle26->Visible=true;

   Frame111->Rectangle7->Stroke->Thickness=0;
   Frame111->Rectangle12->Stroke->Thickness=0;
   Frame111->Rectangle17->Stroke->Thickness=0;
   Frame111->Rectangle22->Stroke->Thickness=0;
   Frame111->Rectangle27->Stroke->Thickness=0;
   Frame111->Rectangle32->Stroke->Thickness=0;
   Frame111->Rectangle2->Stroke->Thickness=0;
   Frame111->Rectangle42->Stroke->Thickness=0;
   Frame111->Rectangle47->Stroke->Thickness=0;
   Frame111->Rectangle52->Stroke->Thickness=0;
   Frame111->Rectangle57->Stroke->Thickness=0;
   Frame111->Rectangle62->Stroke->Thickness=0;
   Frame111->Rectangle67->Stroke->Thickness=0;
   Frame111->Rectangle72->Stroke->Thickness=0;
   Frame111->Rectangle77->Stroke->Thickness=0;
   Frame111->Rectangle37->Stroke->Thickness=0;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Text2MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
		// Dars Jadvali buttoni
		   // Tayoqcha va Ko'k ishlashi

   Rectangle6->Visible=false;
   Rectangle7->Visible=false;
   Rectangle12->Visible=false;
   Rectangle13->Visible=false;
   Rectangle15->Visible=false;
   Rectangle16->Visible=false;
   Rectangle20->Visible=false;
   Rectangle18->Visible=false;
   Rectangle21->Visible=false;
   Rectangle22->Visible=false;
   Rectangle23->Visible=false;
   Rectangle24->Visible=false;

   Rectangle9->Visible=true;
   Rectangle10->Visible=true;

   Frame111->Rectangle7->Stroke->Thickness=0;
   Frame111->Rectangle12->Stroke->Thickness=0;
   Frame111->Rectangle17->Stroke->Thickness=0;
   Frame111->Rectangle22->Stroke->Thickness=0;
   Frame111->Rectangle27->Stroke->Thickness=0;
   Frame111->Rectangle32->Stroke->Thickness=0;
   Frame111->Rectangle2->Stroke->Thickness=0;
   Frame111->Rectangle42->Stroke->Thickness=0;
   Frame111->Rectangle47->Stroke->Thickness=0;
   Frame111->Rectangle52->Stroke->Thickness=0;
   Frame111->Rectangle57->Stroke->Thickness=0;
   Frame111->Rectangle62->Stroke->Thickness=0;
   Frame111->Rectangle67->Stroke->Thickness=0;
   Frame111->Rectangle72->Stroke->Thickness=0;
   Frame111->Rectangle77->Stroke->Thickness=0;
   Frame111->Rectangle37->Stroke->Thickness=0;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Text3MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
	// Baholar buttoni
		   // Tayoqcha va Ko'k ishlashi

   Rectangle9->Visible=false;
   Rectangle10->Visible=false;
   Rectangle6->Visible=false;
   Rectangle7->Visible=false;
   Rectangle15->Visible=false;
   Rectangle16->Visible=false;
   Rectangle20->Visible=false;
   Rectangle18->Visible=false;
   Rectangle21->Visible=false;
   Rectangle22->Visible=false;
   Rectangle23->Visible=false;
   Rectangle24->Visible=false;

   Rectangle12->Visible=true;
   Rectangle13->Visible=true;

   Frame111->Rectangle7->Stroke->Thickness=0;
   Frame111->Rectangle12->Stroke->Thickness=0;
   Frame111->Rectangle17->Stroke->Thickness=0;
   Frame111->Rectangle22->Stroke->Thickness=0;
   Frame111->Rectangle27->Stroke->Thickness=0;
   Frame111->Rectangle32->Stroke->Thickness=0;
   Frame111->Rectangle2->Stroke->Thickness=0;
   Frame111->Rectangle42->Stroke->Thickness=0;
   Frame111->Rectangle47->Stroke->Thickness=0;
   Frame111->Rectangle52->Stroke->Thickness=0;
   Frame111->Rectangle57->Stroke->Thickness=0;
   Frame111->Rectangle62->Stroke->Thickness=0;
   Frame111->Rectangle67->Stroke->Thickness=0;
   Frame111->Rectangle72->Stroke->Thickness=0;
   Frame111->Rectangle77->Stroke->Thickness=0;
   Frame111->Rectangle37->Stroke->Thickness=0;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Text4MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
	// Resurslar buttoni
		   // Tayoqcha va Ko'k ishlashi

   Rectangle9->Visible=false;
   Rectangle10->Visible=false;
   Rectangle12->Visible=false;
   Rectangle13->Visible=false;
   Rectangle6->Visible=false;
   Rectangle7->Visible=false;
   Rectangle20->Visible=false;
   Rectangle18->Visible=false;
   Rectangle21->Visible=false;
   Rectangle22->Visible=false;
   Rectangle23->Visible=false;
   Rectangle24->Visible=false;

   Rectangle15->Visible=true;
   Rectangle16->Visible=true;

   Frame111->Rectangle7->Stroke->Thickness=0;
   Frame111->Rectangle12->Stroke->Thickness=0;
   Frame111->Rectangle17->Stroke->Thickness=0;
   Frame111->Rectangle22->Stroke->Thickness=0;
   Frame111->Rectangle27->Stroke->Thickness=0;
   Frame111->Rectangle32->Stroke->Thickness=0;
   Frame111->Rectangle2->Stroke->Thickness=0;
   Frame111->Rectangle42->Stroke->Thickness=0;
   Frame111->Rectangle47->Stroke->Thickness=0;
   Frame111->Rectangle52->Stroke->Thickness=0;
   Frame111->Rectangle57->Stroke->Thickness=0;
   Frame111->Rectangle62->Stroke->Thickness=0;
   Frame111->Rectangle67->Stroke->Thickness=0;
   Frame111->Rectangle72->Stroke->Thickness=0;
   Frame111->Rectangle77->Stroke->Thickness=0;
   Frame111->Rectangle37->Stroke->Thickness=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Text5MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
   // E'lonlar buttoni
		   // Tayoqcha va Ko'k ishlashi

   Rectangle9->Visible=false;
   Rectangle10->Visible=false;
   Rectangle12->Visible=false;
   Rectangle13->Visible=false;
   Rectangle15->Visible=false;
   Rectangle16->Visible=false;
   Rectangle7->Visible=false;
   Rectangle6->Visible=false;
   Rectangle21->Visible=false;
   Rectangle22->Visible=false;
   Rectangle23->Visible=false;
   Rectangle24->Visible=false;

   Rectangle18->Visible=true;
   Rectangle20->Visible=true;

   Frame111->Rectangle7->Stroke->Thickness=0;
   Frame111->Rectangle12->Stroke->Thickness=0;
   Frame111->Rectangle17->Stroke->Thickness=0;
   Frame111->Rectangle22->Stroke->Thickness=0;
   Frame111->Rectangle27->Stroke->Thickness=0;
   Frame111->Rectangle32->Stroke->Thickness=0;
   Frame111->Rectangle2->Stroke->Thickness=0;
   Frame111->Rectangle42->Stroke->Thickness=0;
   Frame111->Rectangle47->Stroke->Thickness=0;
   Frame111->Rectangle52->Stroke->Thickness=0;
   Frame111->Rectangle57->Stroke->Thickness=0;
   Frame111->Rectangle62->Stroke->Thickness=0;
   Frame111->Rectangle67->Stroke->Thickness=0;
   Frame111->Rectangle72->Stroke->Thickness=0;
   Frame111->Rectangle77->Stroke->Thickness=0;
   Frame111->Rectangle37->Stroke->Thickness=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Text6MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
   // O'qituvchilar buttoni
		   // Tayoqcha va Ko'k ishlashi

   Rectangle9->Visible=false;
   Rectangle10->Visible=false;
   Rectangle12->Visible=false;
   Rectangle13->Visible=false;
   Rectangle15->Visible=false;
   Rectangle16->Visible=false;
   Rectangle20->Visible=false;
   Rectangle18->Visible=false;
   Rectangle6->Visible=false;
   Rectangle7->Visible=false;
   Rectangle23->Visible=false;
   Rectangle24->Visible=false;

   Rectangle21->Visible=true;
   Rectangle22->Visible=true;

   Frame111->Rectangle7->Stroke->Thickness=0;
   Frame111->Rectangle12->Stroke->Thickness=0;
   Frame111->Rectangle17->Stroke->Thickness=0;
   Frame111->Rectangle22->Stroke->Thickness=0;
   Frame111->Rectangle27->Stroke->Thickness=0;
   Frame111->Rectangle32->Stroke->Thickness=0;
   Frame111->Rectangle2->Stroke->Thickness=0;
   Frame111->Rectangle42->Stroke->Thickness=0;
   Frame111->Rectangle47->Stroke->Thickness=0;
   Frame111->Rectangle52->Stroke->Thickness=0;
   Frame111->Rectangle57->Stroke->Thickness=0;
   Frame111->Rectangle62->Stroke->Thickness=0;
   Frame111->Rectangle67->Stroke->Thickness=0;
   Frame111->Rectangle72->Stroke->Thickness=0;
   Frame111->Rectangle77->Stroke->Thickness=0;
   Frame111->Rectangle37->Stroke->Thickness=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ListBox1MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
	// mouse move false

	Rectangle9->Visible=false;
   Rectangle10->Visible=false;
   Rectangle12->Visible=false;
   Rectangle13->Visible=false;
   Rectangle15->Visible=false;
   Rectangle16->Visible=false;
   Rectangle20->Visible=false;
   Rectangle18->Visible=false;
   Rectangle6->Visible=false;
   Rectangle7->Visible=false;
   Rectangle23->Visible=false;
   Rectangle24->Visible=false;
   Rectangle21->Visible=false;
   Rectangle22->Visible=false;

   Frame111->Rectangle7->Stroke->Thickness=0;
   Frame111->Rectangle12->Stroke->Thickness=0;
   Frame111->Rectangle17->Stroke->Thickness=0;
   Frame111->Rectangle22->Stroke->Thickness=0;
   Frame111->Rectangle27->Stroke->Thickness=0;
   Frame111->Rectangle32->Stroke->Thickness=0;
   Frame111->Rectangle2->Stroke->Thickness=0;
   Frame111->Rectangle42->Stroke->Thickness=0;
   Frame111->Rectangle47->Stroke->Thickness=0;
   Frame111->Rectangle52->Stroke->Thickness=0;
   Frame111->Rectangle57->Stroke->Thickness=0;
   Frame111->Rectangle62->Stroke->Thickness=0;
   Frame111->Rectangle67->Stroke->Thickness=0;
   Frame111->Rectangle72->Stroke->Thickness=0;
   Frame111->Rectangle77->Stroke->Thickness=0;
   Frame111->Rectangle37->Stroke->Thickness=0;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle4MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
   	Rectangle9->Visible=false;
   Rectangle10->Visible=false;
   Rectangle12->Visible=false;
   Rectangle13->Visible=false;
   Rectangle15->Visible=false;
   Rectangle16->Visible=false;
   Rectangle20->Visible=false;
   Rectangle18->Visible=false;
   Rectangle6->Visible=false;
   Rectangle7->Visible=false;
   Rectangle23->Visible=false;
   Rectangle24->Visible=false;
   Rectangle21->Visible=false;
   Rectangle22->Visible=false;

   Frame111->Rectangle7->Stroke->Thickness=0;
   Frame111->Rectangle12->Stroke->Thickness=0;
   Frame111->Rectangle17->Stroke->Thickness=0;
   Frame111->Rectangle22->Stroke->Thickness=0;
   Frame111->Rectangle27->Stroke->Thickness=0;
   Frame111->Rectangle32->Stroke->Thickness=0;
   Frame111->Rectangle2->Stroke->Thickness=0;
   Frame111->Rectangle42->Stroke->Thickness=0;
   Frame111->Rectangle47->Stroke->Thickness=0;
   Frame111->Rectangle52->Stroke->Thickness=0;
   Frame111->Rectangle57->Stroke->Thickness=0;
   Frame111->Rectangle62->Stroke->Thickness=0;
   Frame111->Rectangle67->Stroke->Thickness=0;
   Frame111->Rectangle72->Stroke->Thickness=0;
   Frame111->Rectangle77->Stroke->Thickness=0;
   Frame111->Rectangle37->Stroke->Thickness=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Panel3MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
    	Rectangle9->Visible=false;
   Rectangle10->Visible=false;
   Rectangle12->Visible=false;
   Rectangle13->Visible=false;
   Rectangle15->Visible=false;
   Rectangle16->Visible=false;
   Rectangle20->Visible=false;
   Rectangle18->Visible=false;
   Rectangle6->Visible=false;
   Rectangle7->Visible=false;
   Rectangle23->Visible=false;
   Rectangle24->Visible=false;
   Rectangle21->Visible=false;
   Rectangle22->Visible=false;

   Frame111->Rectangle7->Stroke->Thickness=0;
   Frame111->Rectangle12->Stroke->Thickness=0;
   Frame111->Rectangle17->Stroke->Thickness=0;
   Frame111->Rectangle22->Stroke->Thickness=0;
   Frame111->Rectangle27->Stroke->Thickness=0;
   Frame111->Rectangle32->Stroke->Thickness=0;
   Frame111->Rectangle2->Stroke->Thickness=0;
   Frame111->Rectangle42->Stroke->Thickness=0;
   Frame111->Rectangle47->Stroke->Thickness=0;
   Frame111->Rectangle52->Stroke->Thickness=0;
   Frame111->Rectangle57->Stroke->Thickness=0;
   Frame111->Rectangle62->Stroke->Thickness=0;
   Frame111->Rectangle67->Stroke->Thickness=0;
   Frame111->Rectangle72->Stroke->Thickness=0;
   Frame111->Rectangle77->Stroke->Thickness=0;
   Frame111->Rectangle37->Stroke->Thickness=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle3MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
	Rectangle9->Visible=false;
   Rectangle10->Visible=false;
   Rectangle12->Visible=false;
   Rectangle13->Visible=false;
   Rectangle15->Visible=false;
   Rectangle16->Visible=false;
   Rectangle20->Visible=false;
   Rectangle18->Visible=false;
   Rectangle6->Visible=false;
   Rectangle7->Visible=false;
   Rectangle23->Visible=false;
   Rectangle24->Visible=false;
   Rectangle21->Visible=false;
   Rectangle22->Visible=false;

   Frame111->Rectangle7->Stroke->Thickness=0;
   Frame111->Rectangle12->Stroke->Thickness=0;
   Frame111->Rectangle17->Stroke->Thickness=0;
   Frame111->Rectangle22->Stroke->Thickness=0;
   Frame111->Rectangle27->Stroke->Thickness=0;
   Frame111->Rectangle32->Stroke->Thickness=0;
   Frame111->Rectangle2->Stroke->Thickness=0;
   Frame111->Rectangle42->Stroke->Thickness=0;
   Frame111->Rectangle47->Stroke->Thickness=0;
   Frame111->Rectangle52->Stroke->Thickness=0;
   Frame111->Rectangle57->Stroke->Thickness=0;
   Frame111->Rectangle62->Stroke->Thickness=0;
   Frame111->Rectangle67->Stroke->Thickness=0;
   Frame111->Rectangle72->Stroke->Thickness=0;
   Frame111->Rectangle77->Stroke->Thickness=0;
   Frame111->Rectangle37->Stroke->Thickness=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle25MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
		Rectangle9->Visible=false;
   Rectangle10->Visible=false;
   Rectangle12->Visible=false;
   Rectangle13->Visible=false;
   Rectangle15->Visible=false;
   Rectangle16->Visible=false;
   Rectangle20->Visible=false;
   Rectangle18->Visible=false;
   Rectangle6->Visible=false;
   Rectangle7->Visible=false;
   Rectangle23->Visible=false;
   Rectangle24->Visible=false;
   Rectangle21->Visible=false;
   Rectangle22->Visible=false;

   Frame111->Rectangle7->Stroke->Thickness=0;
   Frame111->Rectangle12->Stroke->Thickness=0;
   Frame111->Rectangle17->Stroke->Thickness=0;
   Frame111->Rectangle22->Stroke->Thickness=0;
   Frame111->Rectangle27->Stroke->Thickness=0;
   Frame111->Rectangle32->Stroke->Thickness=0;
   Frame111->Rectangle2->Stroke->Thickness=0;
   Frame111->Rectangle42->Stroke->Thickness=0;
   Frame111->Rectangle47->Stroke->Thickness=0;
   Frame111->Rectangle52->Stroke->Thickness=0;
   Frame111->Rectangle57->Stroke->Thickness=0;
   Frame111->Rectangle62->Stroke->Thickness=0;
   Frame111->Rectangle67->Stroke->Thickness=0;
   Frame111->Rectangle72->Stroke->Thickness=0;
   Frame111->Rectangle77->Stroke->Thickness=0;
   Frame111->Rectangle37->Stroke->Thickness=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle10Click(TObject *Sender)
{
  Rectangle26->Visible=false;
   Rectangle28->Visible=false;
   Rectangle29->Visible=false;
   Rectangle30->Visible=false;
   Rectangle31->Visible=false;


   Rectangle27->Visible=true;
   Frame71->Visible=true;

   Frame111->Rectangle7->Stroke->Thickness=0;
   Frame111->Rectangle12->Stroke->Thickness=0;
   Frame111->Rectangle17->Stroke->Thickness=0;
   Frame111->Rectangle22->Stroke->Thickness=0;
   Frame111->Rectangle27->Stroke->Thickness=0;
   Frame111->Rectangle32->Stroke->Thickness=0;
   Frame111->Rectangle2->Stroke->Thickness=0;
   Frame111->Rectangle42->Stroke->Thickness=0;
   Frame111->Rectangle47->Stroke->Thickness=0;
   Frame111->Rectangle52->Stroke->Thickness=0;
   Frame111->Rectangle57->Stroke->Thickness=0;
   Frame111->Rectangle62->Stroke->Thickness=0;
   Frame111->Rectangle67->Stroke->Thickness=0;
   Frame111->Rectangle72->Stroke->Thickness=0;
   Frame111->Rectangle77->Stroke->Thickness=0;
   Frame111->Rectangle37->Stroke->Thickness=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle13Click(TObject *Sender)
{
   Rectangle27->Visible=false;
   Rectangle26->Visible=false;
   Rectangle29->Visible=false;
   Rectangle30->Visible=false;
   Rectangle31->Visible=false;

   Rectangle28->Visible=true;
   Frame81->Visible=true;

   Frame111->Rectangle7->Stroke->Thickness=0;
   Frame111->Rectangle12->Stroke->Thickness=0;
   Frame111->Rectangle17->Stroke->Thickness=0;
   Frame111->Rectangle22->Stroke->Thickness=0;
   Frame111->Rectangle27->Stroke->Thickness=0;
   Frame111->Rectangle32->Stroke->Thickness=0;
   Frame111->Rectangle2->Stroke->Thickness=0;
   Frame111->Rectangle42->Stroke->Thickness=0;
   Frame111->Rectangle47->Stroke->Thickness=0;
   Frame111->Rectangle52->Stroke->Thickness=0;
   Frame111->Rectangle57->Stroke->Thickness=0;
   Frame111->Rectangle62->Stroke->Thickness=0;
   Frame111->Rectangle67->Stroke->Thickness=0;
   Frame111->Rectangle72->Stroke->Thickness=0;
   Frame111->Rectangle77->Stroke->Thickness=0;
   Frame111->Rectangle37->Stroke->Thickness=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle16Click(TObject *Sender)
{
    Rectangle27->Visible=false;
   Rectangle28->Visible=false;
   Rectangle26->Visible=false;
   Rectangle30->Visible=false;
   Rectangle31->Visible=false;

	Rectangle29->Visible=true;
	Frame91->Visible=true;

    Frame111->Rectangle7->Stroke->Thickness=0;
   Frame111->Rectangle12->Stroke->Thickness=0;
   Frame111->Rectangle17->Stroke->Thickness=0;
   Frame111->Rectangle22->Stroke->Thickness=0;
   Frame111->Rectangle27->Stroke->Thickness=0;
   Frame111->Rectangle32->Stroke->Thickness=0;
   Frame111->Rectangle2->Stroke->Thickness=0;
   Frame111->Rectangle42->Stroke->Thickness=0;
   Frame111->Rectangle47->Stroke->Thickness=0;
   Frame111->Rectangle52->Stroke->Thickness=0;
   Frame111->Rectangle57->Stroke->Thickness=0;
   Frame111->Rectangle62->Stroke->Thickness=0;
   Frame111->Rectangle67->Stroke->Thickness=0;
   Frame111->Rectangle72->Stroke->Thickness=0;
   Frame111->Rectangle77->Stroke->Thickness=0;
   Frame111->Rectangle37->Stroke->Thickness=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle18Click(TObject *Sender)
{
	Rectangle27->Visible=false;
   Rectangle28->Visible=false;
   Rectangle29->Visible=false;
   Rectangle26->Visible=false;
   Rectangle31->Visible=false;

	Rectangle30->Visible=true;
	Frame101->Visible=true;

    Frame111->Rectangle7->Stroke->Thickness=0;
   Frame111->Rectangle12->Stroke->Thickness=0;
   Frame111->Rectangle17->Stroke->Thickness=0;
   Frame111->Rectangle22->Stroke->Thickness=0;
   Frame111->Rectangle27->Stroke->Thickness=0;
   Frame111->Rectangle32->Stroke->Thickness=0;
   Frame111->Rectangle2->Stroke->Thickness=0;
   Frame111->Rectangle42->Stroke->Thickness=0;
   Frame111->Rectangle47->Stroke->Thickness=0;
   Frame111->Rectangle52->Stroke->Thickness=0;
   Frame111->Rectangle57->Stroke->Thickness=0;
   Frame111->Rectangle62->Stroke->Thickness=0;
   Frame111->Rectangle67->Stroke->Thickness=0;
   Frame111->Rectangle72->Stroke->Thickness=0;
   Frame111->Rectangle77->Stroke->Thickness=0;
   Frame111->Rectangle37->Stroke->Thickness=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle22Click(TObject *Sender)
{
	Rectangle27->Visible=false;
   Rectangle28->Visible=false;
   Rectangle29->Visible=false;
   Rectangle30->Visible=false;
   Rectangle26->Visible=false;

	Rectangle31->Visible=true;
	Frame111->Visible=true;

    Frame111->Rectangle7->Stroke->Thickness=0;
   Frame111->Rectangle12->Stroke->Thickness=0;
   Frame111->Rectangle17->Stroke->Thickness=0;
   Frame111->Rectangle22->Stroke->Thickness=0;
   Frame111->Rectangle27->Stroke->Thickness=0;
   Frame111->Rectangle32->Stroke->Thickness=0;
   Frame111->Rectangle2->Stroke->Thickness=0;
   Frame111->Rectangle42->Stroke->Thickness=0;
   Frame111->Rectangle47->Stroke->Thickness=0;
   Frame111->Rectangle52->Stroke->Thickness=0;
   Frame111->Rectangle57->Stroke->Thickness=0;
   Frame111->Rectangle62->Stroke->Thickness=0;
   Frame111->Rectangle67->Stroke->Thickness=0;
   Frame111->Rectangle72->Stroke->Thickness=0;
   Frame111->Rectangle77->Stroke->Thickness=0;
   Frame111->Rectangle37->Stroke->Thickness=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Frame71Rectangle2Click(TObject *Sender)
{
    // Funksiyaning amalga oshirilishi
}


void __fastcall TForm1::Frame111Rectangle3Click(TObject *Sender)
{
//  Frame111->Rectangle3Click
							 Frame121->Visible=true;
							 Frame111->Visible=false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Frame121Text20Click(TObject *Sender)
{
//  Frame121->Text20Click

	  Frame111->Visible=true;
	   Frame121->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Frame121Rectangle3Click(TObject *Sender)
{
//  Frame121->Rectangle3Click

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Frame111Rectangle2Click(TObject *Sender)
{
   Frame121->Visible=true;
							 Frame111->Visible=false;
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Frame111Text1Click(TObject *Sender)
{
    Frame121->Visible=true;
							 Frame111->Visible=false;
}

//---------------------------------------------------------------------------

