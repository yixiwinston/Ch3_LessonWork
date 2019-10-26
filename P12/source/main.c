#include<stdio.h>
#include<stdlib.h>

int square(int x);

int main() {

	int y;

	while (1) {
	
		printf("\nEnter an integer(0 to end)\n");
		scanf_s("%d",&y);

		if (y == 0)
			break;
		
		for (int i = 1; i <= y; i++) {
			printf("%d  ", square(i));
		}

	}
	


	system("pause");
	return 0;

}

int square(int x) {

	return x * x;

}