#include <stdio.h>
#include <ctype.h>
#include <string.h>

void convert_case(char txt[]) {
    for (int i = 0; i < strlen(txt); i++) {
        if (islower(txt[i])) {
            txt[i] = toupper(txt[i]);
        } else if(isupper(txt[i])){
            txt[i] = tolower(txt[i]);
        }
        else{
            continue;
        }
    }
}

int main() {
    char txt1[101];
    char txt2[101];
    int check = 1;

    scanf("%[^\n]\n", txt1);
    scanf("%[^\n]", txt2);
    convert_case(txt1);
    convert_case(txt2);
    for(int i = 0; i < strlen(txt1); i++){
        if(tolower(txt1[i])!=tolower(txt2[i])){
            check = 0;
            break;
        }
            }
    if(check == 1){
        printf("*** Results ***\n");
        printf("%s\n%s\n", txt1, txt2);
        printf("***************\n");
        printf("Both strings are the same.\n");
    }
    else{
        printf("*** Results ***\n");
        printf("%s\n%s\n", txt1, txt2);
        printf("***************\n");
        printf("Both strings are not the same.\n");
    }

    return 0;
}
