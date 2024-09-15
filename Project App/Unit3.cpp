//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)

TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Text1MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
	// bosh sahifa
	Rectangle11->Visible=false;
	Rectangle16->Visible=false;
	Rectangle12->Visible=false;
	Rectangle17->Visible=false;
	Rectangle13->Visible=false;
	Rectangle18->Visible=false;
	Rectangle14->Visible=false;
	Rectangle19->Visible=false;

	Rectangle10->Visible=true;
	Rectangle15->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Text2MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
			// Baholar
	Rectangle10->Visible=false;
	Rectangle15->Visible=false;
	Rectangle12->Visible=false;
	Rectangle17->Visible=false;
	Rectangle13->Visible=false;
	Rectangle18->Visible=false;
	Rectangle14->Visible=false;
	Rectangle19->Visible=false;

	Rectangle11->Visible=true;
	Rectangle16->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Text3MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
		// E'lonlar
	Rectangle11->Visible=false;
	Rectangle16->Visible=false;
	Rectangle10->Visible=false;
	Rectangle15->Visible=false;
	Rectangle13->Visible=false;
	Rectangle18->Visible=false;
	Rectangle14->Visible=false;
	Rectangle19->Visible=false;

	Rectangle12->Visible=true;
	Rectangle17->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Text4MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
		// O'qituvchilar
	Rectangle11->Visible=false;
	Rectangle16->Visible=false;
	Rectangle12->Visible=false;
	Rectangle17->Visible=false;
	Rectangle10->Visible=false;
	Rectangle15->Visible=false;
	Rectangle14->Visible=false;
	Rectangle19->Visible=false;

	Rectangle13->Visible=true;
	Rectangle18->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Text5MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
		// Chiqish
	Rectangle11->Visible=false;
	Rectangle16->Visible=false;
	Rectangle12->Visible=false;
	Rectangle17->Visible=false;
	Rectangle13->Visible=false;
	Rectangle18->Visible=false;
	Rectangle10->Visible=false;
	Rectangle15->Visible=false;

	Rectangle14->Visible=true;
	Rectangle19->Visible=true;
}
//---------------------------------------------------------------------------

