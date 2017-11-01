#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
#include<string.h>


int main() {
    int lines = 0;
    FILE *fp = NULL;
    fp = fopen("Windows Server 2012 R2 Key.txt", "r");
    if (fp == NULL) {
        printf("Not opened\n");
        return 1;
    }

    char ptr[1000];
    while (!feof(fp)) {
        fgets(ptr, 1000, fp);
        lines++;


    }
    char** array;
    array = (char**)malloc(lines * sizeof(char*));
    for(int i = 0; i < lines; i++) {
        array[i] = (char *) malloc(1000 * sizeof(char));
    }
    fseek(fp, 0, SEEK_SET);
    int i = 0;
    while (!feof(fp) || i > lines)
    {
        fgets(ptr, 1000, fp);
        strcpy(array[i], ptr);
//        puts(ptr);
//        puts(array[i]);
        i++;
    }

    FILE *fe = NULL;
    fe = fopen("new2.txt", "w+");
    if (fe == NULL) {
        printf("Not opened\n");
        return 1;
    }

    for(int j = (lines-1); j >= 0; j--)
    {
        fputs(array[j], stdout);
        fputs(array[j], fe);
    }

    printf("%d", lines);
    fclose(fp);
    fclose(fe);
    free(array);
//    system("pause");
    return 0;
}