#include<stdio.h>

const int m = 350;
float total(int hour);
void change(int hour);
int hour,pay;

main(){
	
    printf("ENTER HOUR:");   scanf("%d", &hour);
	printf("ENTER PAY:");    scanf("%d",&pay);
	change(hour);
}
float total(int hour){
	 float sum;
	sum = hour * m;
	printf("Total %.0f\n",sum);
	return sum;
}
void change(int hour){
	float fun;
	fun =   pay - total(hour);
	printf("change %.0f",fun);
	
}
