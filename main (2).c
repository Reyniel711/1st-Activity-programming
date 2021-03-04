#include <stdio.h>

int main() {

	int English, Math, Filipino, Science, Hekasi;

	English = 91;
	Math = 85;
	Filipino = 90;
	Science = 95;
	Hekasi = 88;

	int addSub = English + Math + Filipino + Science + Hekasi;

	float Ave = (float)addSub / 5;

	printf("The average is: %f\n", Ave);


}
