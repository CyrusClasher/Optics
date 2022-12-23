#include<constream.h>
#include<graphics.h>
#include<stdarg.h>
#include<stdlib.h>
#include<stdio.h>
#include<dos.h>

#define ESC	0x1b			/* Define the escape key	*/
#define PI	3.14159 		/* Define a value for PI	*/
#define OFF	0			/* Define a handy constants	*/

int i ,j ,a ,color;
void Pause (void);                      /*Global Variables & Functions*/

void main()
{
   clrscr();
   int gd=DETECT ,gm ;
   detectgraph(&gd ,&gm);
      initgraph(&gd ,&gm ,"c:\\turboc3\\bgi");

//   void tagline();
//   tagline();

   do{ settextjustify(1,1);
       setbkcolor(7);
       setcolor(6);
   for (i=0,j=0; i<70,j<15 ;i++,j++)
   {
      cleardevice();
      settextstyle(1, HORIZ_DIR, i);
      outtextxy(getmaxx()/2+5-j, getmaxy()/5, "CONTENTS");
      delay(50);
   }

   settextjustify(0,1);
   settextstyle(1, HORIZ_DIR, 1);
   outtextxy(10 ,240 ,"Reflection from Convex and Concave Mirrors");
   outtextxy(10 ,280 ,"Refraction Through Glass Slab");
   outtextxy(10 ,320 ,"Refraction Through Convex and Concave Lens");
   outtextxy(10 ,360 ,"Dispersion Through Glass Prism");
   outtextxy(10 ,400 ,"Eye Defects");
   outtextxy(10 ,440 ,"Exit");
   outtextxy(570 ,240 ,"....1");
   outtextxy(570 ,280 ,"....2");
   outtextxy(570 ,320 ,"....3");
   outtextxy(570 ,360 ,"....4");
   outtextxy(570 ,400 ,"....5");
   outtextxy(570 ,440 ,"....6");

   a=getch();
   if(a=='1')
   {
   cleardevice();
   void page_1();
   page_1();
   void page_2();
   page_2();
   void page_3();
   page_3();
   }
   else if(a=='2')
   {
   cleardevice();
   void page_5();
   page_5();
   }
   else if(a=='3')
   {
   cleardevice();
   void page_11();
   page_11();
   void page_12();
   page_12();
   void page_4();
   page_4();
   }
   else if(a=='4')
   {
   cleardevice();
   void page_6();
   page_6();
   }
   else if(a=='5')
   {
   cleardevice();
   void page_7();
   page_7();
   void page_9();
   page_9();
   void page_8();
   page_8();
   void page_10();
   page_10();
   }
   }while(a!='6');
   exit(0);
}

void tagline()
{
settextjustify(1,1);


   setbkcolor(12);
   for(color=1 ;color<=15 ;color++)
   {
   if(color>15) color=7;
   settextjustify(0 ,2);
   settextstyle(7 ,HORIZ_DIR ,8);
   setcolor(color);
   outtextxy(180 ,170 ,"Welcome");
   delay(200);
   }

   Pause();
}

void page_1()
{
	setbkcolor(9);
	setcolor(15);
	settextjustify(0,2);
	settextstyle(4 ,HORIZ_DIR ,8);
	outtextxy(200 ,170 ,"Mirrors");
	sleep(3);
	Pause();
	cleardevice();

      settextjustify(0,2);
      settextstyle(0 ,HORIZ_DIR ,1);
      rectangle(0 ,0 ,getmaxx() ,getmaxy());
      line(0 ,466 ,getmaxx() ,466);
      outtextxy(getmaxx()/4+70 ,468 ,"Esc Aborts The Program..!");
      line(getmaxx()/2 ,0 ,getmaxx()/2 ,466);
      line(0,getmaxy()/2, getmaxx(), getmaxy()/2);

      arc( 120, 120, -60, 60, 70);           //mirror1
      line(60 ,120 ,280 ,120);               //principal axis 1

      outtextxy(193 ,123 ,"P");

      for(i=0 ;i<127 ;i++)
      {

      line(60 ,100 ,60+i ,100);
      line(60 ,140 ,60+i ,140);
      delay(20);                             //1
      }

      for(i=0,j=0 ;i<90,j<20 ;i++,j++)
      {
      line(60 ,100 ,187 ,100);
      line(187 ,100 ,187-i ,100+j);
      delay(20);
      }                                      //1

      for(i=0,j=0 ;i<90,j<20 ;i++,j++)
      {
      line(60 ,140 ,187 ,140);
      line(187 ,140 ,187-i ,140-j);
      delay(20);
      }                                      //1

      outtextxy(60 ,30 ,"Object: At Infinity");
      outtextxy(60 ,40 ,"Image: At Focus");
      outtextxy(513 ,123 ,"P");
      outtextxy(440 ,124 ,"C");
      outtextxy(475 ,111 ,"F");

      arc( 440, 120, -60, 60, 70);           //mirror2
      line(380 ,120 ,600 ,120);              //principal axis 2

      line(400 ,80 ,400 ,120);
      line(400 ,80 ,397 ,83);
      line(400 ,80 ,403 ,83);                //object2

      for(i=0 ;i<98 ;i++)
      {
      line(400 ,80 ,400+i ,80);
      delay(20);
      }                                      //2

      for(i=0,j=0 ;i<125,j<95 ;i++,j+=2)
      {
      line(498 ,80 ,498-i ,80+j);
      delay(20);
       }                                      //2

      for(i=0,j=0 ;i<115,j<90 ;i++,j++)
      {
      line(400 ,80 ,400+i ,80+j);
      delay(20);
      }                                      //2

      line(465 ,120 ,465 ,145);              //image2

      outtextxy(380 ,30 ,"Object: Beyond C");
      outtextxy(380 ,40 ,"Image: Between C and F");
      outtextxy(193 ,363 ,"P");
      outtextxy(112 ,364 ,"C");
      outtextxy(152 ,350 ,"F");

      arc( 120, 360, -60, 60, 70);           //mirror3
      line(60 ,360 ,280 ,360);               //principal axis 3

      line(120 ,360 ,120 ,330);
      line(120 ,330 ,117 ,333);
      line(120 ,330 ,123 ,333);		    //object3

      for(i=0 ;i<64 ;i++)
      {
      line(120 ,330 ,120+i ,330);
      delay(20);                            //3
      }

      for(i=0,j=0 ;i<65,j<80 ;i++,j++)
      {
      line(184 ,330 ,184-i ,330+j);
      delay(20);
      }                                     //3

      for(i=0,j=0 ;i<110,j<63 ;i++,j++)
      {
      line(120 ,330 ,120+i ,330+j);
      delay(20);
      }                                     //3

      for(i=0 ;i<90 ;i++)
      {
      line(182 ,392 ,182-i ,392);
      delay(20);
      }                                     //3

      line(120 ,360 ,120 ,392);
      line(120 ,392 ,117 ,389);
      line(120 ,392 ,123 ,389);             //image3

      outtextxy(60 ,270 ,"Object: At C");
      outtextxy(60 ,280 ,"Image: At C");
      outtextxy(513 ,363 ,"P");
      outtextxy(440 ,363 ,"C");
      outtextxy(475 ,367 ,"F");

      arc( 440, 360, -60, 60, 70);           //mirror4
      line(350 ,360 ,600 ,360);              //principal axis 4

      line(455 ,360 ,455 ,340);
      line(455 ,340 ,453 ,342);
      line(455 ,340 ,457 ,342);             //object4

      for(i=0 ;i<52 ;i++)
      {
      line(455 ,340 ,455+i ,340);
      delay(20);
      }                                      //4

      for(i=0,j=0 ;i<25,j<53 ;i+=3,j++)
      {
      line(507 ,340 ,507-i ,340+2*j);
      delay(20);
      }                                      //4

      for(i=0,j=0 ;i<24,j<17 ;i+=2,j++)
      {
      line(455 ,340 ,455+i ,340-2*j);
      delay(20);
      }                                      //4

      for(i=0,j=0 ;i<89,j<133 ;i++,j++)
      {
      line(487 ,308 ,487-i ,308+j);
      delay(20);
      }                                      //4

      line(355 ,360 ,355 ,441);
      line(355 ,441 ,352 ,439);		     //image4

      outtextxy(380 ,270 ,"Object: Between F and C");
      outtextxy(380 ,280 ,"Image: Beyond C");

      Pause();
}

