//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("Unit5.cpp", Form5);
USEFORM("Unit4.cpp", Form4);
USEFORM("Unit3.cpp", Form3);
USEFORM("Unit6.cpp", Form6);
USEFORM("Unit9.cpp", Frame9); /* TFrame: File Type */
USEFORM("Unit8.cpp", Frame8); /* TFrame: File Type */
USEFORM("Unit7.cpp", Frame7); /* TFrame: File Type */
USEFORM("Unit1.cpp", Form1);
USEFORM("Unit10.cpp", Frame10); /* TFrame: File Type */
USEFORM("Unit2.cpp", Form2);
USEFORM("Unit12.cpp", Frame12); /* TFrame: File Type */
USEFORM("Unit11.cpp", Frame11); /* TFrame: File Type */
USEFORM("Unit13.cpp", Frame13); /* TFrame: File Type */
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TForm2), &Form2);
		Application->CreateForm(__classid(TForm3), &Form3);
		Application->CreateForm(__classid(TForm4), &Form4);
		Application->CreateForm(__classid(TForm5), &Form5);
		Application->CreateForm(__classid(TForm6), &Form6);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
