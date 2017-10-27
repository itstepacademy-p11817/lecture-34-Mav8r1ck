#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
#include<string.h>


int main()
{
    FILE *fp = NULL;
    fp = fopen("Windows Server 2012 R2 Key.txt", "r");
    if (fp == NULL) {
        printf("Not opened\n");
        return 1;
    }
    FILE *fe = NULL;
    fe = fopen("new.txt", "w+");
    char ptr[100];
    while (!feof(fp))
    {
        fgets(ptr, 100, fp);
        fputs(ptr, fe);
    }
    fclose(fp);
    fclose(fe);
//    system("pause");
    return 0;
}