/*:::::::::::::::::::::::::::::END_OF_PAGE_1:::::::::::::::::::::::::::::::*/

void page_2()
{
   FILE *stream;
      rectangle(0 ,0 ,getmaxx() ,getmaxy());
      line(0 ,15 ,getmaxx() ,15);
      outtextxy(getmaxx()/4+70 ,6 ,"Esc Aborts The Program..!");
      arc( 120, 120, -60, 60, 70);           //mirror5
      arc( 440, 120, -60, 60, 70);           //mirror6

      line(60 ,120 ,280 ,120);               //principal axis 4
      line(380 ,120 ,600 ,120);              //principal axis 5

      settextstyle(2 ,HORIZ_DIR ,3);
      outtextxy(193 ,123 ,"P");
      outtextxy(120 ,112 ,"C");
      outtextxy(155 ,123 ,"F");
      outtextxy(190 ,98 ,"D");
      outtextxy(184 ,83 ,"E");
      outtextxy(149 ,110 ,"B");
      outtextxy(151 ,92 ,"A");

      line(155 ,120 ,155 ,100);
      line(155 ,100 ,153 ,102);
      line(155 ,100 ,157 ,102);              //object5
      line(120 ,120 ,120 ,122);

      for(i=0 ;i<33 ;i++)
      {
      line(155 ,100 ,155+i ,100);
      delay(20);
      }                                      //5

      for(i=0,j=0 ;i<50,j<35 ;i+=(7/2),j++)
      {
      line(188 ,100 ,188-i ,100+2*j);
      delay(20);
      }                                      //5

      for(i=0,j=0 ;i<16,j<9 ;i+=3,j++)
      {
      line(155 ,100 ,155+i ,100-2*j);
      delay(20);
      }                                      //5

      for(i=0,j=0 ;i<30,j<40 ;i+=3,j++)
      {
      line(180 ,84 ,180-i ,84+2*j);
      delay(20);
      }
					    //5
      settextstyle(0 ,HORIZ_DIR ,1);
      outtextxy(60 ,30 ,"Object: At Focus");
      outtextxy(60 ,40 ,"Image: At Infinity");

      line(492 ,120 ,492 ,100);
      line(492 ,100 ,495 ,102);
      line(492 ,100 ,489 ,102);              //object6

      for(i=0,j=0 ;i<8,j<7 ;i+=2,j++)
      {
      line(492 ,100 ,492+i ,100-j);
      delay(20);
      }                                      //6

      for(i=0,j=0 ;i<25,j<55 ;i+=2,j++)
      {
      line(503 ,94 ,503-i ,94+j);
      delay(20);
      }                                      //6

      for(i=0,j=0 ;i<10,j<20 ;i++,j++)
      {
      line(492 ,100 ,492+i ,100+j);
      delay(20);
      }                                      //6

      for(i=0,j=0 ;i<10,j<25 ;i++,j++)
      {
      line(510 ,120 ,510-i ,120+j);
      delay(20);
      }                                      //6

      for(i=0,j=0 ;i<29,j<35 ;i+=2,j++)
      {
      line(503 ,94 ,503+i ,94-j);
      delay(20);
      }                                      //6

      for(i=0,j=0 ;i<40,j<60 ;i++,j++)
      {
      line(510 ,120 ,510+i ,120-j);
      delay(20);
      }                                      //6

      line(569 ,61 ,569 ,120);
      line(569 ,61 ,567 ,63);
      line(569 ,61 ,571 ,63);                //image6

      rectangle(0 ,getmaxy()/2 ,getmaxx() ,getmaxy());
      line(0 ,getmaxy()/2+30 ,639 ,getmaxy()/2+30);
      line(0 ,305 ,639 ,305);
      line(0 ,340 ,639 ,340);
      line(0 ,375 ,639 ,375);
      line(0 ,410 ,639 ,410);
      line(0 ,445 ,639 ,445);
      line(160 ,240 ,160 ,479);
      line(320 ,240 ,320 ,479);
      line(480 ,240 ,480 ,479);

      settextstyle(0 ,HORIZ_DIR ,1);
      outtextxy(380 ,30     ,"Object: Between F and P");
      outtextxy(380 ,40     ,"Image: Behind The Mirror");
      outtextxy(7 ,250      ,"Position Of Object");
      outtextxy(170 ,250    ,"Position Of Image");
      outtextxy(350 ,250    ,"Size Of Image");
      outtextxy(500 ,250    ,"Nature Of Image");
      outtextxy(40 ,287     ,"At Infinity");
      outtextxy(50 ,322     ,"Beyond C");
      outtextxy(67 ,357     ,"At C");
      outtextxy(20 ,392     ,"Between C and F");
      outtextxy(67 ,427     ,"At F");
      outtextxy(20 ,462     ,"Between P and F");
      outtextxy(40+160 ,287 ,"At the Focus");
      outtextxy(27+160 ,322 ,"Between F and C");
      outtextxy(67+160 ,357 ,"At C");
      outtextxy(45+160 ,392 ,"Beyond C");
      outtextxy(40+160 ,427 ,"At Infinity");
      outtextxy(15+160 ,462 ,"Behind the Mirror");
      outtextxy(14+320 ,280 ,"Highly Diminished");
      outtextxy(35+320 ,290 ,"Point Sized");
      outtextxy(37+320 ,322 ,"Diminished");
      outtextxy(40+320 ,357 ,"Same Size");
      outtextxy(43+320 ,392 ,"Enlarged");
      outtextxy(20+320 ,427 ,"Highly Enlarged");
      outtextxy(43+320 ,462 ,"Enlarged");
      outtextxy(10+480 ,287 ,"Real and Inverted");
      outtextxy(10+480 ,322 ,"Real and Inverted");
      outtextxy(10+480 ,357 ,"Real and Inverted");
      outtextxy(10+480 ,392 ,"Real and Inverted");
      outtextxy(10+480 ,427 ,"Real and Inverted");
      outtextxy(10+480 ,462 ,"Virtual and Erect");

      Pause();
}

