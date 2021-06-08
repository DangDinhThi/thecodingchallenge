#include<stdio.h>
struct SV{
	char fname[20];
	char lname[8];
	int id;
	int sc[100];
};

void nhap1sv(SV &a,int n){
	scanf("%s %s %d",&a.fname,&a.lname,&a.id); // nhap ten va id
	scanf("%d",&n);
	for(int i=0;i<n;i++){	// nhap diem 
		scanf("%d",&a.sc[i]);
	}
}
void xuat1sv(SV a,int n){
	printf("Name: %s , %s\nID: %d",a.fname,a.lname,a.id);
}
int tinhdiem(SV a) {	//tinh diem cua sv
    int s=0;
    for(int i=0;i<2;i++){
    	s=s+a.sc[i];
	}
	return s/2;
}
char kiemtra(SV a){
	int b=tinhdiem(a);
	if(b >= 90 && b <= 100 ){
            return '0';
    }else if (b < 90 && b >= 80) {
            return 'E';
    } else if (b < 80 && b >= 70) {
            return 'A';
    } else if (b < 70 && b >= 55) {
            return 'P';
    } else if (b < 55 && b >= 40) {
            return 'D';
    }
    else {
	return 'T';
	}
}


int main(){
	char ch;
	int n;
	SV a;
	nhap1sv(a,n);
	xuat1sv(a,n);
	printf("\nGrace: %c",kiemtra( a));
	return 0;
}
