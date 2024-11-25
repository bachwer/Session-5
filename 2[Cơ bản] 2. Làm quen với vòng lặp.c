#include <stdio.h>

int main(){
    int num = 5;
    int numUser;
    
    do{
    printf("Enter your number: ");
    scanf("%d", &numUser);
        if(num == numUser){
            printf("true");
        }
    }while(num != numUser);

    return 0;
} 
