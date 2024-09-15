//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.DateTimeCtrls.hpp>
#include <FMX.Edit.hpp>
//---------------------------------------------------------------------------
class TForm6 : public TForm
{
__published:	// IDE-managed Components
	TRectangle *Rectangle1;
	TRectangle *Rectangle2;
	TRectangle *Rectangle3;
	TRectangle *Rectangle4;
	TRectangle *Rectangle5;
	TRectangle *Rectangle6;
	TRectangle *Rectangle7;
	TDateEdit *DateEdit1;
	TEdit *Edit1;
	TEdit *Edit2;
	TRectangle *Rectangle8;
	TText *Text1;
	TText *Text2;
	void __fastcall Text1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm6(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm6 *Form6;
//---------------------------------------------------------------------------
#endif
