#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

void main() {

	setlocale(LC_ALL, "Rus");

	int n = 0;
	printf("������� ����� ������:\t");
	scanf("%d", &n);

	int A, B, C;

	if (n == 15) {
		/* 15.	���� ��� ����� �����: �,�,�. ��������� ���������� ������������:
		������ ��� �� ����� �,�,� �������� �������������� */

		printf("A=");
		scanf("%d", &A);
		printf("B=");
		scanf("%d", &B);
		printf("C=");
		scanf("%d", &C);
		if (A > 0 && B > 0 && C <= 0) {
			printf("����� ��� �� ����� �,�,� �������� ��������������");
		}
		else if (B > 0 && C > 0 && A <= 0) {
			printf("����� ��� �� ����� �,�,� �������� ��������������");
		}
		else if (A > 0 && C > 0 && B <= 0) {
			printf("����� ��� �� ����� �,�,� �������� ��������������");
		}
		else {
			printf("������� �� ���������\n");
		}
	}

	if (n == 14) {
		/* 14.	���� ��� ����� ����� : �, �, �. ��������� ���������� ������������ :
		������ ���� �� ����� �, �, � ������������� */

		printf("A=");
		scanf("%d", &A);
		printf("B=");
		scanf("%d", &B);
		printf("C=");
		scanf("%d", &C);
		if (A > 0 && B <= 0 && C <= 0) {
			printf("����� ���� �� ����� �, �, � �������������\n");
		}
		else if (B > 0 && A <= 0 && C <= 0) {
			printf("����� ���� �� ����� �, �, � �������������\n");
		}
		else if (C > 0 && A <= 0 && B <= 0) {
			printf("����� ���� �� ����� �, �, � �������������\n");
		}
		else {
			printf("������� �� ���������\n");
		}

	}
	
	if (n == 13) {
		/* 13.	���� ��� ����� �����: �,�,�.
		��������� ���������� ������������: ����� �� ���� �� ����� �,�,� �������������*/

		printf("A=");
		scanf("%d", &A);
		printf("B=");
		scanf("%d", &B);
		printf("C=");
		scanf("%d", &C);
		if (A > 0 || B > 0 || C > 0) {
			printf("���� �� ���� �� ����� �,�,� �������������\n");
		}
		else {
			printf("��� ����� ������������� ��� ����� ����\n");
		}
	}


	if (n == 12) {
		/* 12.	���� ��� ����� ����� : �, �, �.
		��������� ���������� ������������ : ������� �� ����� �, �, � �������������*/

		printf("A=");
		scanf("%d", &A);
		printf("B=");
		scanf("%d", &B);
		printf("C=");
		scanf("%d", &C);
		if (A > 0 && B > 0 && C > 0) {
			printf("������ �� ����� �, �, � �������������\n");
		}
		else {
			printf("�� ������ �� ����� �, �, � �������������\n");
		}
	}


	if (n == 11) {
		/* 11.	���� ��� ����� �����: �, �.
		��������� ���������� ������������: ������ � � � ����� ���������� ���������*/

		printf("A=");
		scanf("%d", &A);
		printf("B=");
		scanf("%d", &B);
		if ((A % 2) == 0 && (B % 2) == 0) {
			printf("����� A � B ����� ���������� ��������\n");
		}
		else {
			printf("����� �� ������ ���������� ��������\n");
		}
	}

	if (n == 10) {
		/* 10.	���� ��� ����� �����: �, �.
		��������� ���������� ������������: ������ ���� �� ����� � � � ��������*/

		printf("A=");
		scanf("%d", &A);
		printf("B=");
		scanf("%d", &B);
		if ((A % 2) == 0 && (B % 2) != 0)
		{
			printf("����� ���� �� ����� � � � ��������\n");
		}
		else if ((A % 2) != 0 && (B % 2) == 0) {
			printf("����� ���� �� ����� � � � ��������\n");
		}
		else {
			printf("������� �� ���������\n");
		}
	}

	if (n == 9) {
		// 9.	���� ��� ����� �����: �,�. ��������� ���������� ������������: ����� �� ���� �� ����� � � � ��������

		printf("A=");
		scanf("%d", &A);
		printf("B=");
		scanf("%d", &B);
		if ((A % 2) || (B % 2) != 0) {
			printf("���� �� ���� �� ����� � � � ��������\n");
		}

		else {
			printf("��� ����� ������\n");
		}
	}

	if (n == 8) {
		// 8.	���� ��� ����� �����: �, �. ��������� ���������� ������������: ������� �� ����� � � � ��������

		printf("A=");
		scanf("%d", &A);
		printf("B=");
		scanf("%d", &B);
		if ((A % 2) && (B % 2) != 0) {
			printf("����� � � � �������� ���������\n");
		}
		else {
			printf("��� ����� �� �������� ���������\n");
		}
	}

	if (n == 7) {
		// 7.	���� ��� ����� �����: �,�,�. ��������� ���������� ������������: ������ � ��������� ����� � � ѻ

		printf("A=");
		scanf("%d", &A);
		printf("B=");
		scanf("%d", &B);
		printf("C=");
		scanf("%d", &C);
		if( (A < B < C) || (A > B > C)) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
	}

	if (n == 6) {
		// 6.	���� ��� ����� �����: �, �, �. ��������� ���������� ������������: ������������ ������� ����������� �<�<ѻ

		printf("A=");
		scanf("%d", &A);
		printf("B=");
		scanf("%d", &B);
		printf("C=");
		scanf("%d", &C);
		if (A < B < C) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
	}

	if (n == 5) {
		// 5.	���� ��� ����� �����: �, �. ��������� ���������� ������������: ������������ ����������� �>0 ��� � < -2�

		printf("A=");
		scanf("%d", &A);
		printf("B=");
		scanf("%d", &B);
		if (A > 0 || B < -2) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
	}


	if (n == 4) {
		// 4. ���� ��� ����� �����: �, �. ��������� ���������� ������������: ������������ ����������� �>2 � � <=3�

		printf("A=");
		scanf("%d", &A);
		printf("B=");
		scanf("%d", &B);
		if (A > 2 && B <= 3) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
	}

	if (n == 3) {
		// 3.	���� ��� ����� �����: �, �. ��������� ���������� ������������: ������ � �������� ��������

		printf("A=");
		scanf("%d", &A);
		if ((A % 2) != 0) {
			printf("����� � �������� ��������\n");
		}
		else {
			printf("����� � �������� ������\n");
		}
	}

	if (n == 2) {
		// 2.	���� ����� ����� �. ��������� ���������� ������������: ������ � �������� ������

		printf("A=");
		scanf("%d", &A);
		if ((A % 2) == 0)
		{
			printf("����� � �������� ������\n");
		}
		else {
			printf("����� � �������� ��������\n");
		}
	}

	if (n == 1) {
		// 1.	���� ����� ����� �. ��������� ���������� ������������: ������ � �������� �������������

		printf("A=");
		scanf("%d", &A);
		if (A > 0)
		{
			printf("����� � �������� �������������\n");
		}
		else
		{
			printf("����� � �������� �������������\n");
		}
	}

	else {
		printf("��� �������\n");
	}

}

	
