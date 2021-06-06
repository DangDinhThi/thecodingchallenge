#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char str[10000];
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
		scanf("%s", str);
        int len = strlen(str);
        for(int i=0; i<len; i++){    
			if(i%2==0){
              printf("%c", str[i]);
            }
        }
    printf(" ");
        for(int i=1; i<len; i++){
            if(i%2!=0){
            printf("%c", str[i]);
            }
        }

        printf("\n");
	}

    return 0;

}	
