#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
#include<string.h>


int main()
{
	FILE *fp = NULL;
	fopen_s(&fp, "Windows Server 2012 R2 Key.txt", "r");
	if (fp == NULL) {
		printf("Not opened\n");
		return 1;
	}
	FILE *fe = NULL;
	fopen_s(&fe, "new.txt", "w+");
	char ptr[100];
	while (fscanf_s(fp, "%s", ptr, _countof(ptr)) == 1)
	{
		if (strlen(ptr) > 7)
		{
			fprintf_s(fe, "%s\n", ptr);
		}
	}
	fclose(fp);
	fclose(fe);
	system("pause");
	return 0;
}