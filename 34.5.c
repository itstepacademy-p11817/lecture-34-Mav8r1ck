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
    array = (char**)malloc(lines*1000 * sizeof(char*));
    fseek(fp, 0, SEEK_SET);
    int i = 0;
    while (!feof(fp) || i > lines)
    {
        fgets(ptr, 1000, fp);
        array[i] = ptr;
        puts(ptr);
        puts(array[i]);
        i++;
    }

    FILE *fe = NULL;
    fe = fopen("new2.txt", "w+");
    if (fe == NULL) {
        printf("Not opened\n");
        return 1;
    }

    while(lines >= 0)
    {
        puts(array[lines-1]);
        fputs(array[lines-1], fe);
        lines--;
    }

    printf("%d", lines);
    fclose(fp);
    fclose(fe);
    free(array);
//    system("pause");
    return 0;
}