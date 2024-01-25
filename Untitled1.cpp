#include<stdio.h>

const int m = 450;
void total(int hour);

main(){
	
	printf("ENTER HOUR:");scanf("%d",&hour);
	total(hour);
}
void total(int hour){
	 float sum;
	sum = hour * m;
	printf("Total %.0f",sum);
}
