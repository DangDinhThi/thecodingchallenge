#include<stdio.h> 
struct SV{ 
	char firstname[10]; 
	char lastname[10]; 
	int id; 
	int sc[100]; 
}; 
 
void nhap(SV &a,int n){ 
	printf("\nnhap ten:");
	scanf("%s",&a.firstname);
	printf("\nnhap ho:");
	scanf("%s",&a.lastname);
	printf("\nnhap id:");
	scanf("%d",&a.id);
} 

int phanloai(SV a) {	
    int s=0; 
    int n; 
    printf("\nnhap may lan diem :"); 
   	scanf("%d",&n); 
	for(int i=0; i<n; i++){	 
		scanf("%d",&a.sc[i]); 
	} 
    for(int i=0; i<n; i++){ 
    	s=s+a.sc[i]; //tinh tong diem 
	} 
		s=s/n; //tinh trung binh cong diem  

	if(s >= 90 && s <= 100 ){ 
            return '0'; 
    }else if (s < 90 && s >= 80) { 
            return 'E'; 
    } else if (s < 80 && s >= 70) { 
            return 'A'; 
    } else if (s < 70 && s >= 55) { 
            return 'P'; 
    } else if (s < 55 && s >= 40) { 
            return 'D'; 
    } 
    else { 
	return 'T'; 
	} 
} 
 
int main(){ 	
	int n; 
	SV a; 
	nhap(a,n); 	 
	printf("\nGrace: %c",phanloai( a)); 
	printf("\nName: %s , %s\nID: %d",a.lastname,a.firstname,a.id); 	
	return 0; 
} 

