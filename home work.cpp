#include <stdio.h>
float price(int hour);
void change(int pay,int hour);
void poit (int score,int poit);
int score = 5;

main (){
	int hour,pay,p;
	printf("Enter Hour:"); scanf("%d",&hour);
	printf("Enter pay");   scanf("%d",&pay);
	printf("Total:%0.f\n",price(hour)); 
	change(pay,hour);
	
	printf("Enter poit:"); scanf("%d",&p);
	
	poit (score,p);

}

float price(int hour){
	float total = hour*150;
	return total;
}

void change(int pay,int hour){
	int change = pay - price(hour);
	printf("change:%d\n",change);
}
 
 void poit (int score,int poit){
 	 
 	 if (score<=poit){
 	 	printf("pass");
	  }
	  
	  else{
	  	printf("fail");
	  }
 }