/*:::::::::::::::::::::::::::::END_OF_PAGE_2:::::::::::::::::::::::::::::::*/

void page_3()
{
      rectangle(0 ,0 ,getmaxx() ,getmaxy());
      line(0 ,465 ,639 ,465);
      outtextxy(getmaxx()/4+70 ,468 ,"Esc Aborts The Program..!");
      arc( 240, 230, 120, -120, 70);           //mirror7
      arc( 560, 230, 120, -120, 70);           //mirror8

      line(60 ,230 ,280 ,230);               //principal axis 7
      line(380 ,230 ,600 ,230);              //principal axis 8

      for(i=0 ;i<=103 ;i++)
      {
      line(70 ,210 ,70+i ,210);
      line(70 ,250 ,70+i ,250);
      delay(20);
      }                                      //7

      for(i=0,j=0 ;i<30,j<30 ;i+=3,j++)
      {
      line(173 ,210 ,173-i ,210-2*j);
      line(173 ,250 ,173-i ,250+2*j);
      delay(20);
      }                                      //7

      for(i=0,j=0 ;i<10,j<11 ;i+=3,j++)
      {
      line(173 ,210 ,173+i ,210+2*j);
      line(173 ,250 ,173+i ,250-2*j);
      delay(20);
      }                                      //7

      outtextxy(60 ,350 ,"Object: At Infinity");
      outtextxy(60 ,360 ,"Image: At Focus");

      line(420 ,230 ,420 ,200);
      line(420 ,200 ,417 ,202);
      line(420 ,200 ,423 ,202); 	     //object8

      for(i=0 ;i<77 ;i++)
      {
      line(420 ,200 ,420+i ,200);
      delay(20);
      }                                      //8

      for(i=0,j=0 ;i<35,j<45 ;i++,j++)
      {
      line(497 ,200 ,497-i ,200-j);
      delay(20);
      }                                      //8

      for(i=0,j=0 ;i<25,j<15 ;i+=5,j++)
      {
      line(420 ,200 ,420+i ,200+j);
      delay(30);
      }                                      //8

      for(i=0,j=0 ;i<20,j<15 ;i+=5,j++)
      {
      line(420 ,200 ,420-i ,200-j);
      delay(30);
      }                                      //8

      for(i=0,j=0 ;i<25,j<30 ;i++,j++)
      {
      line(497 ,200 ,497+i ,200+j);
      delay(20);
      }                                      //8

      for(i=0,j=0 ;i<20,j<25 ;i+=5,j++)
      {
      line(493 ,215 ,493+i ,215+j);
      delay(30);
      }                                      //8

      line(517 ,230 ,517 ,220);
      line(517 ,220 ,515 ,223);
      line(517 ,220 ,519 ,223);              //image8

      line(0 ,35 ,getmaxx() ,35);
      line(0 ,70 ,getmaxx() ,70);
      line(0 ,105 ,getmaxx() ,105);
      line(160 ,0 ,160 ,105);
      line(320 ,0 ,320 ,105);
      line(480 ,0 ,480 ,105);

      outtextxy(380 ,350  ,"Object: Between F and P");
      outtextxy(380 ,360  ,"Image: Behind The Mirror");
      outtextxy(7 ,17     ,"Position Of Object");
      outtextxy(170 ,17   ,"Position Of Image");
      outtextxy(350 ,17   ,"Size Of Image");
      outtextxy(500 ,17   ,"Nature Of Image");
      outtextxy(30 ,48    ,"At Infinity");
      outtextxy(7 ,78     ,"Between Infinity");
      outtextxy(7 ,88     ,"And Pole Of Mirror");
      outtextxy(192 ,45   ,"At the Focus");
      outtextxy(177 ,55   ,"Behind The Mirror");
      outtextxy(335 ,45   ,"Highly Diminished,");
      outtextxy(353 ,55   ,"Point-Sized");
      outtextxy(495 ,48   ,"Virtual And Erect");
      outtextxy(174 ,78   ,"Between P and F");
      outtextxy(170 ,88   ,"Behind The Mirror");
      outtextxy(193+160 ,85 ,"Point-Sized");
      outtextxy(495 ,83   ,"Virtual And Erect");                //465

      for(i=0 ;i<619 ;i+=5)
      {
      line(10 ,405 ,10+i ,405);
      line(10 ,455 ,10+i ,455);
      delay(20);
      }

      outtextxy(70 ,425 ,"* * NOTE: Convex Mirror always forms Virtual and Erect Image * *");

      for(i=0 ;i<50 ;i++)
      {
      line(10 ,405 ,10 ,405+i);
      line(getmaxx()-11 ,405 ,getmaxx()-11 ,405+i);
      delay(20);
      }

      Pause();
}

