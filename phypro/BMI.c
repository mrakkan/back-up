#include <stdio.h>
int main(){
    int num1;
    int num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    float m2 = num1*0.01;
    float cal = num2/(m2*m2);
    printf("%f", cal);
    return 0;
}
