#include <stdio.h>
#include <ctype.h>
int main(){
    int num=0, renum[1000]={0};
    char temp, result[1000]={0};
    
    scanf("%d", &num);
    char all[num];
    for(int i=0;i<num;i++){
        scanf("%s", &all[i]);
        all[i] = tolower(all[i]);
    }
    for(int j=0;j<num;j++){
        int chk = 0;
        temp = all[j];
        // for(int k=0;k<num;k++){
            if(temp == all[j]){
                chk++;
            }
            if
        // }
        result[j]=temp;
        if(result[j]!=0){
            printf("%c: %d\n", result[j], renum[j]);
        }
    }
    return 0;
}