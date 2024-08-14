#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
//MSSV: 21120201
//Ten: Bui Dinh Bao
int main() {
	int n;
	long S = 0;
	//INPUT		
	printf("Nhap n=");	//n la so nguyen duong
	scanf_s("%d", &n);
	//
	for (int i = 1; i <= n; i++) {
		if ((n % i) == 0) {
			S++;
		}
	}
	//OUTPUT
	if (S == 2) {
		printf("%d la so nguyen to", n);
	}
	else {
		printf("%d khong la so nguyen to", n);
	}
	return 0;
}