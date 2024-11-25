
#include <stdio.h>

int main() {
    int a,b;
    printf("Enter fristr number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    
    if(a < 0 && b < 0){
        printf("invalid");
        return 1;
    }
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    printf("%d", a);

    return 0;
}
