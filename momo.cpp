#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<graphics.h>
int main()
{
	int gd=DETECT, gm;
	initgraph(&gd,&gm,"");
	int i,j;
	setbkcolor(GREEN);
	
	for(i=0;i<5;i++)
	{
		settextstyle(10,0,5);
		outtextxy(210,150,"loading");
		setfillstyle(1,RED);
		circle(300,200,5);
		floodfill(300,200,WHITE);
		delay(100);
		
		setfillstyle(1,RED);
		circle(320,200,5);
		floodfill(320,200,WHITE);
		delay(100);
		
		setfillstyle(1,RED);
		circle(340,200,5);
		floodfill(340,200,WHITE);
		delay(100);
		
		cleardevice();
		delay(100);

	}
	//loop for before  accident 
	for(i=0;i<160;i++)
	{
    /* rectangle(110,100,190,200);//house body
     line(100,100,150,50);//roof
	  line(150,50,200,100);//roof
	 line(100,100,200,100);//roof
	rectangle(150,150,170,200);//door
	rectangle(115,160,140,180);//window
	
	rectangle(80,200,220,220);
	
	line(170,220,20,300);
	line(150,220,0,300);*/
	
	
	
	line(0,90,100,10);//mountain
	line(100,10,300,120);//mountain
	line(260,110,400,10);//mountain
	line(400,10,700,120);//mountaion
	
		circle(450-i,300,15);//head 
	   line(450-i,315,450-i,350);//body
	   line(450-i,335,500-i,350);//right hand
	   line(450-i,335,395-i,350);//left hand
	   
	   rectangle(430-i,395,480-i,395);//ski
	   circle(435-i,400,5);
	   circle(470-i,400,5);
	   
	    line(450-i,350,475-i,400);//left foot
	   line(450-i,350,435-i,400);//right foot
	   delay(5);
	   
	   
	   
	   //	line(150+i,380,180+i,375);
	
	   line(0,400,700,400);//road
	
		rectangle(325,200,335,400);//pole
		rectangle(10+i,350,80+i,385);
		rectangle(80+i,300,120+i,385);
		circle(30+i,385,15);
		circle(97+i,385,15);
		if(i%2==0)
		{
			line(15+i,385,45+i,385);
			line(30+i,370,30+i,400);
			
			line(97+i,370,97+i,400);
			line(97-15+i,385,97+15+i,385);
		
			delay(10);
			//cleardevice();
		}
		else
		{
			line(20+i,380,40+i,390);
			line(20+i,390,40+i,380);
			
			line(87+i,380,107+i,390);
			line(110+i,380,87+i,390);
			delay(10);
		}
		if(i==159)
		{

			
			settextstyle(10,0,3);
			//loop for after  accident 
			for(j=0;j<100;j++)
			{
				/* rectangle(110,100,190,200);//house body
     line(100,100,150,50);//roof
	  line(150,50,200,100);//roof
	 line(100,100,200,100);//roof
	rectangle(150,150,170,200);//door
	rectangle(115,160,140,180);//window
		rectangle(80,200,220,220);
	
	line(170,220,20,300);
	line(150,220,0,300);*/
	
				outtextxy(100,100," oooo N0000   GOT ACCIDENT!!!!!!!");
					rectangle(325,200,335,400);//pole
				rectangle(169,350,249,385);
		        rectangle(249,300,200,385);
	         	circle(110,385,15);
	         	circle(256,385,15);
				circle(300+j,300-j,15);//head
	             line(300+j,315+j,300+j,350+j);//body
	              line(300+j,335+j,350+j,350+j);
	               line(300+j,335+j,250+j,350);
	               line(300+j,350+j,350+j,400+j);
	               line(300,350,250,400);
	             line(0,400,700,400);//road
	             delay(10);
	             cleardevice();
			}
		}
	   delay(10);no
	   cleardevice();
	   

		
	}
	getch();
	closegraph();	
}
