#include<stdio.h>
#include<stdlib.h>



float power(float x, int y);

int main() {

	float b = 1;
	int e = 1;

	while (1) {

		printf("Enter the power(Base,exponent)__(-1 to end)\n");

		printf("Base = ");
		scanf_s("%f", &b);

		if (b == -1)
			break;

		printf("Exponent = ");
		scanf_s("%d", &e);

		float ans = power(b, e);


		printf("%f\n\n", ans);

	}
	system("pause");
	return 0;

}

//將所有的double改成float，程式才無錯誤。

float power(float x, int y) {
	
	float total = 0;

		if (y >= 1) {
			total = x * power(x, y - 1);
			return total;
		}
		else {
			return 1;
		}

		/*投影片程式___一樣的狀況 使用double的乘法會全部為1.000000

		float powerXn = 1;
		int i;
		for (i = 1; i <= y; i++) {
			powerXn = powerXn * x;
		}
		return powerXn;

		*/

}
