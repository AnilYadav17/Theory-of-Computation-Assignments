#include<stdio.h>
#include<string.h>

int main() {
    char input[20];
    char S = 'A';

    printf("Enter your Binary String (0/1):");
    scanf("%s", input);

    for(int i=0; i<=20; i++){
        switch(S){
            case 'A':
            if(input[i] == '0' ) {
                S = 'B';
            }else{
                S = 'A';
            }break;

            case 'B':
            if(input[i] == '0'){
                S = 'B';
            }else{
                S = 'B';
            }break;
        }
    }
    if (S == 'B') printf("Accepted \n");
    else printf("Rejected \n");
    return 0;
}