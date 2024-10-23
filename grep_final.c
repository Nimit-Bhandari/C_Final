#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

void grep(FILE *fp, const char *wrd) {
    char line[MAX_LINE_LENGTH];

    while (fgets(line, sizeof(line), fp)) {
        if (strstr(line, wrd) != NULL) {
            printf("%s", line);
        }
    }
}

int main() {
    char wrd[100];
    char filename[100];

    
    printf("Enter word");
    fgets(wrd, sizeof(wrd), stdin);
    wrd[strcspn(wrd, "\n")] = '\0';  

    printf("Enter the filename:");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = '\0';

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    grep(fp, wrd);

    fclose(fp);
    return 0;
}