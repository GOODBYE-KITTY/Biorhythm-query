#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include<iostream>
int main()
{
   int year,mon,mday,x,y,z,a,b,c,d,p,e,i;
   time_t t1,t2;
   int days;
   struct tm tm;
   printf("请输入您的生日以及当前日期，请用逗号隔开:");
   scanf("%d,%d,%d,%d,%d,%d",&year,&mon,&mday,&x,&y,&z);
   memset(&tm, 0, sizeof(tm));//出生到测定天数
   tm.tm_year = year - 1900;
   tm.tm_mon = mon - 1;
   tm.tm_mday = mday;
   t1 = mktime(&tm);
   t2 = time(NULL);
   days = (t2-t1) / (24 * 3600);
   b=0;
   for(i=year;i<=x;i++)//闰年数
    {
		if((i%4==0 && i%100!=0) || i%400==0)
		   b++;
    }

 if(y==2) c=31;//生日离1.1的天数
 else if(mon==3) c=59;
 else if(mon==4) c=90;
 else if(mon==5) c=120;
 else if(mon==6) c=151;
 else if(mon==7) c=181;
 else if(mon==8) c=212;
 else if(mon==9) c=243;
 else if(mon==10) c=273;
 else if(mon==11) c=304;
 else c=334;
 c=c+mday;

 if(mon==2) d=31;//当前日期离1.1的天数
 else if(y==3) d=59;
 else if(y==4) d=90;
 else if(y==5) d=120;
 else if(y==6) d=151;
 else if(y==7) d=181;
 else if(y==8) d=212;
 else if(y==9) d=243;
 else if(y==10) d=273;
 else if(y==11) d=304;
 else d=334;
 d=d+z;

 a=days*365+b-c+d;//计算最后结果
	 p=a%23;
	 e=a%28;
	 i=a%33;
	 if(p==0)
		printf("您的体力处于低潮期\n");
	if(p<12)
		printf("您的体力处于高潮期\n");
	if(p==12)	
		printf("您的体力处于临界期\n");
	if(p>12)	
		printf("您的体力处于低潮期\n");
	if(e==0)
		printf("您的情绪处于低潮期\n");
	if(e<14)
		printf("您的情绪处于高潮期\n");
	if(e==14)
		printf("您的情绪处于临界期\n");
	if(e>14)
		printf("您的情绪处于低潮期\n");
	if(i==0)	
		printf("您的智力处于低潮期\n");
	if(i<17)	
		printf("您的智力处于高潮期\n");
	if(i==17)
		printf("您的智力处于临界期\n");
	if(i>17)	
		printf("您的智力处于低潮期\n");
	 printf("体力=%d\n",p);
	 printf("情绪=%d\n",e);
	 printf("智力=%d\n",i);
	 system("pause");
}
