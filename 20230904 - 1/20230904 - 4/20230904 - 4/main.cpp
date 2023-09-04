#define MAX 10
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	FILE* fp;
	fp = fopen("Sunday.txt", "w");
	fputc("hello world", fp);
	fclose(fp);
}