void page_4()
{
      rectangle(0 ,0 ,getmaxx() ,getmaxy());
      line(0 ,465 ,639 ,465);
      outtextxy(getmaxx()/4+70 ,468 ,"Esc Aborts The Program..!");

      line(60 ,230 ,280 ,230);               //principal axis 7
      arc(260 ,230 ,140 ,-140 ,80);
      arc(80 ,230 ,-40 ,40 ,80);
      line(141 ,282 ,199 ,282);
      line(141 ,178 ,199 ,178);
      line(170 ,178 ,170 ,282);
      line(80 ,230 ,80 ,233);
      line(120 ,230 ,120 ,233);
      line(260 ,233 ,260 ,230);
      line(220 ,233 ,220 ,230);

      for(i=0 ;i<100 ;i++)
      {
      line(70 ,210 ,70+i ,210);
      line(70 ,250 ,70+i ,250);
      delay(20);
      }

      for(i=0,j=0 ;i<10,j<20 ;i+=5,j++)
      {
      line(170 ,210 ,170+i ,210-2*j);
      line(170 ,250 ,170+i ,250+2*j);
      delay(20);
      }

      for(i=0,j=0 ;i<6,j<11 ;i+=5,j++)
      {
      line(170 ,210 ,170-i ,210+2*j);
      line(170 ,250 ,170-i ,250-2*j);
      delay(20);
      }

      outtextxy(60 ,350 ,"Object: At Infinity");
      outtextxy(60 ,360 ,"Image: At Focus");

      line(380 ,230 ,600 ,230);              //principal axis 8
      arc(580 ,230 ,140 ,-140 ,80);
      arc(400 ,230 ,-40 ,40 ,80);
      line(461 ,282 ,519 ,282);
      line(461 ,178 ,519 ,178);
      line(490 ,178 ,490 ,282);
      line(400 ,230 ,400 ,233);
      line(440 ,230 ,440 ,233);
      line(580 ,233 ,580 ,230);
      line(540 ,233 ,540 ,230);

      line(420 ,230 ,420 ,230);

      line(420 ,230 ,420 ,200);
      line(420 ,200 ,417 ,202);
      line(420 ,200 ,423 ,202);

      for(i=0 ;i<70 ;i++)
      {
      line(420 ,200 ,420+i ,200);
      delay(20);
      }

      for(i=0,j=0 ;i<20,j<30 ;i+=5,j++)
      {
      line(420 ,200 ,420+i ,200+2*j);
      delay(20);
      }

      for(i=0,j=0 ;i<12,j<17 ;i+=5,j++)
      {
      line(490 ,200 ,490+i ,200-3*j);
      delay(50);
      }

      for(i=0,j=0 ;i<12,j<17 ;i+=5,j++)
      {
      line(490 ,200 ,490-i ,200+3*j);
      delay(50);
      }

      line(462 ,230 ,462 ,218);

      line(0 ,35 ,getmaxx() ,35);
      line(0 ,70 ,getmaxx() ,70);
      line(0 ,105 ,getmaxx() ,105);
      line(160 ,0 ,160 ,105);
      line(320 ,0 ,320 ,105);
      line(480 ,0 ,480 ,105);

      outtextxy(360 ,350  ,"Object: Between Infinity And Centre");
      outtextxy(360 ,360  ,"Image: Same side of Lens");
      outtextxy(7   ,17   ,"Position Of Object");
      outtextxy(170 ,17   ,"Position Of Image");
      outtextxy(350 ,17   ,"Size Of Image");
      outtextxy(500 ,17   ,"Nature Of Image");
      outtextxy(30  ,48   ,"At Infinity");
      outtextxy(7   ,78   ,"Between Infinity");
      outtextxy(7   ,88   ,"And Centre Of Lens");
      outtextxy(192 ,45   ,"At the Focus");
      outtextxy(177 ,55   ,"Same Side of Lens");
      outtextxy(335 ,45   ,"Highly Diminished,");
      outtextxy(353 ,55   ,"Point-Sized");
      outtextxy(495 ,48   ,"Virtual And Erect");
      outtextxy(174 ,78   ,"Between O and F");
      outtextxy(170 ,88   ,"Same side of Lens");
      outtextxy(193+160 ,85 ,"Point-Sized");
      outtextxy(495 ,83   ,"Virtual And Erect");                //465

      for(i=0 ;i<619 ;i+=5)
      {
      line(10 ,405 ,10+i ,405);
      line(10 ,455 ,10+i ,455);
      delay(20);
      }

      outtextxy(70 ,425 ,"* * NOTE: Concave Lens always forms Virtual and Erect Image * *");

      for(i=0 ;i<50 ;i++)
      {
      line(10 ,405 ,10 ,405+i);
      line(getmaxx()-11 ,405 ,getmaxx()-11 ,405+i);
      delay(20);
      }

      Pause();
}

/*::::::::::::::::::::::::::::::END_OF_PAGE_4:::::::::::::::::::::::::::::*/

void page_5()
{
      settextjustify(0,2);
      settextstyle(0 ,HORIZ_DIR ,1);
      setcolor(4);
      line(0 ,466 ,getmaxx() ,466);
      outtextxy(getmaxx()/4+70 ,468 ,"Esc Aborts The Program..!");
      settextjustify(0,2);
      settextstyle(0 ,HORIZ_DIR ,0);
      setbkcolor(8);
      setcolor(4);
	settextstyle(7 ,HORIZ_DIR ,6);              //settextjustify(0,2);
      outtextxy(100 ,10 ,"REFRACTION");

	setcolor(2);
	settextstyle(2 ,HORIZ_DIR ,6);              //settextjustify(0,2);
      outtextxy(20 ,100 ,"The phenomenon of bending of light ray as it passes through");
      outtextxy(20 ,118 ,"one medium to another is  called REFRACTION of LIGHT");
      setcolor(1);
      rectangle(40 ,210 ,220 ,320);                   //glass
      line(90 ,180 ,90 ,240);                         //normal 1
      line(146 ,280 ,146 ,350);          	      //normal 2
      setcolor(4);
      outtextxy(10 ,180 ,"AIR");
      outtextxy(97 ,180 ,"normal");
      outtextxy(170 ,210 ,"GLASS");
      outtextxy(85 ,320 ,"normal");
      outtextxy(10 ,340 ,"AIR");
      setcolor(15);

      for(i=0,j=0;i<50,j<50;++i,++j)
      {
      line(40 ,160 ,40+i ,160+j);                    //ray 1
      delay(20);
      }

      outtextxy(83 ,177 ,"i");
      arc(90 ,209 ,91 ,125 ,15);

      for(i=0,j=0;i<50,j<113;++i,++j)
      {
      line(90 ,209 ,90+0.5*i ,209+j);                //ray 2
      delay(20);
      }

      outtextxy(93 ,220 ,"r");
      arc(90 ,209 ,-89 ,-65 ,15);
      outtextxy(138 ,283 ,"r");
      arc(146 ,320 ,91 ,115 ,15);

      for(i=0,j=0;i<50,j<50;++i,++j)
      {
      line(146 ,320 ,146+i ,320+j);                  //ray 3
      delay(20);
      }

      outtextxy(152 ,328 ,"e");
      arc(146 ,320 ,-89 ,-55 ,15);

      outtextxy(240 ,160 ,"LAWS  OF  REFRACTION ---");
      outtextxy(240 ,190 ,"1)The incident ray,the refracted ray and");
      outtextxy(250 ,210 ," the normal to the interface at the point");
      outtextxy(250 ,230 ," of incidence all lie in the same plane.");
      outtextxy(240 ,270 ,"2)The ratio of sin of angle of incidence");
      outtextxy(250 ,290 ," and the sine of angle of refraction is ");
      outtextxy(250 ,310 ," constant for a given pair of media.");
      outtextxy(300 ,340 ," sin i");
      outtextxy(400 ,345 ,"1");
      line(300 ,360 ,360 ,360);                      //ratio
      outtextxy(410 ,350 ,"u");
      outtextxy(300 ,355 ," sin r");
      outtextxy(420 ,360 ,"2");
      outtextxy(365 ,350 ," =");
      outtextxy(445 ,350 ," ,a constant");
      outtextxy(370 ,375 ,"( refractive index )");
      Pause();
}

