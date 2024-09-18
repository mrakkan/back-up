#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
    struct Record *next;
};

struct Record* createRecord(char* id, char* name, long salary, long sales) {
    struct Record* newNode = (struct Record*)malloc(sizeof(struct Record));
    strcpy(newNode->id, id);
    strcpy(newNode->name, name);
    newNode->salary = salary;
    newNode->sales = sales;
    newNode->next = NULL;
    return newNode;
}

void addRecord(struct Record** head, char* id, char* name, long salary, long sales) {
    struct Record* newNode = createRecord(id, name, salary, sales);
    newNode->next = *head;
    *head = newNode;
}

struct Record* findRecord(struct Record* head, char* searchID) {
    struct Record* run = head;
    while (run) {
        if (strcmp(run->id, searchID) == 0) {
            return run;
        }
        run = run->next;
    }
    return NULL;
}



int main() {
    struct Record* head = NULL;
    char searchID[10];
    struct Record* record;
    int n;

    scanf("%d", &n);
    if(n == 0){
        printf("ID not found !!!");
    }
    else{
    for (int i = 0; i < n; i++) {
        char id[10];
        char name[100];
        long salary, sales;
        scanf(" %s %s %ld %ld", id, name, &salary, &sales);
        addRecord(&head, id, name, salary, sales);
    }

    scanf("%s", searchID);
    record = findRecord(head, searchID);
    if (record) {
    double commission = record->sales * 0.02;
    double totalIncome = record->salary + commission;

    printf("%s\n", record->id);
    printf("%s\n", record->name);
    printf("%ld\n", record->sales);
    printf("%.2lf\n", commission);
    printf("%ld\n", record->salary);
    printf("%.2lf", totalIncome);
    } else {
        printf("ID not found !!!");
    }
    }

    return 0;
}



