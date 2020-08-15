#include<stdio.h>

int main() {
	int choice, high, base, L, R;
	double Area;
	printf("<<<<<<<< MENU >>>>>>>>\n");
	printf("1. Tringle\n");
	printf("2. Square\n");
	printf("3. Circle\n");
	printf("Your choice : ");
	scanf_s("%d", &choice);

	switch (choice) {
	case 1:   // Tringle
		printf("High = ");
		scanf_s("%d", &high);
		printf("Base = ");
		scanf_s("%d", &base);
		Area = 0.5 * high * base;
		printf("Area = %.2f", Area);
		break;
	case 2:   // Square
		printf("length = ");
		scanf_s("%d", &L);
		Area = L * L;
		printf("Area = %.2f", Area);
		break;
	case 3:   // Circle	 	 
		printf("Radius = ");
		scanf_s("%d", &R);
		Area = 3.14 * R * R;
		printf("Area = %.2f", Area);
		break;
	default:
		printf("Wrong Menu!");

	}


}