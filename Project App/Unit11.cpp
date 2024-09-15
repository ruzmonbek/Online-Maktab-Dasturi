//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit11.h"
#include "Unit12.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TFrame11 *Frame11;
//---------------------------------------------------------------------------
__fastcall TFrame11::TFrame11(TComponent* Owner)
	: TFrame(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrame11::Rectangle2MouseMove(TObject *Sender, TShiftState Shift,
          float X, float Y)
{
   Rectangle7->Stroke->Thickness=0;
   Rectangle12->Stroke->Thickness=0;
   Rectangle17->Stroke->Thickness=0;
   Rectangle22->Stroke->Thickness=0;
   Rectangle27->Stroke->Thickness=0;
   Rectangle32->Stroke->Thickness=0;
   Rectangle37->Stroke->Thickness=0;
   Rectangle42->Stroke->Thickness=0;
   Rectangle47->Stroke->Thickness=0;
   Rectangle52->Stroke->Thickness=0;
   Rectangle57->Stroke->Thickness=0;
   Rectangle62->Stroke->Thickness=0;
   Rectangle67->Stroke->Thickness=0;
   Rectangle72->Stroke->Thickness=0;
   Rectangle77->Stroke->Thickness=0;

   Rectangle2->Stroke->Thickness=1;
}
//---------------------------------------------------------------------------

void __fastcall TFrame11::Rectangle7MouseMove(TObject *Sender, TShiftState Shift,
          float X, float Y)
{
     Rectangle2->Stroke->Thickness=0;
   Rectangle12->Stroke->Thickness=0;
   Rectangle17->Stroke->Thickness=0;
   Rectangle22->Stroke->Thickness=0;
   Rectangle27->Stroke->Thickness=0;
   Rectangle32->Stroke->Thickness=0;
   Rectangle37->Stroke->Thickness=0;
   Rectangle42->Stroke->Thickness=0;
   Rectangle47->Stroke->Thickness=0;
   Rectangle52->Stroke->Thickness=0;
   Rectangle57->Stroke->Thickness=0;
   Rectangle62->Stroke->Thickness=0;
   Rectangle67->Stroke->Thickness=0;
   Rectangle72->Stroke->Thickness=0;
   Rectangle77->Stroke->Thickness=0;

   Rectangle7->Stroke->Thickness=1;
}
//---------------------------------------------------------------------------

void __fastcall TFrame11::Rectangle12MouseMove(TObject *Sender, TShiftState Shift,
          float X, float Y)
{
      Rectangle7->Stroke->Thickness=0;
   Rectangle2->Stroke->Thickness=0;
   Rectangle17->Stroke->Thickness=0;
   Rectangle22->Stroke->Thickness=0;
   Rectangle27->Stroke->Thickness=0;
   Rectangle32->Stroke->Thickness=0;
   Rectangle37->Stroke->Thickness=0;
   Rectangle42->Stroke->Thickness=0;
   Rectangle47->Stroke->Thickness=0;
   Rectangle52->Stroke->Thickness=0;
   Rectangle57->Stroke->Thickness=0;
   Rectangle62->Stroke->Thickness=0;
   Rectangle67->Stroke->Thickness=0;
   Rectangle72->Stroke->Thickness=0;
   Rectangle77->Stroke->Thickness=0;

   Rectangle12->Stroke->Thickness=1;
}
//---------------------------------------------------------------------------

void __fastcall TFrame11::Rectangle17MouseMove(TObject *Sender, TShiftState Shift,
          float X, float Y)
{
    Rectangle7->Stroke->Thickness=0;
   Rectangle12->Stroke->Thickness=0;
   Rectangle2->Stroke->Thickness=0;
   Rectangle22->Stroke->Thickness=0;
   Rectangle27->Stroke->Thickness=0;
   Rectangle32->Stroke->Thickness=0;
   Rectangle37->Stroke->Thickness=0;
   Rectangle42->Stroke->Thickness=0;
   Rectangle47->Stroke->Thickness=0;
   Rectangle52->Stroke->Thickness=0;
   Rectangle57->Stroke->Thickness=0;
   Rectangle62->Stroke->Thickness=0;
   Rectangle67->Stroke->Thickness=0;
   Rectangle72->Stroke->Thickness=0;
   Rectangle77->Stroke->Thickness=0;

   Rectangle17->Stroke->Thickness=1;
}
//---------------------------------------------------------------------------

void __fastcall TFrame11::Rectangle22MouseMove(TObject *Sender, TShiftState Shift,
          float X, float Y)
{
    Rectangle7->Stroke->Thickness=0;
   Rectangle12->Stroke->Thickness=0;
   Rectangle17->Stroke->Thickness=0;
   Rectangle2->Stroke->Thickness=0;
   Rectangle27->Stroke->Thickness=0;
   Rectangle32->Stroke->Thickness=0;
   Rectangle37->Stroke->Thickness=0;
   Rectangle42->Stroke->Thickness=0;
   Rectangle47->Stroke->Thickness=0;
   Rectangle52->Stroke->Thickness=0;
   Rectangle57->Stroke->Thickness=0;
   Rectangle62->Stroke->Thickness=0;
   Rectangle67->Stroke->Thickness=0;
   Rectangle72->Stroke->Thickness=0;
   Rectangle77->Stroke->Thickness=0;

   Rectangle22->Stroke->Thickness=1;
}
//---------------------------------------------------------------------------

void __fastcall TFrame11::Rectangle27MouseMove(TObject *Sender, TShiftState Shift,
          float X, float Y)
{
   Rectangle7->Stroke->Thickness=0;
   Rectangle12->Stroke->Thickness=0;
   Rectangle17->Stroke->Thickness=0;
   Rectangle22->Stroke->Thickness=0;
   Rectangle2->Stroke->Thickness=0;
   Rectangle32->Stroke->Thickness=0;
   Rectangle37->Stroke->Thickness=0;
   Rectangle42->Stroke->Thickness=0;
   Rectangle47->Stroke->Thickness=0;
   Rectangle52->Stroke->Thickness=0;
   Rectangle57->Stroke->Thickness=0;
   Rectangle62->Stroke->Thickness=0;
   Rectangle67->Stroke->Thickness=0;
   Rectangle72->Stroke->Thickness=0;
   Rectangle77->Stroke->Thickness=0;

   Rectangle27->Stroke->Thickness=1;
}
//---------------------------------------------------------------------------

void __fastcall TFrame11::Rectangle32MouseMove(TObject *Sender, TShiftState Shift,
          float X, float Y)
{
   Rectangle7->Stroke->Thickness=0;
   Rectangle12->Stroke->Thickness=0;
   Rectangle17->Stroke->Thickness=0;
   Rectangle22->Stroke->Thickness=0;
   Rectangle27->Stroke->Thickness=0;
   Rectangle2->Stroke->Thickness=0;
   Rectangle37->Stroke->Thickness=0;
   Rectangle42->Stroke->Thickness=0;
   Rectangle47->Stroke->Thickness=0;
   Rectangle52->Stroke->Thickness=0;
   Rectangle57->Stroke->Thickness=0;
   Rectangle62->Stroke->Thickness=0;
   Rectangle67->Stroke->Thickness=0;
   Rectangle72->Stroke->Thickness=0;
   Rectangle77->Stroke->Thickness=0;

   Rectangle32->Stroke->Thickness=1;
}
//---------------------------------------------------------------------------

void __fastcall TFrame11::Rectangle37MouseMove(TObject *Sender, TShiftState Shift,
          float X, float Y)
{
  Rectangle7->Stroke->Thickness=0;
   Rectangle12->Stroke->Thickness=0;
   Rectangle17->Stroke->Thickness=0;
   Rectangle22->Stroke->Thickness=0;
   Rectangle27->Stroke->Thickness=0;
   Rectangle32->Stroke->Thickness=0;
   Rectangle2->Stroke->Thickness=0;
   Rectangle42->Stroke->Thickness=0;
   Rectangle47->Stroke->Thickness=0;
   Rectangle52->Stroke->Thickness=0;
   Rectangle57->Stroke->Thickness=0;
   Rectangle62->Stroke->Thickness=0;
   Rectangle67->Stroke->Thickness=0;
   Rectangle72->Stroke->Thickness=0;
   Rectangle77->Stroke->Thickness=0;

   Rectangle37->Stroke->Thickness=1;
}
//---------------------------------------------------------------------------

void __fastcall TFrame11::Rectangle42MouseMove(TObject *Sender, TShiftState Shift,
          float X, float Y)
{
  Rectangle7->Stroke->Thickness=0;
   Rectangle12->Stroke->Thickness=0;
   Rectangle17->Stroke->Thickness=0;
   Rectangle22->Stroke->Thickness=0;
   Rectangle27->Stroke->Thickness=0;
   Rectangle32->Stroke->Thickness=0;
   Rectangle37->Stroke->Thickness=0;
   Rectangle2->Stroke->Thickness=0;
   Rectangle47->Stroke->Thickness=0;
   Rectangle52->Stroke->Thickness=0;
   Rectangle57->Stroke->Thickness=0;
   Rectangle62->Stroke->Thickness=0;
   Rectangle67->Stroke->Thickness=0;
   Rectangle72->Stroke->Thickness=0;
   Rectangle77->Stroke->Thickness=0;

   Rectangle42->Stroke->Thickness=1;
}
//---------------------------------------------------------------------------

void __fastcall TFrame11::Rectangle47MouseMove(TObject *Sender, TShiftState Shift,
          float X, float Y)
{
   Rectangle7->Stroke->Thickness=0;
   Rectangle12->Stroke->Thickness=0;
   Rectangle17->Stroke->Thickness=0;
   Rectangle22->Stroke->Thickness=0;
   Rectangle27->Stroke->Thickness=0;
   Rectangle32->Stroke->Thickness=0;
   Rectangle37->Stroke->Thickness=0;
   Rectangle42->Stroke->Thickness=0;
   Rectangle2->Stroke->Thickness=0;
   Rectangle52->Stroke->Thickness=0;
   Rectangle57->Stroke->Thickness=0;
   Rectangle62->Stroke->Thickness=0;
   Rectangle67->Stroke->Thickness=0;
   Rectangle72->Stroke->Thickness=0;
   Rectangle77->Stroke->Thickness=0;

   Rectangle47->Stroke->Thickness=1;
}
//---------------------------------------------------------------------------

void __fastcall TFrame11::Rectangle52MouseMove(TObject *Sender, TShiftState Shift,
          float X, float Y)
{
   Rectangle7->Stroke->Thickness=0;
   Rectangle12->Stroke->Thickness=0;
   Rectangle17->Stroke->Thickness=0;
   Rectangle22->Stroke->Thickness=0;
   Rectangle27->Stroke->Thickness=0;
   Rectangle32->Stroke->Thickness=0;
   Rectangle37->Stroke->Thickness=0;
   Rectangle42->Stroke->Thickness=0;
   Rectangle47->Stroke->Thickness=0;
   Rectangle2->Stroke->Thickness=0;
   Rectangle57->Stroke->Thickness=0;
   Rectangle62->Stroke->Thickness=0;
   Rectangle67->Stroke->Thickness=0;
   Rectangle72->Stroke->Thickness=0;
   Rectangle77->Stroke->Thickness=0;

   Rectangle52->Stroke->Thickness=1;
}
//---------------------------------------------------------------------------

void __fastcall TFrame11::Rectangle57MouseMove(TObject *Sender, TShiftState Shift,
          float X, float Y)
{
    Rectangle7->Stroke->Thickness=0;
   Rectangle12->Stroke->Thickness=0;
   Rectangle17->Stroke->Thickness=0;
   Rectangle22->Stroke->Thickness=0;
   Rectangle27->Stroke->Thickness=0;
   Rectangle32->Stroke->Thickness=0;
   Rectangle37->Stroke->Thickness=0;
   Rectangle42->Stroke->Thickness=0;
   Rectangle47->Stroke->Thickness=0;
   Rectangle52->Stroke->Thickness=0;
   Rectangle2->Stroke->Thickness=0;
   Rectangle62->Stroke->Thickness=0;
   Rectangle67->Stroke->Thickness=0;
   Rectangle72->Stroke->Thickness=0;
   Rectangle77->Stroke->Thickness=0;

   Rectangle57->Stroke->Thickness=1;
}
//---------------------------------------------------------------------------

void __fastcall TFrame11::Rectangle62MouseMove(TObject *Sender, TShiftState Shift,
          float X, float Y)
{
   Rectangle7->Stroke->Thickness=0;
   Rectangle12->Stroke->Thickness=0;
   Rectangle17->Stroke->Thickness=0;
   Rectangle22->Stroke->Thickness=0;
   Rectangle27->Stroke->Thickness=0;
   Rectangle32->Stroke->Thickness=0;
   Rectangle37->Stroke->Thickness=0;
   Rectangle42->Stroke->Thickness=0;
   Rectangle47->Stroke->Thickness=0;
   Rectangle52->Stroke->Thickness=0;
   Rectangle57->Stroke->Thickness=0;
   Rectangle2->Stroke->Thickness=0;
   Rectangle67->Stroke->Thickness=0;
   Rectangle72->Stroke->Thickness=0;
   Rectangle77->Stroke->Thickness=0;

   Rectangle62->Stroke->Thickness=1;
}
//---------------------------------------------------------------------------

void __fastcall TFrame11::Rectangle67MouseMove(TObject *Sender, TShiftState Shift,
          float X, float Y)
{
    Rectangle7->Stroke->Thickness=0;
   Rectangle12->Stroke->Thickness=0;
   Rectangle17->Stroke->Thickness=0;
   Rectangle22->Stroke->Thickness=0;
   Rectangle27->Stroke->Thickness=0;
   Rectangle32->Stroke->Thickness=0;
   Rectangle37->Stroke->Thickness=0;
   Rectangle42->Stroke->Thickness=0;
   Rectangle47->Stroke->Thickness=0;
   Rectangle52->Stroke->Thickness=0;
   Rectangle57->Stroke->Thickness=0;
   Rectangle62->Stroke->Thickness=0;
   Rectangle2->Stroke->Thickness=0;
   Rectangle72->Stroke->Thickness=0;
   Rectangle77->Stroke->Thickness=0;

   Rectangle67->Stroke->Thickness=1;
}
//---------------------------------------------------------------------------

void __fastcall TFrame11::Rectangle72MouseMove(TObject *Sender, TShiftState Shift,
          float X, float Y)
{
    Rectangle7->Stroke->Thickness=0;
   Rectangle12->Stroke->Thickness=0;
   Rectangle17->Stroke->Thickness=0;
   Rectangle22->Stroke->Thickness=0;
   Rectangle27->Stroke->Thickness=0;
   Rectangle32->Stroke->Thickness=0;
   Rectangle37->Stroke->Thickness=0;
   Rectangle42->Stroke->Thickness=0;
   Rectangle47->Stroke->Thickness=0;
   Rectangle52->Stroke->Thickness=0;
   Rectangle57->Stroke->Thickness=0;
   Rectangle62->Stroke->Thickness=0;
   Rectangle67->Stroke->Thickness=0;
   Rectangle2->Stroke->Thickness=0;
   Rectangle77->Stroke->Thickness=0;

   Rectangle72->Stroke->Thickness=1;
}
//---------------------------------------------------------------------------

void __fastcall TFrame11::Rectangle77MouseMove(TObject *Sender, TShiftState Shift,
          float X, float Y)
{
   Rectangle7->Stroke->Thickness=0;
   Rectangle12->Stroke->Thickness=0;
   Rectangle17->Stroke->Thickness=0;
   Rectangle22->Stroke->Thickness=0;
   Rectangle27->Stroke->Thickness=0;
   Rectangle32->Stroke->Thickness=0;
   Rectangle37->Stroke->Thickness=0;
   Rectangle42->Stroke->Thickness=0;
   Rectangle47->Stroke->Thickness=0;
   Rectangle52->Stroke->Thickness=0;
   Rectangle57->Stroke->Thickness=0;
   Rectangle62->Stroke->Thickness=0;
   Rectangle67->Stroke->Thickness=0;
   Rectangle72->Stroke->Thickness=0;
   Rectangle2->Stroke->Thickness=0;

   Rectangle77->Stroke->Thickness=1;
}
//---------------------------------------------------------------------------


void __fastcall TFrame11::ListBox1MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
	Rectangle7->Stroke->Thickness=0;
   Rectangle12->Stroke->Thickness=0;
   Rectangle17->Stroke->Thickness=0;
   Rectangle22->Stroke->Thickness=0;
   Rectangle27->Stroke->Thickness=0;
   Rectangle32->Stroke->Thickness=0;
   Rectangle2->Stroke->Thickness=0;
   Rectangle42->Stroke->Thickness=0;
   Rectangle47->Stroke->Thickness=0;
   Rectangle52->Stroke->Thickness=0;
   Rectangle57->Stroke->Thickness=0;
   Rectangle62->Stroke->Thickness=0;
   Rectangle67->Stroke->Thickness=0;
   Rectangle72->Stroke->Thickness=0;
   Rectangle77->Stroke->Thickness=0;

   Rectangle37->Stroke->Thickness=0;
}
//---------------------------------------------------------------------------


