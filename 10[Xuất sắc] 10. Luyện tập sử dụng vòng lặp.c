#include <stdio.h>

int main() {
    int num;
    int num2[100];
    int i = 1;
    
    printf("Enter your number: ");
    scanf("%d", &num);
    
    if (num < 0){
        num = -num;
        
    }
        
    while(num  > 0){
      num2[i] = num % 10;
      num /= 10;
      i++;
    }
    
    int u = i -1 ;
    i--;
    for(int y = 0; y < u; y++){
    printf("%d ",num2[i]);
    i--;
    }
  
    return 0;
        
    }
        
        








