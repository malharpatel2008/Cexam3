#include<stdio.h>
int square(int number){
	return number*number;
}
int main(){
	int number;

	printf("enter any number : ");
	scanf("%d",&number);
	printf("square is :%d",square(number));
	
    
}
