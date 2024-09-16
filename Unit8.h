//---------------------------------------------------------------------------

#ifndef Unit8H
#define Unit8H
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
class TFrame8 : public TFrame
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
	TRectangle *Rectangle2;
	TRectangle *Rectangle3;
	TRectangle *Rectangle4;
	TRectangle *Rectangle5;
	TRectangle *Rectangle6;
	TText *Text1;
	TText *Text2;
	TImage *Image1;
	TImage *Image2;
	TText *Text3;
	TRectangle *Rectangle7;
	TText *Text4;
	TText *Text5;
	TImage *Image3;
	TImage *Image4;
	TText *Text6;
	TRectangle *Rectangle8;
	TText *Text7;
	TText *Text8;
	TImage *Image5;
	TImage *Image6;
	TText *Text9;
	TRectangle *Rectangle9;
	TRectangle *Rectangle10;
	TRectangle *Rectangle11;
	TRectangle *Rectangle12;
	TRectangle *Rectangle13;
	TText *Text10;
	TText *Text11;
	TImage *Image7;
	TImage *Image8;
	TText *Text12;
	TRectangle *Rectangle14;
	TText *Text13;
	TText *Text14;
	TImage *Image9;
	TImage *Image10;
	TText *Text15;
	TRectangle *Rectangle15;
	TText *Text16;
	TText *Text17;
	TImage *Image11;
	TImage *Image12;
	TText *Text18;
	TRectangle *Rectangle16;
	TRectangle *Rectangle17;
	TRectangle *Rectangle18;
	TRectangle *Rectangle19;
	TRectangle *Rectangle20;
	TText *Text19;
	TText *Text20;
	TImage *Image13;
	TImage *Image14;
	TText *Text21;
	TRectangle *Rectangle21;
	TText *Text22;
	TText *Text23;
	TImage *Image15;
	TImage *Image16;
	TText *Text24;
	TRectangle *Rectangle22;
	TText *Text25;
	TText *Text26;
	TImage *Image17;
	TImage *Image18;
	TText *Text27;
	TRectangle *Rectangle23;
	TRectangle *Rectangle24;
	TRectangle *Rectangle25;
	TRectangle *Rectangle26;
	TRectangle *Rectangle27;
	TText *Text28;
	TText *Text29;
	TImage *Image19;
	TImage *Image20;
	TText *Text30;
	TRectangle *Rectangle28;
	TText *Text31;
	TText *Text32;
	TImage *Image21;
	TImage *Image22;
	TText *Text33;
	TRectangle *Rectangle29;
	TText *Text34;
	TText *Text35;
	TImage *Image23;
	TImage *Image24;
	TText *Text36;
	TRectangle *Rectangle30;
	TRectangle *Rectangle31;
	TRectangle *Rectangle32;
	TRectangle *Rectangle33;
	TRectangle *Rectangle34;
	TText *Text37;
	TText *Text38;
	TImage *Image25;
	TImage *Image26;
	TText *Text39;
	TRectangle *Rectangle35;
	TText *Text40;
	TText *Text41;
	TImage *Image27;
	TImage *Image28;
	TText *Text42;
	TRectangle *Rectangle36;
	TText *Text43;
	TText *Text44;
	TImage *Image29;
	TImage *Image30;
	TText *Text45;
	TRectangle *Rectangle37;
	TRectangle *Rectangle38;
	TRectangle *Rectangle39;
	TRectangle *Rectangle40;
	TRectangle *Rectangle41;
	TText *Text46;
	TText *Text47;
	TImage *Image31;
	TImage *Image32;
	TText *Text48;
	TRectangle *Rectangle42;
	TText *Text49;
	TText *Text50;
	TImage *Image33;
	TImage *Image34;
	TText *Text51;
	TRectangle *Rectangle43;
	TText *Text52;
	TText *Text53;
	TImage *Image35;
	TImage *Image36;
	TText *Text54;
	TListBoxItem *ListBoxItem7;
	TListBoxItem *ListBoxItem8;
	TRectangle *Rectangle44;
	TRectangle *Rectangle45;
	TRectangle *Rectangle46;
	TRectangle *Rectangle47;
	TRectangle *Rectangle48;
	TText *Text55;
	TText *Text56;
	TImage *Image37;
	TImage *Image38;
	TText *Text57;
	TRectangle *Rectangle49;
	TText *Text58;
	TText *Text59;
	TImage *Image39;
	TImage *Image40;
	TText *Text60;
	TRectangle *Rectangle50;
	TText *Text61;
	TText *Text62;
	TImage *Image41;
	TImage *Image42;
	TText *Text63;
	TRectangle *Rectangle51;
	TRectangle *Rectangle52;
	TRectangle *Rectangle53;
	TRectangle *Rectangle54;
	TRectangle *Rectangle55;
	TText *Text64;
	TText *Text65;
	TImage *Image43;
	TImage *Image44;
	TText *Text66;
	TRectangle *Rectangle56;
	TText *Text67;
	TText *Text68;
	TImage *Image45;
	TImage *Image46;
	TText *Text69;
	TRectangle *Rectangle57;
	TText *Text70;
	TText *Text71;
	TImage *Image47;
	TImage *Image48;
	TText *Text72;
	void __fastcall Rectangle6MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle7MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle8MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle13MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle14MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle15MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle20MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle21MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle22MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle27MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle28MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle29MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle34MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle35MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle36MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle41MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle42MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle43MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle48MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle49MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle50MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle55MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle56MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall Rectangle57MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
private:	// User declarations
public:		// User declarations
	__fastcall TFrame8(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrame8 *Frame8;
//---------------------------------------------------------------------------
#endif
