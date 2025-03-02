//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#include <cmath>
TForm1 *Form1;
int k=0;
double a=0,b=0,c=0;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
if(Edit1->Text=="0")
{
Edit1->Text=((TButton*)Sender)->Caption;
}
else{
if(Edit1->Text.Length()<=9){
Edit1->Text=Edit1->Text+((TButton*)Sender)->Caption;
}
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button13Click(TObject *Sender)
{
if(k==1){
b=Edit1->Text.ToDouble() ;
c+=b;
Edit1->Text="0";
k=1;
}
else{
	a=Edit1->Text.ToDouble();
	c=a;
	k=1;
	Edit1->Text="0";
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button12Click(TObject *Sender)
{
b = Edit1->Text.ToDouble();
switch(k){
case 1:c+=b;break;
case 2:c-=b;break;
case 3:c*=b;break;
case 4:
if(b==0){ShowMessage("0 ga bo'lmang!");}
else{ c/=b; }break;
}
Edit1->Text=FloatToStr(c).SubString(0,10);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button14Click(TObject *Sender)
{
if(k==2){
b=Edit1->Text.ToDouble() ;
c-=b;
Edit1->Text="0";
k=2;
}
else{
	c=Edit1->Text.ToDouble();
	k=2;
	Edit1->Text="0";
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button15Click(TObject *Sender)
{
if(k==3){
b=Edit1->Text.ToDouble() ;
c*=b;
Edit1->Text="0";
k=3;
}
else{
	a=Edit1->Text.ToDouble();
	c=a;
	k=3;
	Edit1->Text="0";
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button8Click(TObject *Sender)
{
if(k==4){
b=Edit1->Text.ToDouble() ;
c/=b;
Edit1->Text="0";
k=4;
}
else{
	a=Edit1->Text.ToDouble();
	c=a;
	k=4;
	Edit1->Text="0";
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button16Click(TObject *Sender)
{
a=0,b=0,c=0,k=0;
Edit1->Text="0";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button17Click(TObject *Sender)
{
if(Edit1->Text.Pos(",")==0)
{
Edit1->Text=Edit1->Text+"," ;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button19Click(TObject *Sender)
{
c=Edit1->Text.ToDouble();
c=sqrt(c);
Edit1->Text=c;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button18Click(TObject *Sender)
{
if(Edit1->Text.Length()>1){
Edit1->Text=Edit1->Text.Delete(Edit1->Text.Length(),1);
}
else{
  Edit1->Text="0";
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button20Click(TObject *Sender)
{
Edit1->Text=Edit1->Text.ToDouble()*(-1);

}
//---------------------------------------------------------------------------



void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
Edit1->Text=Key;
}
//---------------------------------------------------------------------------

