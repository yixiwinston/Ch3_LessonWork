#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void main(void) {

	char str1[60] = "Welcome";
	char str2[60];

	int length;
	strcpy_s(str2, _countof(str1),str1);		//str1's data be copied to str2
	//strcpy_s(受體,資料長度,施體)
	printf("String2 = %s\n", str2);

	length = strlen(str2);		// string length = strlen
	printf("字串長度為%d\n", length);

	system("pause");

}

