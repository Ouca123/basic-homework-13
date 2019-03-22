#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int y,s; 
	printf("請輸入年齡和性別");
	scanf("%d,%c",&y,&s);
	
	if(s=='M')
	{ 
	 if(y>=18)
	  printf("你可以結婚喔!");
	 else
	  printf("你不能結婚喔!>w0"); 
	} 
	if (s=='F')
	{
	 if(y>=16)
	   printf("你可以結婚喔!");	
	 else
	   printf("你不能結婚喔!>w0");	
	}
	
 return 0;
}

