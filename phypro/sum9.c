#include <stdio.h>
int main(){
    int num, sum = 0;
    do{
        scanf("%d", &num);
        if(num != -9){
        sum += num;
    }
    else{
        break;
    }
    }
    while(num != -9);
    printf("%d", sum);
    return 0;
}