#include <stdio.h>

int main(){
    int result;
    for(int a = 1; a < 11; a++){
    for(int i = 1; i < 11; i++){
        result = i * a;
        printf("%d x %d = %d\n", a, i, result);
    }
    printf("------------\n");
    }
    return 0;
}
