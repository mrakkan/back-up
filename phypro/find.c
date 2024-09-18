#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char txt[300];
    char fi;
    int arr[100];
    int count = 0;
    scanf("%[^\n]", txt);
    scanf(" %c", &fi);
    for(int i=0;i <= strlen(txt);i++){
        fi = tolower(fi);
        txt[i] = tolower(txt[i]);
        if(fi == txt[i]){
            arr[count] = i+1;
            count++;
        }
    }
    if(count != 0){
        printf("There is/are %d \"%c\" in the above sentences. \nPosition: ", count, fi);
        for(int j = 0; j < count ; j++){
        if (j > 0) {
                printf(", ");
            }
        printf("%d", arr[j]);
    }
    }
    else{
        printf("Not found.\n");
    }
    
    return 0;
}