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
    FILE *fe = NULL;
    fe = fopen("new.txt", "a+");
    char ptr[1000];
    while (!feof(fp)) {
        FILE *fe = NULL;
        fe = fopen("new.txt", "a+");
        fgets(ptr, sizeof(ptr), fp);
//        lines++;
        fseek(fe, 0, SEEK_SET);
        fputs(ptr, fe);
        fclose(fe);

    }
/*
    char *array = (char*)malloc(sizeof(ptr) * 64);
    fseek(fp, 0, SEEK_SET);
    while (!feof(fp))
    {
        array = fgets(ptr, 1000, fp);
        puts(array);
//        array[lines-1][sizeof[ptr]

    }
    FILE *fe = NULL;
    fe = fopen("new.txt", "w+");
    for(int i = lines-1; lines >= 0;  lines--){
        ptr[1000] = array[i];
        fputs(ptr, fe);
    }
*/
    printf("%d", lines);
    fclose(fp);
    fclose(fe);
//    system("pause");
    return 0;
}