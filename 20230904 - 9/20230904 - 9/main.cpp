#include <stdio.h>

int main(void)
{
	FILE* fp1 = NULL, * fp2 = NULL;
	char fname1[100], fname2[100];

	printf("ù��° ���� �̸� :");
	fgets(fname1);
	fopen_s(&fp1, fname1, "rt");

	printf("ù��° ���� �̸� :");
	fgets(fname2);
	fopen_s(&fp2, fname2, "wt");

	if (fp1 = NULL || fp2 = NULL)
	{
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	fclose(fp);

	return 0;
}