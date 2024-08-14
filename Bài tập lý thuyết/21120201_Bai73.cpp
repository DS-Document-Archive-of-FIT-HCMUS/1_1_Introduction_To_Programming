#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
//MSSV: 21120201
//Ten: Bui Dinh Bao
int main() {
	int n;
	float x;
	float S = -1, L = 1;
	//INPUT
	printf("Nhap n=");
	scanf_s("%d", &n);
	printf("Nhap x=");
	scanf_s("%f", &x);
	//
	for (int i = 1; i <= n; i++) {
		//L chinh la giai thua o duoi mau
		L = L * (2 * i - 1) * (2 * i);
		//Dung ham pow(a,b) = a ^ b
		S += pow(-1, i + 1) * pow(x, 2 * i) / L;
	}
	//OUTPUT
	printf("Ket qua S=%0.3f", S);
	return 0;
}