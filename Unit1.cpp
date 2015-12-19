//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <stdio.h>
#include <iostream>
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
using namespace std;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void sort_po_mat()    // сортировка по материалу
{
 for(int i = 0;i < nrec-1; i++)  //запускается цикл который обходит все элементы массива тк счетчик у нас  nrec = 11  при загрузке а элементов у нас 10 и первый элемент у нас начинается с 0
    {
    for(int j = i ; j<nrec-1;j++)   //второй цикл который тоже проходит все элементы массива
    {
    if(criterie == "по возрастанию")      //критерий в комбобоксе
    {
     if(data[i].mat[0]>data[j].mat[0])  // если первая буква материала больше первой буквы последующего то
     swap(data[i],data[j]);               // меняются элементы массива местам
     }
    else if(criterie == "по убыванию")        //критерий в комбобоксе
    {
     if(data[i].mat[0]<data[j].mat[0])    //наооборот если меньше
     swap(data[i],data[j]);
     }
     }
    }
}
void sort_po_tip()                    //сортировка по типу абсолютно все тоже самое только с другими элементами структуры
{
 for(int i = 0;i < nrec-1; i++)
    {
    for(int j = i ; j<nrec-1;j++)
    {
    if(criterie == "по возрастанию")
    {
     if(data[i].tip[0]>data[j].tip[0])
     swap(data[i],data[j]);
     }
    else if(criterie == "по убыванию")
     if(data[i].tip[0]<data[j].tip[0])
     swap(data[i],data[j]);
     }
    }
}
void sort_po_razm()      //сортировка по размеру
{
 for(int i = 0;i < nrec-1; i++)
    {
    for(int j = i ; j<nrec-1;j++)
    {
    if(criterie == "по возрастанию")
    {
     if(atoi(data[i].raz)>atoi(data[j].raz))
     swap(data[i],data[j]);
     }
    else if(criterie == "по убыванию")
     if(atoi(data[i].raz)<atoi(data[j].raz))
     swap(data[i],data[j]);
     }
    }
}

void sort_po_cen()   //сортировка по цене
{
 for(int i = 0;i < nrec-1; i++)
    {
    for(int j = i ; j<nrec-1;j++)
    {
    if(criterie == "по возрастанию")
    {
     if(atoi(data[i].cena)>atoi(data[j].cena))    //функция atoi   переводит в int тоесть были элементы в чар там например 1 2 5 8 он переводит в число 1258
     swap(data[i],data[j]);
     }
    else if(criterie == "по убыванию")
     if(atoi(data[i].cena)<atoi(data[j].cena))
     swap(data[i],data[j]);
     }
    }
}
void sort_po_time()  //сортировка по времени
{
 for(int i = 0;i < nrec-1; i++)
    {
    for(int j = i ; j<nrec-1;j++)
    {
    if(criterie == "по возрастанию")
    {
     if(atoi(data[i].vremp)>atoi(data[j].vremp))
     swap(data[i],data[j]);
     }
    else if(criterie == "по убыванию")
    {
     if(atoi(data[i].vremp)<atoi(data[j].vremp))
     swap(data[i],data[j]);
     }
     }
    }
}

