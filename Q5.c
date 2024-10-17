#include<stdio.h>
int main(){
	int x,y;
	printf("enter x value :");
	scanf("%d",&x);
	printf("enter y value :");
	scanf("%d",&y);
	
	x=x+y;
	y=x-y;
	x=x-y;
	printf("x=%d y=%d",x,y);
}
