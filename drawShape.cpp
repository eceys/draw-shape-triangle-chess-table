#include <stdio.h>
#include <conio.h>

int main(){
	
	int top;
	
	for(int a=1;a<=5;a++){
		for(int b=1;b<=5;b++){
			top=(a+b);
			if(top%2==0){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	printf("\n\n\n\n");
	
	int x=0;
	
	for(int a=1;a<=5;a++){
		x=x+1;
		for(int b=0;b<x;b++){
			printf("*");
		}
		printf("\n");
	}
	
	
	printf("\n\n\n\n");
	
	int y=4,z=1;
	
	for(int a=0;a<5;a++){
		for(int b=0;b<y;b++){
			printf(" ");
		}
		for(int c=0;c<z;c++){
			printf("*");
		}
		printf("\n");
		z=z+2;
		y--;
	}
	
	getch();
	return 0;
}