void page_6()
{
      settextjustify(0,2);
      settextstyle(0 ,HORIZ_DIR ,1);
      setcolor(8);
      line(0 ,466 ,getmaxx() ,466);
      outtextxy(getmaxx()/4+70 ,468 ,"Esc Aborts The Program..!");
      int color;
      setbkcolor(7);
      setcolor(2);
      settextstyle(7 ,HORIZ_DIR ,4);
      outtextxy(200,10,"DISPERSION");
      setcolor(8);
      outtextxy(190,12,"____________");
      setcolor(9);
      settextstyle(2 ,HORIZ_DIR ,6);
      outtextxy(20,60,"The phenomenon of splitting of");
      outtextxy(310,60,"white light into its constituent ");
      outtextxy(20,80,"colours on passing through a ");
      outtextxy(300,80,"refracting medium is called");
      outtextxy(20,105,"DISPERSION OF LIGHT.");
      setcolor(8);
      line(90,200,20,320);                      //prism
      line(90,200,160,320);                     //prism
      line(20,320,160,320);                     //prism
      setcolor(4);
      outtextxy(260,190,"screen");
      outtextxy(30,300," GLASS PRISM");
      setcolor(8);
      line(280,220,280,320);                    //screen
      setcolor(15);
      outtextxy(5,235,"white");
      outtextxy(5,250,"light");

      for(i=0,j=0;i<50,j<55;++i,++j)
      {                                          //main ray
      line(0,290,0+i,290-0.5*j);
      delay(3);
      }

      setcolor(4);
      for(i=0,j=0;i<50,j<61;++i,++j)
      {                                          //disp ray1
      line(50,265,50+i,265-0.5*j);
      delay(2);
      }

      for(i=0,j=0;i<50,j<172;++i,++j)
      {
      line(110,235,110+i,235+0.1*j);             //disp ray1
      delay(2);
      }

      setcolor(6);
      for(i=0,j=0;i<50,j<64;++i,++j)
      {                                          //disp ray2
      line(50,265,50+i,265-0.4*j);
      delay(2);
      }

      for(i=0,j=0;i<50,j<172;++i,++j)
      {
      line(115,240,110+i,240+0.1*j);              //disp ray2
      delay(2);
      }

      setcolor(14);
      for(i=0,j=0;i<50,j<67;++i,++j)
      {
      line(50,265,50+i,265-0.3*j);                //disp ray3
      delay(2);
      }

      for(i=0,j=0;i<50,j<167;++i,++j)
      {
      line(115,245,115+i,245+0.1*j);               //disp ray3
      delay(2);
      }

      setcolor(2);
      for(i=0,j=0;i<50,j<70;++i,++j)
      {
      line(50,265,50+i,265-0.2*j);                 //disp ray4
      delay(2);
      }

      for(i=0,j=0;i<50,j<168;++i,++j)
      {
      line(113,251,113+i,251+0.1*j);               //disp ray4
      delay(2);
      }

      setcolor(1);
      for(i=0,j=0;i<50,j<75;++i,++j)
      {
      line(50,265,50+i,265-0.1*j);                 //disp ray5
      delay(2);
      }

      for(i=0,j=0;i<50,j<165;++i,++j)
      {
      line(117,257,117+i,257+0.1*j);               //disp ray5
      delay(2);
      }

      setcolor(9);
      for(i=0,j=0;i<50,j<78;++i,++j)
      {
      line(50,265,50+i,265-0.0*j);                 //disp ray6
      delay(2);
      }

      for(i=0,j=0;i<50,j<158;++i,++j)
      {
      line(124,265,124+i,265+0.1*j);               //disp ray6
      delay(2);
      }

      setcolor(13);
      for(i=0,j=0;i<50,j<83;++i,++j)
      {
      line(50,265,50+i,265+0.1*j);                 //disp ray7
      delay(2);
      }

      for(i=0,j=0;i<50,j<155;++i,++j)
      {
      line(127,272,127+i,272+0.1*j);               //disp ray7
      delay(2);
      }

      setcolor(5);
      settextstyle(7 ,HORIZ_DIR ,1);
      outtextxy(15,370,"The pattern of coloured bands");
      outtextxy(15,395,"on the screen is called SPECTRUM.");

      for(i=0 ;i<1 ;++i)
      {
      for(color=1;color<=15;color++)
      {
      if(color>15) color=1;
      setcolor(color);
      settextstyle(7 ,HORIZ_DIR ,4);
      outtextxy(70,330,"VIBGYOR");
      delay(100);
      }
      }
      setcolor(6);
      settextstyle(1 ,HORIZ_DIR ,1);
      outtextxy(350,140,"CAUSE OF DISPERSION");
      setcolor(8);
      outtextxy(345,142,"_____________________");
      setcolor(6);
      outtextxy(335,170,"* Dispersion takes place because");
      outtextxy(350,195,"refractive index of refracting");
      outtextxy(350,220,"medium is different for");
      outtextxy(350,245,"different wavelengths .");
      outtextxy(335,295,"* u (R.I.) of a material for");
      outtextxy(350,320,"wavelength (Y) is given by");
      setcolor(8);
      outtextxy(350,350,"u =  a  +  b  +  c");
      outtextxy(453,353,"___   ___");
      outtextxy(473,373,"2     4");
      outtextxy(457,380,"Y     Y");
      setcolor(6);
      outtextxy(360,400,"where a, b, c are constants.");

      for(i=0;i<3;++i)
      {
      for(color=1;color<=15;color++)
      {
      if(color>15) color=1;
      setcolor(color);
      settextstyle(7 ,HORIZ_DIR ,4);
      outtextxy(70,330,"VIBGYOR");
      delay(100);
      }
      }
      Pause();
}

void page_7()
{
      settextjustify(0,2);
      settextstyle(0 ,HORIZ_DIR ,1);
      setcolor(4);
      line(0 ,466 ,getmaxx() ,466);
      outtextxy(getmaxx()/4+70 ,468 ,"Esc Aborts The Program..!");
      settextjustify(0,2);
      setbkcolor(7);
      setcolor(5);
      settextstyle(7 ,HORIZ_DIR ,5);
      outtextxy(10,0,"MYOPIA");
      setcolor(6);
      outtextxy(200,0,"(Short Sightedness)");
      setcolor(4);
      settextstyle(7 ,HORIZ_DIR ,2);
      outtextxy(210,180,"EYE");
      setcolor(12);
      circle(230,130,50);
      setcolor(14);
      for(i=0;i<170;++i)
      {
      line(50,115,50+i,115);
      line(50,130,50+i,130);
      line(50,145,50+i,145);
      delay(10);
      }
      line(210,130,280,130);
      for(i=0,j=0;i<50,j<59;++i,++j)
      {
      line(220,115,220+i,115+0.5*j);
      line(220,145,220+i,145-0.5*j);
      delay(10);
      }
       setcolor(2);
      settextstyle(3 ,HORIZ_DIR ,3);
       outtextxy(296,50,"Myopia is a condition in which");
       outtextxy(296,75,"a person can see objects that");
       outtextxy(296,100,"are nearby clearly,but cannot");
       outtextxy(296,125,"see objects that are far away.");
       outtextxy(296,150,"In this defect image is formed");
       outtextxy(296,175,"in front of retina.");
       setcolor(5);
      settextstyle(7 ,HORIZ_DIR ,5);
	outtextxy(10,210,"Correction of MYOPIA");
      setcolor(12);
      circle(230,350,50);
      setcolor(4);
      settextstyle(7 ,HORIZ_DIR ,2);
      outtextxy(210,405,"EYE");
      setcolor(1);
      ellipse(150,350,90,270,13,35);
      ellipse(100,350,270,90,13,35);
      line(104,315,146,315);
      line(104,385,146,385);
      setcolor(8);
      settextstyle(2 ,HORIZ_DIR ,6);
      outtextxy(70,295,"Concave Lens");
      setcolor(14);
      for(i=0;i<170;++i)
      {
      line(50,335,50+i,335);
      line(50,350,50+i,350);
      line(50,365,50+i,365);
      delay(10);
      }
      line(210,350,280,350);
      for(i=0,j=0;i<50,j<61;++i,++j)
      {
      line(220,335,220+i,335+0.25*j);
      line(220,365,220+i,365-0.25*j);
      delay(10);
      }
      setcolor(2);
      settextstyle(3 ,HORIZ_DIR ,3);
      outtextxy(300,270,"This defect can be corrected");
      outtextxy(304,295,"by using concave lens i.e.");
      outtextxy(304,320,"diverging lens. It diverges");
      outtextxy(304,345,"light rays from a distant  ");
      outtextxy(304,370,"object such that image forms");
      outtextxy(304,395,"on the retina .");
      Pause();
}

