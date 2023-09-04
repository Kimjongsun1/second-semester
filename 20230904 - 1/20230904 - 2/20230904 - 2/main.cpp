#define MAX 10
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char hello[MAX];
	FILE* fp;
	fp = fopen("hello.txt", "r");
	for (int i = 0; i < 3; i++)
	{
		fgets(hello, sizeof(hello), fp);
		printf("%s", hello);
	}
	fclose(fp);
}