//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.Objects.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TPanel *Panel4;
	TPanel *Panel5;
	TRectangle *Rectangle1;
	TRectangle *Rectangle2;
	TListBox *ListBox1;
	TListBoxItem *ListBoxItem1;
	TListBoxItem *ListBoxItem2;
	TListBoxItem *ListBoxItem3;
	TListBoxItem *ListBoxItem4;
	TRectangle *Rectangle3;
	TRectangle *Rectangle4;
	TRectangle *Rectangle5;
	TRectangle *Rectangle6;
	TText *Text1;
	TText *Text2;
	TText *Text3;
	TText *Text4;
	TRectangle *Rectangle7;
	TText *Text5;
	TRectangle *Rectangle8;
	TRectangle *Rectangle9;
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TImage *Image5;
	TRectangle *Rectangle10;
	TRectangle *Rectangle11;
	TRectangle *Rectangle12;
	TRectangle *Rectangle13;
	TRectangle *Rectangle14;
	TRectangle *Rectangle15;
	TRectangle *Rectangle16;
	TRectangle *Rectangle17;
	TRectangle *Rectangle18;
	TRectangle *Rectangle19;
	void __fastcall Text1MouseMove(TObject *Sender, TShiftState Shift, float X, float Y);
	void __fastcall Text2MouseMove(TObject *Sender, TShiftState Shift, float X, float Y);
	void __fastcall Text3MouseMove(TObject *Sender, TShiftState Shift, float X, float Y);
	void __fastcall Text4MouseMove(TObject *Sender, TShiftState Shift, float X, float Y);
	void __fastcall Text5MouseMove(TObject *Sender, TShiftState Shift, float X, float Y);





private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