void page_8()
{
restorecrtmode();
	class pres
{
	 public:
	 void def()
	 {
cout<<"\n\n\t\t\t\tPRESBYOPIA";
cout<<"\n\nPresbyopia is when your eyes gradually lose the ability to see things clearly up close. It is a normal part of aging.In fact, the word presbyopia means old eye in Greek. You may start to notice presbyopia shortly after age 40. You will probably find that you hold reading materials farther away in\n order to see them clearly.\n";
	}
};
class corpres:public pres
{
public:
void cordef()
{
cout<<"\n\n\t\t\tCORRECTION OF PRESBYOPIA\n\n";
cout<<"Your clear lens sits inside the eye behind your colored iris. It changes shape  to focus light onto the retina so you can see. When you are young, the lens is  soft and flexible, easily changing shape. This lets you focus on objects both   close-up and far away.After age of 40 the lens becomes more rigid. It cannot    change shape as easily. This makes it harder to read, thread a needle, or do    other close-up tasks.There is no way to stop or reverse the normal aging processthat causes presbyopia. However, presbyopia can be corrected with eyeglasses,   contact lenses or surgery. If you do not correct presbyopia, you may be botheredby headaches and eye strain\n";
}
}d;
d.def();
d.cordef();
getch();
setgraphmode(getgraphmode());
/*      settextjustify(0,2);
      settextstyle(0 ,HORIZ_DIR ,1);
      setcolor(4);
      line(0 ,466 ,getmaxx() ,466);
      outtextxy(getmaxx()/4+70 ,468 ,"Esc Aborts The Program..!");
      setbkcolor(7);
      setcolor(5);
      settextstyle(7 ,HORIZ_DIR ,5);
      outtextxy(180,10,"PRESBYOPIA");
      settextstyle(6 ,HORIZ_DIR ,1);
      setcolor(9);
	outtextxy(10 ,70 ,"Presbyopia is when your eyes gradually lose the ability to see things");
	outtextxy(10 ,90 ,"clearly up close. It is a normal part of aging.In fact, the word presbyopia");
	outtextxy(10 ,110 ,"means old eye in Greek. You may start to notice presbyopia shortly after age 40.");
	outtextxy(10 ,130 ,"You will probably find that you hold reading materials farther away in ");
	outtextxy(10 ,150 ,"order to see them clearly.");
	setcolor(5);
	settextstyle(7 ,HORIZ_DIR ,5);
	outtextxy(10 ,200 ,"Correction of PRESBYOPIA");
	settextstyle(6 ,HORIZ_DIR ,1);
	setcolor(9);
	outtextxy(10 ,250 ,"Your clear lens sits inside the eye behind your colored iris. It changes");
	outtextxy(10 ,270 ,"shape to focus light onto the retina so you can see. When you are young,");
	outtextxy(10 ,290 ,"the lens is soft and flexible, easily changing shape.");
	outtextxy(10 ,310 ,"This lets you focus on objects both close-up and far away.After age 40,");
	outtextxy(10 ,330 ,"the lens becomes more rigid. It cannot change shape as easily. This");
	outtextxy(10 ,350 ,"makes it harder to read, thread a needle, or do other close-up tasks.");
	outtextxy(10 ,370 ,"There is no way to stop or reverse the normal aging process that causes");
	outtextxy(10 ,390 ,"presbyopia. However, presbyopia can be corrected with eyeglasses,");
	outtextxy(10 ,410 ,"contact lenses or surgery. If you do not correct presbyopia, you ");
	outtextxy(10 ,430 ,"may be bothered by headaches and eye strain");
	setcolor(8);
*/
//      Pause();
}

void page_9()
{
      settextjustify(0,2);
      settextstyle(0 ,HORIZ_DIR ,1);
      setcolor(4);
      line(0 ,466 ,getmaxx() ,466);
      outtextxy(getmaxx()/4+70 ,468 ,"Esc Aborts The Program..!");
      setbkcolor(7);
      setcolor(5);
      settextstyle(7 ,HORIZ_DIR ,4);
      outtextxy(10,0,"HYPERMETROPIA");
       setcolor(6);
      outtextxy(320,0,"(Long Sightedness)");
      setcolor(12);
      circle(230,130,50);
      setcolor(4);
      settextstyle(7 ,HORIZ_DIR ,2);
      outtextxy(210,180,"EYE");
      setcolor(14);
      for(i=0;i<170;++i)
      {
      line(50,115,50+i,115);
      line(50,130,50+i,130);
      line(50,145,50+i,145);
      delay(10);
      }
      line(210,130,309,130);
      for(i=0,j=0;i<50,j<95;++i,++j)
      {
      line(220,115,220+i,115+0.15*j);
      line(220,145,220+i,145-0.15*j);
      delay(10);
      }
       setcolor(2);
      settextstyle(3 ,HORIZ_DIR ,3);
       outtextxy(310,50,"In this defect a person can");
       outtextxy(310,75,"see objects that are distant");
       outtextxy(310,100,"clearly,but cannot see object");
       outtextxy(310,125,"that are near him. In this");
       outtextxy(310,150,"defect the image is formed");
       outtextxy(310,175,"behind the retina.");
       setcolor(5);
      settextstyle(7 ,HORIZ_DIR ,4);
	outtextxy(10,220,"Correction of HYPERMETROPIA");
      setcolor(12);
      circle(230,350,50);
      setcolor(4);
      settextstyle(7 ,HORIZ_DIR ,2);
      outtextxy(210,405,"EYE");
      setcolor(1);
      ellipse(110,350,90,270,9,34);
      ellipse(110,350,270,90,9,34);
      setcolor(8);
      settextstyle(2 ,HORIZ_DIR ,6);
      outtextxy(70,295,"convex lens");
      setcolor(14);
      for(i=0;i<170;++i)
      {
      line(50,335,50+i,335);
      line(50,350,50+i,350);
      line(50,365,50+i,365);
      delay(10);
      }
      line(210,350,280,350);
      for(i=0,j=0;i<50,j<61;++i,++j)
      {
      line(220,335,220+i,335+0.25*j);
      line(220,365,220+i,365-0.25*j);
      delay(10);
      }
      setcolor(2);
      settextstyle(3 ,HORIZ_DIR ,3);
      outtextxy(300,270,"This defect can be corrected");
      outtextxy(304,295,"by using convex lens i.e.");
      outtextxy(304,320,"converging lens. It converges");
      outtextxy(304,345,"light rays from a distant  ");
      outtextxy(304,370,"object such that image forms");
      outtextxy(304,395,"on the retina .");
      Pause();
}

