#include <stdio.h>
#include <string.h>
int main(){
    char txt;
    int chk = 0, i = 0;
    scanf("%s", txt);
    while(i < strlen(txt)){
        i++;
        if(txt[i] != txt[strlen(txt)-i-1]){
            chk = 1;
            break;
        }
    }
    if (chk == 1){
        printf("It is not Palindrome.");
    }
    else{
        printf("It is Palindrome.");
    }
    return 0;
}
