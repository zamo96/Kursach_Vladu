//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
typedef struct
{
int id;
   char mat[20];
   char tip[20];
   char raz[20];
   char cena[8];
   char vremp[5];
   char kzak[2];
   char name[32];
} A;
typedef struct
{
int id;
char proizvod[32];
}B;
A data[100];
A searchr[100];
B proizv[100];
int nrec,nrec2,pp;
AnsiString criterie,uslovie;
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TPanel *Panel2;
        TPanel *Panel3;
        TButton *load_bt;
        TButton *Button1;
        TListView *ListView1;
        TButton *Button2;
        TButton *Button3;
        TLabel *Label8;
        TOpenDialog *OpenDialog1;
        TLabel *Label7;
        TLabel *Label6;
        TLabel *Label5;
        TLabel *Label4;
        TLabel *Label3;
        TLabel *Label2;
        TLabel *Label1;
        TEdit *Edit4;
        TEdit *Edit3;
        TEdit *Edit2;
        TEdit *Edit1;
        TComboBox *ComboBox3;
        TComboBox *ComboBox2;
        TComboBox *ComboBox1;
        TButton *Button4;
        TButton *Button5;
        TButton *Button6;
        TButton *Button7;
        TComboBox *ComboBox4;
        TComboBox *ComboBox5;
        TButton *Button8;
        TEdit *Edit5;
        TButton *Button9;
        TEdit *Edit6;
        TLabel *Label9;
        TComboBox *ComboBox6;
        void __fastcall ComboBox1Change(TObject *Sender);
        void __fastcall ComboBox2Change(TObject *Sender);
        void __fastcall Edit1Change(TObject *Sender);
        void __fastcall ComboBox3Change(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall load_btClick(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall Button8Click(TObject *Sender);
        void __fastcall Button9Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
        void TForm1::buildlw(A* structer,int schetchik);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
