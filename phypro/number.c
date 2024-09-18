#include <stdio.h>
#include <math.h>
int main(){
    int num;
    scanf("%d", &num);
    int new = floor(num / 1000);
    int cal = num - (new * 1000);
    printf("%d%d", cal, new);
    return 0;
}

