#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
//MSSV: 21120201
//Ten: Bui Dinh Bao
int main() {
	int n;
	float x;
	float S = 0, L = 1;

	//INPUT n
	printf("Nhap n=");
	scanf_s("%d", &n);

	//INPUT x
	printf("Nhap x=");
	scanf_s("%f", &x);

	for (int i = 1; i <= n; i++) {
		//L chinh bang mau so 
		L = L * i;
		//Dung ham luy thua a^b = pow(a,b)
		S = S + pow(x, i) / L; 
	}

	//OUTPUT ket qua bai 17
	printf("Ket qua S=%0.3f", S);
	return 0;
}