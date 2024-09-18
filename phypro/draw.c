#include <stdio.h>
int main(){
    int num;
    int count = 1;
    int count2;
    scanf("%d", &num);
    count2 = num;
    for (int i = 1; i < num+1; i++){
        
        for (int i = 1; i < num+1; i++){
            if (i == count && i == count2){
                printf("-");
            }
            else if (i == count){
                printf("-");
            }
            else if(i == count2){
                printf("-");
            }
            else{
                printf("#");
            }
        }
        count += 1;
        count2 -= 1;
        printf("\n");
    }
    return 0;
}
