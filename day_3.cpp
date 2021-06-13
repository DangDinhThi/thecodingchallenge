#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	if(n%2!=0){
		printf("Werird");
	}
	if(n%2==0 && n>=2 && n<=5){
		printf("Not Wreird");
		
	}
	if(n%2==0 && n>=6 && n<=20){
		printf("Wreird");
		
	}
	if(n%2==0 && n>20){
		printf("Not Wreird");
		
	}
}
