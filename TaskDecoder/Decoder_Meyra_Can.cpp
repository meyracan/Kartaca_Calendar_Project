#include<stdio.h>
#include<stdlib.h>

void decoder(char text[]);
int main()
{
	char text[500] ="zTTTTTUbFGmL6QLWjU-IW7GjH-goKdu1-FiOCnBtcg9VdnySLBa7kfE6LzfQEhVik7d5l8VU_m-7ehUd1fUR3YvEItQLYortilg_HPXaHk6GPJT2qW9pFzQWidrwZZ7b8fUlotkbZ6WPvTlGhMhVcLbsPLqJn2p1KLxTe0Soik-iwk0_5MulJR_YD3pKIGrI6MZakKi43ucc9ARfZdgN6OPnbSIkN2lnpp=="; //Add text pieces here.
	//char x = 'x';
	//printf("%d",x);
	decoder(text);
	
	return 0;
}

void decoder(char text[])
{ 	
	for(int i = 0; i<500; i++)
 	{
 		if((text[i]<=115 && text[i]>=97) || (text[i]<=83 && text[i]>=65))
 		{
 			printf("%c",(text[i]+7));
		}
		else if((text[i]<=122 && text[i]>=116) || (text[i]<=90 && text[i]>=84))
		{
			printf("%c",(text[i]-19));
		}
		else if(text[i] == 32)
		{
			printf(" ");
		}
		else printf("%c",text[i]);
 		
	}
}
