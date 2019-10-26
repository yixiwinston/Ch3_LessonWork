#include<stdio.h>
#include<stdlib.h>

int factorial(int x);

int main() {

	int n;
	int sum;
	while (1) {

		printf("Enter an integer(-1 to end) ");
		scanf_s("%d",&n);

		if (n == -1)
			break;

		sum = factorial(n);
		printf("The product is %d\n\n", sum);

	}



	system("pause");
	return 0;

}
int factorial(int x) {

	int total = 1;

	if (x > 0) {
		total = x * factorial(x-1);
		return total;
	}
	else
		return 1;
}