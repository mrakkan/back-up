#include <stdio.h>
int main(){
    char num[5];
    scanf("%s", num);
    printf("%.1s", num);
    printf("%82.2s", num);
    printf("%82.3s", num);
    printf("%82.4s", num);
    printf("%82.5s", num);
    return 0;
}