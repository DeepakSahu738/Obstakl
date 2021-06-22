#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
char ch,bp;
int t=27,score=0;
int gdriver = DETECT, gmode;
int radius = 10;
//ENTER NUMBER BETWEEN 20-120
   int p=20;

   int o=30;

   int a=40;

   int b=50;

   int c=60;

   int d=70;

   int e=80;
   int q;
int y=0;
void play()
{
for(int j=0;j<=60;j+=10)
{ y++;

 p=20;

    o=30;

    a=40;

    b=50;

    c=60;

    d=70;
    e=80;

for(int i=1;i<40;i++)
{
clrscr();
 initgraph(&gdriver, &gmode, "");
line(2,280,640,280);

cout<<"!$%Round ::"<<y<<endl;
  p-=2;
  o-=2;
  a-=2;
  b-=2;
  c-=2;
  d-=2;
  e-=2;
     if(kbhit())
     {
     ch=getch();
     if(ch==' ')
     {
     t=t-10+1;

     }
     }

      setcolor(4);
      circle(40,10*t, radius);
      delay(60-j);

    setcolor(3);
    circle(10*o,10*27,radius);
    delay(60-j);
    circle(10*p,10*27,radius);
    delay(60-j);
   circle(10*a,10*27,radius);
   delay(60-j);
   circle(10*b,10*27,radius);
   delay(60-j);
   circle(10*c,10*27,radius);
   delay(60-j);
   circle(10*d,10*27,radius);
   delay(60-j);
   circle(10*e,10*27,radius);
  delay(60-j);

  if(p==4||o==4||a==4||b==4||c==4||d==4||e==4)
   {
   if(t==27)
     {
     goto x;

    }
    }
  t=27;
  closegraph();

    if(p==2||o==2||a==2||b==2||c==2||d==2||e==2)
    {
    ++score;
     }
 }
  }
   x:
  cout<<"#Your score is : "<<score;

  if(score<=10)
  cout<<"\n@You got 4 out of 10";
  else
  if(score<=20&&score>10)
  cout<<"\n@You got 6 out of 10";
  else
  if(score >=20&&score<=30)
  cout<<"\n@You got 8 out of 10";
  else
  if(score>=30)
  cout<<"\n@You got 10 out of 10";
    cout<<"\n$Better luck next time";



  cout<<"\n\n\n&Enter 0\n";
  cin>>bp;
  y=0;
}
void  inst ()
{
cout<<"You have to press space bar to jump and";
cout<<"\nif you failed to press space bar then you will be out ";
cout<<"\nAnd your score will bw according to that how much huddle you crossed";
cout<<"\nAt last your score will be in your screen ";
cout<<"\nBest of luck\n";
}
void main()
{
clrscr();

while(1)
{
clrscr();
score=0;
cout<<"Enter 1 for instruction";
cout<<"\nEnter 2 to play the game";
cout<<"\nEnter 3 to exit\n";
cin>>q;
clrscr();
switch(q)
{
case 1:

inst();
getch();
clrscr();
break;
case 2:
 play();
 break;

case 3:
	exit(0);
	break;
default:
	cout<<"Wrong choice";
	getch();
	break;
}

}
}