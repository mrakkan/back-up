#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void countCha(char *str, int *lowcount, int *upcount, int *digcount){
    *lowcount = 0;
    *upcount = 0;
    *digcount = 0;
    while (*str) {
        if (islower(*str)) {
            (*lowcount)++;
        } else if (isupper(*str)) {
            (*upcount)++;
        } else if (isdigit(*str)) {
            (*digcount)++;
        }
        str++;
    }
}

int main() {
    char *str;
    int lowCount, upCount, digCount;
    str = (char*)malloc(1000 * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    scanf("%[^\n]s\n", str);
    countCha(str, &lowCount, &upCount, &digCount);
    free(str);
    printf("Lowercase letters: %d\n", lowCount);
    printf("Uppercase letters: %d\n", upCount);
    printf("Digits: %d", digCount);

    return 0;
}