void sort()
{
 Form1->ListView1->Clear();
 criterie = Form1->ComboBox5->Items->Strings[Form1->ComboBox5->ItemIndex]  ;  // записывается в переменную  criterie
 uslovie = Form1->ComboBox4->Items->Strings[Form1->ComboBox4->ItemIndex];
      if(uslovie=="Материал")
      sort_po_mat();
      else if(uslovie == "Тип листа")
      sort_po_tip();
      else if(uslovie == "Размер")
      sort_po_razm();
      else if(uslovie == "Цена")
      sort_po_cen();
      else if(uslovie == "Время производства")
      sort_po_time();



}
void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{
if(ComboBox1-> ItemIndex==0)
        {
        ComboBox2->Items->Clear();
        ComboBox2->Text = "";
        ComboBox3->Text = "";
        ComboBox3->Items->Clear();
        Edit1->Text = "";
        ComboBox2->Items->Add("Сплошной лист");
        ComboBox2->Items->Add("Рефленный лист");
        }
else if(ComboBox1-> ItemIndex==1 || ComboBox1-> ItemIndex==3)
        {
        ComboBox2->Items->Clear();
        ComboBox2->Text = "";
        ComboBox3->Text = "";
        ComboBox3->Items->Clear();
        Edit1->Text = "";
        ComboBox2->Items->Add("Сплошной лист");
        }
else if(ComboBox1-> ItemIndex==2)
        {
        ComboBox2->Items->Clear();
        ComboBox2->Text = "";
        ComboBox3->Text = "";
        ComboBox3->Items->Clear();
        Edit1->Text = "";
        ComboBox2->Items->Add("Сплошной лист");
        ComboBox2->Items->Add("Рефленный лист");
        ComboBox2->Items->Add("Оцинкованный лист");
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBox2Change(TObject *Sender)
{
if(ComboBox1-> ItemIndex==0)
        {
        if (ComboBox2-> Text=="Сплошной лист")
                {
                ComboBox3->Items->Clear();
                ComboBox3->Text = "";
                Edit1->Text = "";
                ComboBox3->Items->Add("0,8х1200х3000");
                ComboBox3->Items->Add("1,5х1500х4000");
                ComboBox3->Items->Add("2,5х1500х3000");
                ComboBox3->Items->Add("4х1500х3000");
                }
        else if (ComboBox2-> Text=="Рефленный лист")
                {
                ComboBox3->Items->Clear();
                ComboBox3->Text = "";
                Edit1->Text = "";
                ComboBox3->Items->Add("1,5х1200х3000");
                ComboBox3->Items->Add("2х1200х3000");
                ComboBox3->Items->Add("4х1500х3000");
                }
        }
else if (ComboBox1-> ItemIndex==1)
        {
        if (ComboBox2-> Text=="Сплошной лист")
                {
                ComboBox3->Items->Clear();
                ComboBox3->Text = "";
                Edit1->Text = "";
                ComboBox3->Items->Add("0,5x600x1500");
                ComboBox3->Items->Add("1x600x1500");
                ComboBox3->Items->Add("10x600x1500");
                ComboBox3->Items->Add("80x600x1500");
                }
        }
else if (ComboBox1-> ItemIndex==2)
        {
        if (ComboBox2-> Text=="Рефленный лист")
                {
                ComboBox3->Items->Clear();
                ComboBox3->Text = "";
                Edit1->Text = "";
                ComboBox3->Items->Add("3x1250x2500");
                ComboBox3->Items->Add("4x1500x6000");
                ComboBox3->Items->Add("5x1500x6000");
                }
        else if (ComboBox2-> Text=="Сплошной лист")
                {
                ComboBox3->Items->Clear();
                ComboBox3->Text = "";
                Edit1->Text = "";
                ComboBox3->Items->Add("0,5x1250x2500");
                ComboBox3->Items->Add("0,7x1250x2500");
                ComboBox3->Items->Add("1,5x1250x2500");
                ComboBox3->Items->Add("3x1250x2500");
                }
        else if (ComboBox2-> Text=="Оцинкованный лист")
                {
                ComboBox3->Items->Clear();
                ComboBox3->Text = "";
                Edit1->Text = "";
                ComboBox3->Items->Add("0,4x1000x2000");
                ComboBox3->Items->Add("0,9x1250x2500");
                ComboBox3->Items->Add("2x1250x2500");
                ComboBox3->Items->Add("3x1250x2500");
                }
        }
else if (ComboBox1-> ItemIndex==3)
        {
        if (ComboBox2-> Text=="Сплошной лист")
                {
                ComboBox3->Items->Clear();
                ComboBox3->Text = "";
                Edit1->Text = "";
                ComboBox3->Items->Add("0,5x600x1500");
                ComboBox3->Items->Add("1,5x600x1500");
                ComboBox3->Items->Add("18x600x1500");
                ComboBox3->Items->Add("40x600x1500");
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1Change(TObject *Sender)
{
if (!(Edit1->Text == ""))
        {
        Edit3->Text = "1";
        }
else if (Edit1->Text == "")
        {
        Edit3->Text = "";
        }
if (Edit1->Text == "374" || Edit1->Text == "500" || Edit1->Text == "1116" || Edit1->Text == "1109" || Edit1->Text == "3410" || Edit1->Text == "2463" || Edit1->Text == "11041" || Edit1->Text == "13747" || Edit1->Text == "21995" || Edit1->Text == "1506" || Edit1->Text == "3012")
        {
        Edit2->Text = "20";
        }
else if (Edit1->Text == "2263" || Edit1->Text == "8582" || Edit1->Text == "10624" || Edit1->Text == "5693" || Edit1->Text == "8094" || Edit1->Text == "19052")
        {
        Edit2->Text = "40";
        }
else if (Edit1->Text == "290" || Edit1->Text == "874" || Edit1->Text == "2278")
        {
        Edit2->Text = "30";
        }
else if (Edit1->Text == "1910" || Edit1->Text == "2499" || Edit1->Text == "30124")
        {
        Edit2->Text = "60";
        }
else if (Edit1->Text == "61081" || Edit1->Text == "41738" || Edit1->Text == "51751")
        {
        Edit2->Text = "180";
        }
else if (Edit1->Text == "")
        {
        Edit2->Text = "";
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ComboBox3Change(TObject *Sender)
{
if((ComboBox1-> ItemIndex==0) && (ComboBox2-> Text=="Сплошной лист"))
        {
        if (ComboBox3-> Text=="0,8х1200х3000")
                {
                Edit1->Text = "2463";
                }
        else if (ComboBox3-> Text=="1,5х1500х4000")
                {
                Edit1->Text = "11041";
                }
        else if (ComboBox3-> Text=="2,5х1500х3000")
                {
                Edit1->Text = "13747";
                }
        else if (ComboBox3-> Text=="4х1500х3000")
                {
                Edit1->Text = "21995";
                }
        }
else if ((ComboBox1-> ItemIndex==0) && (ComboBox2-> Text=="Рефленный лист"))
        {
        if (ComboBox3-> Text=="1,5х1200х3000")
                {
                Edit1->Text = "5693";
                }
        else if(ComboBox3-> Text=="2х1200х3000")
                {
                Edit1->Text = "8094";
                }
        else if (ComboBox3-> Text=="4х1500х3000")
                {
                Edit1->Text = "19052";
                }
        }
else if ((ComboBox1-> ItemIndex==1) && (ComboBox2-> Text=="Сплошной лист"))
        {
        if (ComboBox3-> Text=="0,5x600x1500")
                {
                Edit1->Text = "1506";
                }
        else if (ComboBox3-> Text=="1x600x1500")
                {
                Edit1->Text = "3012";
                }
        else if (ComboBox3-> Text=="10x600x1500")
                {
                Edit1->Text = "30124";
                }
        else if (ComboBox3-> Text=="80x600x1500")
                {
                Edit1->Text = "61081";
                }
        }
else if  ((ComboBox1-> ItemIndex==2) && (ComboBox2-> Text=="Рефленный лист"))
        {
        if (ComboBox3-> Text=="3x1250x2500")
                {
                Edit1->Text = "2263";
                }
        else if (ComboBox3-> Text=="4x1500x6000")
                {
                Edit1->Text = "8582";
                }
        else if (ComboBox3-> Text=="5x1500x6000")
                {
                Edit1->Text = "10624";
                }
        else if (ComboBox3-> Text=="0,5x1250x2500")
                {
                Edit1->Text = "374";
                }
        }
else if  ((ComboBox1-> ItemIndex==2) && (ComboBox2-> Text=="Сплошной лист"))
        {
        if (ComboBox3-> Text=="0,7x1250x2500")
                {
                Edit1->Text = "500";
                }
        else if (ComboBox3-> Text=="1,5x1250x2500")
                {
                Edit1->Text = "1116";
                }
        else if  (ComboBox3-> Text=="3x1250x2500")
                {
                Edit1->Text = "2278";
                }
        else if  (ComboBox3-> Text=="0,4x1000x2000")
                {
                Edit1->Text = "290";
                }
        }
 else if  ((ComboBox1-> ItemIndex==2) && (ComboBox2-> Text=="Оцинкованный лист"))
        {
        if (ComboBox3-> Text=="0,9x1250x2500")
                {
                Edit1->Text = "874";
                }
        else if  (ComboBox3-> Text=="2x1250x2500")
                {
                Edit1->Text = "1910";
                }
        else if  (ComboBox3-> Text=="3x1250x2500")
                {
                Edit1->Text = "2499";
                }
        }
 else if  ((ComboBox1-> ItemIndex==3) && (ComboBox2-> Text=="Сплошной лист"))
        {
        if (ComboBox3-> Text=="0,5x600x1500")
                {
                Edit1->Text = "1109";
                }
        else if (ComboBox3-> Text=="1,5x600x1500")
                {
                Edit1->Text = "3410";
                }
        else if (ComboBox3-> Text=="18x600x1500")
                {
                Edit1->Text = "41738";
                }
        else if (ComboBox3-> Text=="40x600x1500")
                {
                Edit1->Text = "51751";
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
Panel2->Visible = (true);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
if (MessageDlg("Удалить?", mtConfirmation, TMsgDlgButtons() << mbNo << mbYes,0) == mrYes)
        {
        ListView1->Selected->Delete();
        }
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
ListView1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::load_btClick(TObject *Sender)
{
      if ((!OpenDialog1->Execute()) || (Edit4->Text == ""))
        {
        Beep (750, 300);
        ShowMessage("ОШИБКА! Пожалуйста,заполните время для производсвта!");
        return;
        }
FILE* inp = fopen(OpenDialog1->FileName.c_str(), "r");
nrec=0;
while(!feof(inp))
        {
        memset(&data[nrec], 0, sizeof(A));
        fscanf(inp, "%s %s %s %s %s %s %i", &data[nrec].mat,&data[nrec].tip, &data[nrec].raz, &data[nrec].cena,&data[nrec].vremp, &data[nrec].kzak, &data[nrec].id);
        TListItem *Item = ListView1->Items->Add();
        Item->Caption =data[nrec].mat;
        Item->SubItems->Add(data[nrec].tip);
        Item->SubItems->Add(data[nrec].raz);
        Item->SubItems->Add(data[nrec].cena);
        Item->SubItems->Add(data[nrec].vremp);
        Item->SubItems->Add(data[nrec].kzak);
        int vrempz= atoi(data[nrec].vremp);
                //{
                if (vrempz!=0)
                        {
                        int cenaz= atoi (data[nrec].cena);
                        int DnVipz= ((8*60*60)/vrempz);
                        Item->SubItems->Add(DnVipz);
                        int DnDohz= (DnVipz*cenaz);
                        Item->SubItems->Add(DnDohz);
                        int YkVrz= StrToInt(Edit4->Text);
                        int DhVrz= ((YkVrz*60*cenaz)/vrempz);
                        Item->SubItems->Add(DhVrz);
                        Item->SubItems->Add(Edit4->Text);
                        }
                //}

        nrec++;
        }
        fclose(inp);
        ListView1->Items->Item[nrec-1]->Delete();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button4Click(TObject *Sender)
{
if ((ComboBox1->Text == "")||(ComboBox2->Text == "")||(ComboBox3->Text == "") || (Edit4->Text == "")|| (Edit6->Text == ""))
        {
        Beep (750, 300);
        ShowMessage("Заполните все поля!");
        return;
        }
 data[nrec-1].id= nrec-1;
 strcpy(data[nrec-1].mat,ComboBox1->Text.c_str());
 strcpy(data[nrec-1].tip,ComboBox2->Text.c_str());
 strcpy(data[nrec-1].raz,ComboBox3->Text.c_str());
 strcpy(data[nrec-1].cena,Edit1->Text.c_str());
 strcpy(data[nrec-1].vremp,Edit2->Text.c_str());
 strcpy(data[nrec-1].kzak,Edit3->Text.c_str());
 strcpy(data[nrec-1].name,Edit6->Text.c_str());

TListItem *Item = ListView1->Items->Add();
Item->Caption = (ComboBox1->Text);
Item->SubItems->Add(ComboBox2->Text);
Item->SubItems->Add(ComboBox3->Text);
Item->SubItems->Add(Edit1->Text);
Item->SubItems->Add(Edit2->Text);
Item->SubItems->Add(Edit3->Text);
int cenad= StrToInt(Edit1->Text);
int vrempd= StrToInt(Edit2->Text);
int YkVr= StrToInt(Edit4->Text);
int DnVipd= ((8*60*60)/vrempd);
int DnDohd= (DnVipd*cenad);
int DohVrd= ((YkVr*60*cenad)/vrempd);
Item->SubItems->Add(DnVipd);
Item->SubItems->Add(DnDohd);
Item->SubItems->Add(DohVrd);
Item->SubItems->Add(Edit4->Text);
Item->SubItems->Add(Edit6->Text);
         nrec++;
}
//---------------------------------------------------------------------------





void __fastcall TForm1::Button5Click(TObject *Sender)
{
ComboBox1->Clear();
ComboBox2->Clear();
ComboBox3->Clear();
Edit1->Clear();
Edit2->Clear();
Edit3->Clear();
Panel2->Visible = (false);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
{
for (int i = 0; i<nrec; i++)
{
for ( int j = i+1; j<nrec; j++)
{
if (data[j].cena < data[i].cena)
{
data[nrec]=data[i];
data[i]=data[j];
data[j]=data[nrec];
}
}
}
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
sort();
for(int i = 0;i<nrec-1;i++)
{
TListItem *Item = ListView1->Items->Add();
        Item->Caption =data[i].mat;
        Item->SubItems->Add(data[i].tip);
        Item->SubItems->Add(data[i].raz);
        Item->SubItems->Add(data[i].cena);
        Item->SubItems->Add(data[i].vremp);
        Item->SubItems->Add(data[i].kzak);
        int vrempz= atoi(data[i].vremp);
                if (vrempz!=0)
                        {
                        int cenaz= atoi (data[i].cena);
                        int DnVipz= ((8*60*60)/vrempz);
                        Item->SubItems->Add(DnVipz);
                        int DnDohz= (DnVipz*cenaz);
                        Item->SubItems->Add(DnDohz);
                        int YkVrz= StrToInt(Edit4->Text);
                        int DhVrz= ((YkVrz*60*cenaz)/vrempz);
                        Item->SubItems->Add(DhVrz);
                        Item->SubItems->Add(Edit4->Text);
                        Item->SubItems->Add(data[i].name);
                        }
        }
}
//---------------------------------------------------------------------------
void searcher()
{
pp = 0;
  char *stroka = new char[Form1->Edit5->Text.Length()+1]; // массив со строкой
        strcpy(stroka, Form1->Edit5->Text.c_str());
        int p = Form1->Edit5->Text.Length(); // длина строки
  for(int i = 0;i<nrec;i++)
{
   if(Form1->ComboBox6->Items->Strings[Form1->ComboBox6->ItemIndex]=="По Материалу")
   {
        if(strncmp(data[i].mat,stroka,p)==0)
        {
        searchr[pp]=data[i];
        pp++;
        }

   }
   if(Form1->ComboBox6->Items->Strings[Form1->ComboBox6->ItemIndex]=="По Производителю")
   {
          if(strncmp(data[i].name,stroka,p)==0)
        {
        searchr[pp]=data[i];
        pp++;
        }
   }
}
}

void __fastcall TForm1::Button8Click(TObject *Sender)
{
searcher();
Form1->ListView1->Clear();
for(int i = 0 ; i<pp;i++)
{
  TListItem *Item = ListView1->Items->Add();
        Item->Caption =searchr[i].mat;
        Item->SubItems->Add(searchr[i].tip);
        Item->SubItems->Add(searchr[i].raz);
        Item->SubItems->Add(searchr[i].cena);
        Item->SubItems->Add(searchr[i].vremp);
        Item->SubItems->Add(searchr[i].kzak);
        int vrempz= atoi(searchr[i].vremp);
          if (vrempz!=0)
                        {
                        int cenaz= atoi (searchr[i].cena);
                        int DnVipz= ((8*60*60)/vrempz);
                        Item->SubItems->Add(DnVipz);
                        int DnDohz= (DnVipz*cenaz);
                        Item->SubItems->Add(DnDohz);
                        int YkVrz= StrToInt(Edit4->Text);
                        int DhVrz= ((YkVrz*60*cenaz)/vrempz);
                        Item->SubItems->Add(DhVrz);
                        Item->SubItems->Add(Edit4->Text);
                        Item->SubItems->Add(searchr[i].name);
                        }
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
OpenDialog1->Execute();
FILE* inp = fopen(OpenDialog1->FileName.c_str(), "r");
nrec2 = 0 ;
while(!feof(inp))
        {
        memset(&proizv[nrec2], 0, sizeof(B));
        fscanf(inp, "%s %i", &proizv[nrec2].proizvod,&proizv[nrec2].id) ;
        nrec2++;
        }

        fclose(inp);


for (int j = 0; j<nrec2-1;j++)
{
  for(int i = 0 ; i < nrec-1;i++)
  {
    if(proizv[j].id==data[i].id)
    {
    strcpy(data[i].name,proizv[j].proizvod);
      }
  }
}
Form1->ListView1->Clear();
for(int i = 0;i<nrec-1;i++)
{
TListItem *Item = ListView1->Items->Add();
        Item->Caption =data[i].mat;
        Item->SubItems->Add(data[i].tip);
        Item->SubItems->Add(data[i].raz);
        Item->SubItems->Add(data[i].cena);
        Item->SubItems->Add(data[i].vremp);
        Item->SubItems->Add(data[i].kzak);
        int vrempz= atoi(data[i].vremp);
                if (vrempz!=0)
                        {
                        int cenaz= atoi (data[i].cena);
                        int DnVipz= ((8*60*60)/vrempz);
                        Item->SubItems->Add(DnVipz);
                        int DnDohz= (DnVipz*cenaz);
                        Item->SubItems->Add(DnDohz);
                        int YkVrz= StrToInt(Edit4->Text);
                        int DhVrz= ((YkVrz*60*cenaz)/vrempz);
                        Item->SubItems->Add(DhVrz);
                        Item->SubItems->Add(Edit4->Text);
                        Item->SubItems->Add(data[i].name);
                        }
        }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button10Click(TObject *Sender)
{
TListItem *Item = ListView1->Items->Add();
        Item->Caption =data[nrec-2].mat;
        Item->SubItems->Add(data[nrec-2].tip);
        Item->SubItems->Add(data[nrec-2].raz);
        Item->SubItems->Add(data[nrec-2].cena);
        Item->SubItems->Add(data[nrec-2].vremp);
        Item->SubItems->Add(data[nrec-2].kzak);
        int vrempz= atoi(data[nrec-2].vremp);
                if (vrempz!=0)
                        {
                        int cenaz= atoi (data[nrec-2].cena);
                        int DnVipz= ((8*60*60)/vrempz);
                        Item->SubItems->Add(DnVipz);
                        int DnDohz= (DnVipz*cenaz);
                        Item->SubItems->Add(DnDohz);
                        int YkVrz = StrToInt (Form1->Edit4->Text);
                        int DhVrz= ((YkVrz*60*cenaz)/vrempz);
                       Item->SubItems->Add(DhVrz);
                        Item->SubItems->Add(Edit4->Text);
                        Item->SubItems->Add(data[nrec-2].name);
                        }
}
//---------------------------------------------------------------------------

