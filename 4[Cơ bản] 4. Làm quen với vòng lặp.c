#include <stdio.h>

int main(){
    int numUser, result;
    
    printf("Enter your number: ");
    scanf("%d", &numUser);
    
    if(numUser <= 0 || numUser > 10){
        printf("invalid !!");
        return 1;
    }
    for(int i = 1; i < 11; i++){
        result = i * numUser;
        printf("%d x %d = %d\n", i, numUser, result);
    }
    
    return 0;
}