void page_10()
{
	restorecrtmode();
class TCOE
{
	 public:
	 void tdef()
	 {
	cout<<"\n\t\t\tTAKING  CARE  OF  OUR  EYES"  ;
      cout<<"\n\n\n It is important to take good care of eyes. So";
      cout<<" given below are some simple \n measures to ";
      cout<<"protect our eyes .";

      cout<<"\n\n* Eat food rich in vitamin A, such as carrots,";
      cout<<"spinach, papaya, milk, etc... \n  Deficiency of ";
      cout<<"vitamin A causes night blindness .";

      cout<<"\n\n* Do not read in dim light. Do not read in a";
      cout<<" moving vehicle";
	 }
};
class torpres:public TCOE
{
public:
void tordef()
{
      cout<<"\n\n* Avoid looking directly at bright objects like";
      cout<<" sun. It can damage the retina .";

      cout<<"\n\n* Do not rub your eyes. Wash your eyes with";
      cout<<" clean and cold water .";

      cout<<"\n\n* If you wear spectacles,clean them regularly.";
}
}d;
d.tdef();
d.tordef();
getch();
	setgraphmode(getgraphmode());
/*      settextjustify(0,2);
      settextstyle(0 ,HORIZ_DIR ,1);
      setcolor(4);
      line(0 ,466 ,getmaxx() ,466);
      outtextxy(getmaxx()/4+70 ,468 ,"Esc Aborts The Program..!");
      setbkcolor(7);
      for(i=0;i<1;++i)
      {
      for(color=1;color<=15;color++)
      {
      if(color>15) color=1;
      setcolor(color);
      settextstyle(10 ,HORIZ_DIR ,4);
      outtextxy(50,0,"Taking  Care  Of  Eyes");
      delay(80);
      }
      }
      setcolor(6);
      settextstyle(8 ,HORIZ_DIR ,3);
      outtextxy(0,70," It is important to take good care of eyes. So");
      outtextxy(20,95,"given below are some simple measures to ");
      outtextxy(20,120,"protect our eyes .");
      setcolor(1);
      outtextxy(10,155,"* Eat food rich in vitamin A, such as carrots,");
      outtextxy(30,180,"spinach, papaya, milk, etc... Deficiency of ");
      outtextxy(30,205,"vitamin A causes night blindness .");
      setcolor(2);
      outtextxy(10,235,"* Do not read in dim light. Do not read in a");
      outtextxy(30,260,"moving vehicle");
      setcolor(5);
      outtextxy(10,290,"* Avoid looking directly at bright objects like");
      outtextxy(30,315,"sun. It can damage the retina .");
      setcolor(8);
      outtextxy(10,345,"* Do not rub your eyes. Wash your eyes with");
      outtextxy(30,370,"clean and cold water .");
      setcolor(4);
      outtextxy(10,400,"* If you wear spectacles,clean them regularly.");
	for(i=0;i<2;++i)
      {
      for(color=1 ;color<=15 ;color++)
      {
      if(color>15) color=7;
      setcolor(color);
      settextstyle(10 ,HORIZ_DIR ,4);
      outtextxy(50,0,"Taking  Care  Of  Eyes");
      delay(200);
      }
      }
*/
//	Pause();
}

void page_11()
{
	setbkcolor(5);
	setcolor(15);
	settextjustify(0,2);
	settextstyle(4 ,HORIZ_DIR ,8);
	outtextxy(180 ,170 ,"Lenses");
	sleep(3);
	Pause();
	cleardevice();

      settextjustify(0,2);
      settextstyle(0 ,HORIZ_DIR ,0);

      rectangle(0 ,0 ,getmaxx() ,getmaxy());
      line(0 ,466 ,getmaxx() ,466);
      outtextxy(getmaxx()/4+70 ,468 ,"Esc Aborts The Program..!");
      line(getmaxx()/2 ,0 ,getmaxx()/2 ,466);
      line(0,getmaxy()/2, getmaxx(), getmaxy()/2);

      arc( 42, 120, -30, 30, 150);           //lens1
      arc( 300, 120, 150, 210, 150);          //lens1
      arc( 350, 120, -30, 30, 150);           //lens2
      arc( 610, 120, 150, 210, 150);          //lens2
      arc( 42, 360, -30, 30, 150);           //lens3
      arc( 300, 360, 150, 210, 150);          //lens3
      arc( 350, 360, -30, 30, 150);           //lens4
      arc( 610, 360, 150, 210, 150);          //lens4

      line(60 ,120 ,280 ,120);               //principal axis 1
      line(350 ,120 ,600 ,120);              //principal axis 2
      line(60 ,360 ,280 ,360);               //principal axis 3
      line(350 ,360 ,600 ,360);              //principal axis 4

      outtextxy(170 ,123 ,"O");              //lens1 parts of lens
      outtextxy(270 ,123 ,"F");

      for(i=0 ;i<135 ;i++)
      {

      line(60 ,70 ,35+i ,70);
      line(60 ,170 ,35+i ,170);
      delay(20);                             //1
      }

      for(i=0,j=0 ;i<50,j<50 ;i+=2,j++)
      {
      line(170 ,70 ,170+i ,70+j);
      line(170 ,170 ,170+i ,170-j);
      delay(20);
      }                                      //1

      outtextxy(30 ,25 ,"Object: At Infinity");
      outtextxy(30 ,35 ,"Image: At Focus");

      outtextxy(475 ,123 ,"O");              //lens2 parts of lens
      outtextxy(375 ,123 ,"C");
      outtextxy(425 ,123 ,"F");              //left focus
      outtextxy(525 ,123 ,"F");
      outtextxy(575 ,123 ,"C");

      line(360 ,80 ,360 ,120);
      line(360 ,80 ,357 ,83);
      line(360 ,80 ,363 ,83);                //object2

      for(i=0 ;i<118 ;i++)
      {
      line(360 ,80 ,360+i ,80);
      delay(20);
      }                                      //2

      for(i=0,j=0 ;i<80;i++,j++)
      {
      line(478 ,80 ,478+i ,80+j);
      delay(20);
      }					     //2

      for(i=0,j=0 ;i<198,j<65 ;i+=3,j++)
      {
      line(360 ,80 ,360+i ,80+j);
      delay(20);
      }                                      //2

      line(538 ,120 ,538 ,138);              //image2
      line(538 ,138 ,535 ,135);
      line(538 ,138 ,541 ,135);

      outtextxy(380 ,30 ,"Object: Beyond C");
      outtextxy(380 ,40 ,"Image: Between C and F");

      outtextxy(170 ,364 ,"P");
      outtextxy(240 ,364 ,"C");
      outtextxy(100 ,364 ,"C");

      line(100 ,360 ,100 ,330);
      line(100 ,330 ,97 ,333);
      line(100 ,330 ,103 ,333);		    //object3

      for(i=0 ;i<71 ;i++)
      {
      line(100 ,330 ,100+i ,330);
      delay(20);                            //3
      }

      for(i=0,j=0 ;i<150,j<71 ;i+=(7/3),j++)
      {
      line(100 ,330 ,100+i ,330+j);
      delay(20);
      }                                     //3

      for(i=0,j=0 ; i<78,j<68;i+=7/6,j++)
      {
      if(j>66)
      {
	break;
      }
      line(170 ,330 ,170+i ,330+j);
      delay(20);
      }                                     //3

      line(240 ,360 ,240 ,398);
      line(240 ,398 ,237 ,395);
      line(240 ,398 ,243 ,395);             //image3

      outtextxy(60 ,270 ,"Object: At C");
      outtextxy(60 ,280 ,"Image: At C");

      outtextxy(435 ,363 ,"F");
      outtextxy(395 ,363 ,"C");
      outtextxy(475 ,367 ,"P");
      outtextxy(515 ,363 ,"F");
      outtextxy(555 ,363 ,"C");

      line(415 ,360 ,415 ,330);
      line(415 ,330 ,413 ,332);
      line(415 ,330 ,417 ,332);             //object4

      for(i=0 ;i<61 ;i++)
      {
      line(415 ,330 ,415+i ,330);
      delay(20);
      }                                      //4

      for(i=0,j=0 ;i<91,j<105;i+=1.5,j++)
      {
      line(475 ,330 ,475+i ,330+j);
      delay(20);
      }                                      //4

      for(i=0,j=0 ;i<164,j<103 ;i++,j++)
      {
      line(415 ,330 ,415+i*(1.6) ,330+j);
      delay(20);
      }                                      //4

      line(578 ,360 ,578 ,433);
      line(578 ,433 ,575 ,430);
      line(578 ,433 ,581 ,430);		     //image4

      outtextxy(380 ,270 ,"Object: Between F and C");
      outtextxy(380 ,280 ,"Image: Beyond C");
Pause();
}

