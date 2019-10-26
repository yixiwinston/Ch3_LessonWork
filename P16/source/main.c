#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main() {

	int a;

	while (1) {

		printf("Enter an integer(-1 to end)\n");
		scanf_s("%d",&a);

		if (a == -1)
			break;

		for (int i = 1; i <= a; i++) {

			printf("%.2f  ", sqrt(i));

		}

		printf("\n\n");

	}



	system("pause");
	return 0;

}