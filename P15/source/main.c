#include<stdio.h>
#include<stdlib.h>

int cal(void);
int Int[3] = { 0 };

int main() {

	while (1) {

		
		printf("Enter three integers(-1 to end)\n");

		printf("A = ");
		scanf_s("%d",&Int[0]);

		if (Int[0] == -1)
			break;

		printf("B = ");
		scanf_s("%d", &Int[1]);

		printf("C = ");
		scanf_s("%d", &Int[2]);


		printf("The Maximum is %d\n\n", cal());



	}
	system("pause");
	return 0;

}

int cal() {

	int largest = Int[0];

	for (int i = 0; i < 3; i++) {
		if (largest <= Int[i])
			largest = Int[i];
	}
	
	return largest;

}