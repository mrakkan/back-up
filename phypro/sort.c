#include <stdio.h>
#include <string.h>
int main(){
    int num;
    double num1, smth;
    double help[100001];
    scanf("%d", &num);
    for (int i=0; i<num; i++){
        scanf("%lf", &num1);
        help[i] = num1;
    }
    for (int i=0; i<num-1; i++){
        for (int j=i+1; j<num; j++){
            if (help[i] > help[j]){
                smth = help[j];
                help[j] = help[i];
                help[i] = smth;
            }
        }
    }
    for (int p=0; p<num; p++){
        printf("%.2lf ", help[p]);
    }
    return 0;
}