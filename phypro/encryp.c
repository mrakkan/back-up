
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int index;
    char txt[200];
    char p;
    scanf("%[^\n]", txt);
    char lo[] = "abxypqrmncedkljoshtufvzgwi";
    char up[] = "ABXYPQRMNCEDKLJOSHTUFVZGWI";
    char *run1, *run2;
    for (int i = 0; i < strlen(txt); i++){
        p = txt[i];
        if(isupper(p)){
            run1 = strchr(up, p);
            index = run1-up+5;
            if(index < 0){
                index += 26;
            }
            printf("%c", up[index%26]);
        }
        else if(islower(p)){
            run2 = strchr(lo, p);
            index = run2-lo+5;
            if(index < 0){
                index += 26;
            }
            printf("%c", lo[index%26]);
        }
        else{
            printf("%c", p);
        }
    }
    return 0;
}

