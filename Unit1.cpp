//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------




void __fastcall TForm1::ScrollBar1Change(TObject *Sender)
{
float panjangl1, panjangl2;
int t1,t2;
float x,y,xx,yy,px,py;
float b;

Edit1->Text = ScrollBar1->Position;
 panjangl1 = 6;
 panjangl2 = 6;
 t1=ScrollBar1->Position;
 t2 = StrToFloat(Edit2->Text) ;
 b = 0.01744444;
 x = panjangl1 * cos (t1*b);   //lengan1
 y = panjangl1 * sin (t1*b);

 xx = panjangl2 * cos ((t1*b) + (t2*b));  //lengan 2
 yy = panjangl2 * sin ((t1*b) + (t2*b));
 px = x + xx;
 py = y + yy;

 Series1->Clear();
 Series1->AddXY(0,0);
 Series1->AddXY(x,y);

 Series3->Clear();
 Series3->AddXY(x,y);


 Series2->Clear();
 Series2->AddXY(x,y);
 Series2->AddXY(px,py);


}
//---------------------------------------------------------------------------


void __fastcall TForm1::ScrollBar2Change(TObject *Sender)
{
float panjangl1, panjangl2;
int t1,t2,t3;
float x,y,xx,yy,px,py;
float b;

Edit2->Text = ScrollBar2->Position;


 panjangl1 = 6;
 panjangl2 = 6;
 t1 = StrToFloat(Edit1->Text);

 t2 = ScrollBar2->Position;
 b = 0.01744444;
 x = panjangl1 * cos (t1*b);   //lengan1
 y = panjangl1 * sin (t1*b);

 xx = panjangl2 * cos ((t1*b) + (t2*b));  //lengan 2
 yy = panjangl2 * sin ((t1*b) + (t2*b));
 px = x + xx;
 py = y + yy;

 Series1->Clear();
 Series1->AddXY(0,0);
 Series1->AddXY(x,y);

 Series2->Clear();
 Series2->AddXY(x,y);
 Series2->AddXY(px,py);

}
//---------------------------------------------------------------------------





