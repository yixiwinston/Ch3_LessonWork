#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void main(void) {

	char str1[60] = "Welcome";
	char str2[60];

	int length;
	strcpy_s(str2, _countof(str1),str1);		//str1's data be copied to str2
	//strcpy_s(����,��ƪ���,�I��)
	printf("String2 = %s\n", str2);

	length = strlen(str2);		// string length = strlen
	printf("�r����׬�%d\n", length);

	system("pause");

}

