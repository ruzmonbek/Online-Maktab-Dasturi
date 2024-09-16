//---------------------------------------------------------------------------

#ifndef Unit11H
#define Unit11H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TFrame11 : public TFrame
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TRectangle *Rectangle1;
	TListBox *ListBox1;
	TListBoxItem *ListBoxItem1;
	TListBoxItem *ListBoxItem2;
	TListBoxItem *ListBoxItem3;
	TListBoxItem *ListBoxItem4;
	TListBoxItem *ListBoxItem5;
	TListBoxItem *ListBoxItem6;
	TListBoxItem *ListBoxItem7;
	TListBoxItem *ListBoxItem8;
	TListBoxItem *ListBoxItem9;
	TListBoxItem *ListBoxItem10;
	TListBoxItem *ListBoxItem11;
	TListBoxItem *ListBoxItem12;
	TListBoxItem *ListBoxItem13;
	TListBoxItem *ListBoxItem14;
	TListBoxItem *ListBoxItem15;
	TListBoxItem *ListBoxItem16;
	TRectangle *Rectangle2;
	TRectangle *Rectangle3;
	TText *Text1;
	TText *Text2;
	TRectangle *Rectangle4;
	TLine *Line1;
	TRectangle *Rectangle5;
	TText *Text3;
	TRectangle *Rectangle6;
	TText *Text4;
	TRectangle *Rectangle7;
	TRectangle *Rectangle8;
	TText *Text5;
	TText *Text6;
	TRectangle *Rectangle9;
	TLine *Line2;
	TRectangle *Rectangle10;
	TText *Text7;
	TRectangle *Rectangle11;
	TText *Text8;
	TRectangle *Rectangle12;
	TRectangle *Rectangle13;
	TText *Text9;
	TText *Text10;
	TRectangle *Rectangle14;
	TLine *Line3;
	TRectangle *Rectangle15;
	TText *Text11;
	TRectangle *Rectangle16;
	TText *Text12;
	TRectangle *Rectangle17;
	TRectangle *Rectangle18;
	TText *Text13;
	TText *Text14;
	TRectangle *Rectangle19;
	TLine *Line4;
	TRectangle *Rectangle20;
	TText *Text15;
	TRectangle *Rectangle21;
	TText *Text16;
	TRectangle *Rectangle22;
	TRectangle *Rectangle23;
	TText *Text17;
	TText *Text18;
	TRectangle *Rectangle24;
	TLine *Line5;
	TRectangle *Rectangle25;
	TText *Text19;
	TRectangle *Rectangle26;
	TText *Text20;
	TRectangle *Rectangle27;
	TRectangle *Rectangle28;
	TText *Text21;
	TText *Text22;
	TRectangle *Rectangle29;
	TLine *Line6;
	TRectangle *Rectangle30;
	TText *Text23;
	TRectangle *Rectangle31;
	TText *Text24;
	TRectangle *Rectangle32;
	TRectangle *Rectangle33;
	TText *Text25;
	TText *Text26;
	TRectangle *Rectangle34;
	TLine *Line7;
	TRectangle *Rectangle35;
	TText *Text27;
	TRectangle *Rectangle36;
	TText *Text28;
	TRectangle *Rectangle37;
	TRectangle *Rectangle38;
	TText *Text29;
	TText *Text30;
	TRectangle *Rectangle39;
	TLine *Line8;
	TRectangle *Rectangle40;
	TText *Text31;
	TRectangle *Rectangle41;
	TText *Text32;
	TRectangle *Rectangle42;
	TRectangle *Rectangle43;
	TText *Text33;
	TText *Text34;
	TRectangle *Rectangle44;
	TLine *Line9;
	TRectangle *Rectangle45;
	TText *Text35;
	TRectangle *Rectangle46;
	TText *Text36;
	TRectangle *Rectangle47;
	TRectangle *Rectangle48;
	TText *Text37;
	TText *Text38;
	TRectangle *Rectangle49;
	TLine *Line10;
	TRectangle *Rectangle50;
	TText *Text39;
	TRectangle *Rectangle51;
	TText *Text40;
	TRectangle *Rectangle52;
	TRectangle *Rectangle53;
	TText *Text41;
	TText *Text42;
	TRectangle *Rectangle54;
	TLine *Line11;
	TRectangle *Rectangle55;
	TText *Text43;
	TRectangle *Rectangle56;
	TText *Text44;
	TRectangle *Rectangle57;
	TRectangle *Rectangle58;
	TText *Text45;
	TText *Text46;
	TRectangle *Rectangle59;
	TLine *Line12;
	TRectangle *Rectangle60;
	TText *Text47;
	TRectangle *Rectangle61;
	TText *Text48;
	TRectangle *Rectangle62;
	TRectangle *Rectangle63;
	TText *Text49;
	TText *Text50;
	TRectangle *Rectangle64;
	TLine *Line13;
	TRectangle *Rectangle65;
	TText *Text51;
	TRectangle *Rectangle66;
	TText *Text52;
	TRectangle *Rectangle67;
	TRectangle *Rectangle68;
	TText *Text53;
	TText *Text54;
	TRectangle *Rectangle69;
	TLine *Line14;
	TRectangle *Rectangle70;
	TText *Text55;
	TRectangle *Rectangle71;
	TText *Text56;
	TRectangle *Rectangle72;
	TRectangle *Rectangle73;
	TText *Text57;
	TText *Text58;
	TRectangle *Rectangle74;
	TLine *Line15;
	TRectangle *Rectangle75;
	TText *Text59;
	TRectangle *Rectangle76;
	TText *Text60;
	TRectangle *Rectangle77;
	TRectangle *Rectangle78;
	TText *Text61;
	TText *Text62;
	TRectangle *Rectangle79;
	TLine *Line16;
	TRectangle *Rectangle80;
	TText *Text63;
	TRectangle *Rectangle81;
	TText *Text64;
	void __fastcall Rectangle2MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle7MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle12MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle17MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle22MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle27MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle32MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle37MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle42MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle47MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle52MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle57MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle62MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle67MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle72MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle77MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall ListBox1MouseMove(TObject *Sender, TShiftState Shift, float X, float Y);

private:	// User declarations
public:		// User declarations
	__fastcall TFrame11(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrame11 *Frame11;
//---------------------------------------------------------------------------
#endif
