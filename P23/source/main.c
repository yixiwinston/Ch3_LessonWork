#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void FRD(int x);
void RD(int x, int y);
int RollDice();

int D1, D2;
char status;

void main() {

	int i;
	int sum;
	int goal;

	char select = ' ';

	unsigned seed;
	srand(time(NULL));
	

	while (1){

	printf("�n���n�Ӥ@����?(y/n)");
	Re:printf("\n");

		select = ' ';
		
		scanf_s("%c", &select);

		if (select == 'n') {
			printf("�n���L��QAQ\n\n");
			break;
		}
		else if (select == 'y') {

			printf("���ǳƭn��Ĥ@���o~~~\n\n");
			system("pause");
			printf("\n");

			sum = RollDice();
			FRD(sum);
			if (status == 'W' || status == 'L')
				goto Re;

			else {
				goal = sum;

			DoRD:
				sum = RollDice();
				RD(sum, goal);
				if (status == 'W' || status == 'L')
					goto Re;
				else
					goto DoRD;

			}
		
		}
		
	}

}

int RollDice() {
	
	int Ftotal;

	D1 = 1 + rand() % 6;
	D2 = 1 + rand() % 6;

	Ftotal = D1 + D2;

	printf("�A�z�X���Ʀr��[%d]�M[%d]�A�@%d�I\n\n", D1, D2, Ftotal);

	return Ftotal;
}

void FRD(int x,char z) {

	switch (x) {

	case 2:
	case 3:
	case 12:
		printf("�ӥi���F�A�A��FQwQ\n\n���s�A�ӹL�a:)\n\n\n");
		status = 'L';
		break;

	case 7:
	case 11:
		printf("�ѰڧAĹ�F�A�B��ܦn��AwA\n\n\n");
		status = 'W';
		break;

	default:
		printf("�A���ؼ��I�O:%d\n�p�G�A���L���ܡA�A�NĹ�a:)\n���b�o���e�A�Y���7���ܡA�A�N���o*x*\n\n", x);
		printf("�ǳƦn�N�i�H�A��@���o~~~\n\n");
		system("pause");
		printf("\n");

	}

}
void RD(int x,int y) {

	if (x == y) {
		printf("�ѰڧAĹ�F�A�B��ܦn��AwA\n\n\n");
		status = 'W';
	}
	else {
		switch (x) {

		case 7:
			printf("�ӥi���F�A�A��FQwQ\n\n���s�A�ӹL�a:)\n\n\n");
			status = 'L';
			break;
		default:
			printf("�ݨӨS�����O�A���L�A�٬O��G�|��:)\n\n");
			printf("�ǳƦn�N�i�H�A��@���o~~~\n\n");
			system("pause");
			break;
		}
	}
}