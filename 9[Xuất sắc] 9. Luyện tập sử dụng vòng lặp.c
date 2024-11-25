
#include <stdio.h>
int main() {
    int menu;
    int a,b,result;
    do{
    printf("--CALCULATOR--\n");
    printf("1.Tổng 2 số\n");
    printf("2.Hiệu 2 số\n");
    printf("3.Tích 2 số\n");
    printf("4.Thương 2 số\n");
    printf("5.Thoát\n");
    scanf("%d", &menu);
   if(menu > 0 && menu < 5){ 
    printf("Mời nhập số thứ nhất: ");
    scanf("%d", &a);    
    printf("Mời nhập số thứ hai: ");
    scanf("%d", &b);  
   }
    switch(menu){
        case 1: 
         result =  a + b;
         printf("Đáp án là: %d\n", result);
        break;
        case 2: 
            result = a - b;
            printf("Đáp án là: %d\n", result);
        break;
        case 3:
            result = a * b;
            printf("Đáp án là: %d\n", result);
        break;
         case 4:
            float c = (float)a / b;
            printf("Đáp án là: %.2f\n", c);
        break;
        case 5:
            printf("Đẫ thoát !!");
            return 1;
        break;
        default:
        printf("--invalid--\n");
        continue;
        break;
    }
    }while(menu < 5 || menu > 0);
    return 0;
}
  
        



