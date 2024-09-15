//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)

TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Text1MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
	// Bosh sahifa buttoni ga sichqoncha borganda tayoqcha va ko'k ni yonishi

	Rectangle11->Visible=false;
	Rectangle12->Visible=false;
	Rectangle15->Visible=false;
	Rectangle16->Visible=false;
	Rectangle17->Visible=false;
	Rectangle18->Visible=false;
	Rectangle19->Visible=false;
	Rectangle20->Visible=false;
	Rectangle21->Visible=false;
	Rectangle22->Visible=false;

	Rectangle13->Visible=true;
	Rectangle14->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Text2MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
		// Dars jadvali buttoni ga sichqoncha borganda tayoqcha va ko'k ni yonishi

	Rectangle13->Visible=false;
	Rectangle14->Visible=false;
	Rectangle15->Visible=false;
	Rectangle16->Visible=false;
	Rectangle17->Visible=false;
	Rectangle18->Visible=false;
	Rectangle19->Visible=false;
	Rectangle20->Visible=false;
	Rectangle21->Visible=false;
	Rectangle22->Visible=false;

	Rectangle11->Visible=true;
	Rectangle12->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Text3MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
	// Jurnal buttoni ga sichqoncha borganda tayoqcha va ko'k ni yonishi

	Rectangle11->Visible=false;
	Rectangle12->Visible=false;
	Rectangle13->Visible=false;
	Rectangle14->Visible=false;
	Rectangle17->Visible=false;
	Rectangle18->Visible=false;
	Rectangle19->Visible=false;
	Rectangle20->Visible=false;
	Rectangle21->Visible=false;
	Rectangle22->Visible=false;

	Rectangle15->Visible=true;
	Rectangle16->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Text4MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
		// Resurslar buttoni ga sichqoncha borganda tayoqcha va ko'k ni yonishi

	Rectangle11->Visible=false;
	Rectangle12->Visible=false;
	Rectangle15->Visible=false;
	Rectangle16->Visible=false;
	Rectangle13->Visible=false;
	Rectangle14->Visible=false;
	Rectangle19->Visible=false;
	Rectangle20->Visible=false;
	Rectangle21->Visible=false;
	Rectangle22->Visible=false;

	Rectangle17->Visible=true;
	Rectangle18->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Text5MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
		// E'lonlar buttoni ga sichqoncha borganda tayoqcha va ko'k ni yonishi

	Rectangle11->Visible=false;
	Rectangle12->Visible=false;
	Rectangle15->Visible=false;
	Rectangle16->Visible=false;
	Rectangle17->Visible=false;
	Rectangle18->Visible=false;
	Rectangle13->Visible=false;
	Rectangle14->Visible=false;
	Rectangle21->Visible=false;
	Rectangle22->Visible=false;

	Rectangle19->Visible=true;
	Rectangle20->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Text6MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
		// Chiqish buttoni ga sichqoncha borganda tayoqcha va ko'k ni yonishi

	Rectangle11->Visible=false;
	Rectangle12->Visible=false;
	Rectangle15->Visible=false;
	Rectangle16->Visible=false;
	Rectangle17->Visible=false;
	Rectangle18->Visible=false;
	Rectangle19->Visible=false;
	Rectangle20->Visible=false;
	Rectangle13->Visible=false;
	Rectangle14->Visible=false;

	Rectangle21->Visible=true;
	Rectangle22->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Rectangle14Click(TObject *Sender)
{
	 Rectangle24->Visible=false;
	 Rectangle25->Visible=false;
	 Rectangle26->Visible=false;
	 Rectangle27->Visible=false;
	 Rectangle22->Stroke->Thickness=0;

	Rectangle23->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Rectangle12Click(TObject *Sender)
{
	 Rectangle23->Visible=false;
	 Rectangle25->Visible=false;
	 Rectangle26->Visible=false;
	 Rectangle27->Visible=false;
	 Rectangle22->Stroke->Thickness=0;

   Rectangle24->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Rectangle16Click(TObject *Sender)
{
     Rectangle24->Visible=false;
	 Rectangle23->Visible=false;
	 Rectangle26->Visible=false;
	 Rectangle27->Visible=false;
	 Rectangle22->Stroke->Thickness=0;

	Rectangle25->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Rectangle18Click(TObject *Sender)
{
     Rectangle24->Visible=false;
	 Rectangle25->Visible=false;
	 Rectangle23->Visible=false;
	 Rectangle27->Visible=false;
	 Rectangle22->Stroke->Thickness=0;

	Rectangle26->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Rectangle20Click(TObject *Sender)
{
      Rectangle24->Visible=false;
	 Rectangle25->Visible=false;
	 Rectangle26->Visible=false;
	 Rectangle23->Visible=false;
	 Rectangle22->Stroke->Thickness=0;

	Rectangle27->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Rectangle22Click(TObject *Sender)
{
    Rectangle24->Visible=false;
	 Rectangle25->Visible=false;
	 Rectangle26->Visible=false;
	 Rectangle27->Visible=false;
//	 Rectangle22->Stroke->Thickness=0;
	Rectangle23->Visible=false;

   Rectangle22->Stroke->Thickness=1;
}
//---------------------------------------------------------------------------

