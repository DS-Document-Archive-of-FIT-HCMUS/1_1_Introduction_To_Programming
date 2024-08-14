#include <iostream>
#include <stdio.h>
#include <math.h>
/////MSSV: 21120201
/////Ten: Bui Dinh Bao
using namespace std;
// Khai bao ham 
int csln(int n);
// Ham main
int main() {
	int n;
	//Input
	printf("Nhap n=");
	scanf_s("%d", &n);
	//Process
	/////////////////////
	//Output
	printf("Co chu so lon nhat la: %d", csln(n));
	return 0;
}
// Dinh nghia ham
int csln(int n) {
	int S = 0;
	do {
		if ((n % 10) > S) {
			S = n % 10;
		}
		n = n - n % 10;
		n = n / 10;
	} while (n != 0);
	return S;
}