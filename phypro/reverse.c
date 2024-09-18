#include <stdio.h>
int main(){
    char txt[100];
    int len = 0;
    scanf("%[^\n]", txt);
    for(int i=0; txt[i] != '\0'; i++){
        len++;
}
for(int j=len-1;j>=0;j--){
    printf("%c", txt[j]);
}
return 0;
}