void page_12()
{
      rectangle(0 ,0 ,getmaxx() ,getmaxy());
      line(0 ,15 ,getmaxx() ,15);
      outtextxy(getmaxx()/4+70 ,6 ,"Esc Aborts The Program..!");

      arc( 42, 120, -30, 30, 150);           //lens5
      arc( 300, 120, 150, 210, 150);          //lens5
      arc( 350, 120, -30, 30, 150);           //lens6
      arc( 610, 120, 150, 210, 150);          //lens6

      line(60 ,120 ,280 ,120);               //principal axis 5
      line(350 ,120 ,600 ,120);              //principal axis 6

      outtextxy(170 ,123 ,"O");              //lens5 parts of lens
      outtextxy(120 ,123 ,"F");

      line(120 ,120 ,120 ,80);
      line(120 ,80 ,117 ,83);
      line(120 ,80 ,123 ,83);                //object5

      for(i=0 ;i<50 ;i++)
      {

      line(120 ,80 ,120+i ,80);
      delay(20);                             //5
      }

      for(i=0,j=0 ;i<50,j<50 ;i+=1,j++)
      {
      line(170 ,80 ,170+i*100/66 ,80+j);
      delay(20);
      }                                      //5

      for(i=0,j=0 ;i<61,j<54 ;i+=1,j++)
      {
      line(120 ,80 ,120+i*50/41 ,80+j);
      delay(30);
      }                                      //5

      outtextxy(30 ,25 ,"Object: At Focus");
      outtextxy(30 ,35 ,"Image: At Infinity");

      outtextxy(475 ,123 ,"O");              //lens6 parts of lens
      outtextxy(375 ,123 ,"C");
      outtextxy(425 ,123 ,"F");              //left focus
      outtextxy(525 ,123 ,"F");
      outtextxy(575 ,123 ,"C");

      line(440 ,100 ,440 ,120);
      line(440 ,100 ,437 ,103);
      line(440 ,100 ,443 ,103);                //object6

      for(i=0 ;i<41 ;i++)
      {
      line(440 ,100 ,440+i ,100);
      delay(20);
      }                                      //6

      for(i=0,j=0 ;j<21;i++,j++)
      {
      line(480 ,100 ,480+i*45/20 ,100+j);
      delay(20);
      }					     //6

      for(i=0,j=0 ;j<85 ;i+=1,j++)
      {
      line(525 ,120 ,525-i*45/20 ,120-j);
      delay(20);
      }
					   //6
      for(i=0,j=0 ;j<85 ;i++,j++)
      {
      line(475 ,120 ,475-i*35/22 ,120-j);
      delay(20);
      }

      line(357 ,120 ,357 ,44);              //image6
      line(357 ,44 ,354 ,47);
      line(357 ,44 ,360 ,47);

      outtextxy(380 ,30 ,"Object: Between P and F");
      outtextxy(380 ,40 ,"Image: Behind the lens");

      rectangle(0 ,getmaxy()/2 ,getmaxx() ,getmaxy());
      line(0 ,getmaxy()/2+30 ,639 ,getmaxy()/2+30);
      line(0 ,305 ,639 ,305);
      line(0 ,340 ,639 ,340);
      line(0 ,375 ,639 ,375);
      line(0 ,410 ,639 ,410);
      line(0 ,445 ,639 ,445);
      line(160 ,240 ,160 ,479);
      line(320 ,240 ,320 ,479);
      line(480 ,240 ,480 ,479);

      settextstyle(0 ,HORIZ_DIR ,1);
      outtextxy(7 ,250      ,"Position Of Object");
      outtextxy(170 ,250    ,"Position Of Image");
      outtextxy(350 ,250    ,"Size Of Image");
      outtextxy(500 ,250    ,"Nature Of Image");
      outtextxy(40 ,287     ,"At Infinity");
      outtextxy(50 ,322     ,"Beyond C");
      outtextxy(67 ,357     ,"At C");
      outtextxy(20 ,392     ,"Between C and F");
      outtextxy(67 ,427     ,"At F");
      outtextxy(20 ,462     ,"Between P and F");
      outtextxy(40+160 ,287 ,"At the Focus");
      outtextxy(27+160 ,322 ,"Between F and C");
      outtextxy(67+160 ,357 ,"At C");
      outtextxy(45+160 ,392 ,"Beyond C");
      outtextxy(40+160 ,427 ,"At Infinity");
      outtextxy(15+160 ,462 ,"Behind the LENS ");
      outtextxy(14+320 ,280 ,"Highly Diminished");
      outtextxy(35+320 ,290 ,"Point Sized");
      outtextxy(37+320 ,322 ,"Diminished");
      outtextxy(40+320 ,357 ,"Same Size");
      outtextxy(43+320 ,392 ,"Enlarged");
      outtextxy(20+320 ,427 ,"Highly Enlarged");
      outtextxy(43+320 ,462 ,"Enlarged");
      outtextxy(10+480 ,287 ,"Real and Inverted");
      outtextxy(10+480 ,322 ,"Real and Inverted");
      outtextxy(10+480 ,357 ,"Real and Inverted");
      outtextxy(10+480 ,392 ,"Real and Inverted");
      outtextxy(10+480 ,427 ,"Real and Inverted");
      outtextxy(10+480 ,462 ,"Virtual and Erect");
Pause();
}

void Pause(void)
{
  int c;

  c = getch();				/* Read a character from kbd	*/

  if( ESC == c )
  { 					/* Does user wish to leave?	*/
    closegraph();			/* Change to text mode		*/
    exit( 1 );				/* Return to OS 		*/
  }

  if( 0 == c )
  { 		 			/* Did use hit a non-ASCII key? */
    c = getch();			/* Read scan code for keyboard	*/
  }

  cleardevice();			/* Clear the screen		*/

}
# Optics
