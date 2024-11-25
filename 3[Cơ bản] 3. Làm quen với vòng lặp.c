#include <stdio.h>

int main(){
    int num = 0;
    int numUser, num1;
    
    printf("Enter your number: ");
    scanf("%d", &numUser);
    
    if(numUser < 0){
        printf("invalid !!");
        return 1;
    }
    
    while(numUser != num ){
    num++;
    num1 = num1 + num;
    }
    printf("%d", num1);
    
    return 0;
}
