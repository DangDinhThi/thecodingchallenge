#include<stdio.h> 
struct book{ 
	char title[50];	//tieu de
	char author[58]; //tac gia
	int price; //gia ban
	
};  
void nhap(book &a){ 
	scanf("%s %s",&a.title,&a.author); 
	scanf("%d",&a.price);	 	
	} 

void xuat(book a){ 
	printf("\nTitle: %s",a.title); 
	printf("\nAuthor: %s",a.author); 
	printf("\nPrice: %d",a.price); 
} 
int main(){ 
	book a; 
	nhap(a); 
	xuat(a); 

	return 0; 
} 

