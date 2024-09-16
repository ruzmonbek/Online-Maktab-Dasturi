//---------------------------------------------------------------------------

#ifndef Unit12H
#define Unit12H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include "Unit13.h"
//---------------------------------------------------------------------------
class TFrame12 : public TFrame
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TRectangle *Rectangle1;
	TRectangle *Rectangle2;
	TRectangle *Rectangle3;
	TRectangle *Rectangle5;
	TRectangle *Rectangle6;
	TRectangle *Rectangle7;
	TRectangle *Rectangle8;
	TText *Text1;
	TText *Text2;
	TText *Text3;
	TText *Text4;
	TText *Text5;
	TText *Text6;
	TText *Text7;
	TText *Text8;
	TRectangle *Rectangle12;
	TText *Text20;
	TPanel *Panel2;
	TFrame13 *Frame131;
private:	// User declarations
public:		// User declarations
	__fastcall TFrame12(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrame12 *Frame12;
//---------------------------------------------------------------------------
#endif
