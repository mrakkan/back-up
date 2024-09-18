#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    int num;
    int lo;
    char txt;
    scanf("%d", &num);
    char li1[num];
    int licount = 0;
    int li2[num];
    char run;
    for (int i = 0; i < num; i++) {
        int chk = 0;
        scanf(" %c", &txt);
        run = tolower(txt);
        char *wing = strchr(li1, run);
        if (wing) {
            lo = wing - li1;
            li2[lo]++;
        } else {
            li1[licount] = run;
            li2[licount] = 1;
            licount++;
        }
    }
    for (int k = 0; k < licount; k++) {
        printf("%c: %d\n", li1[k], li2[k]);
    }
    return 0;
}
