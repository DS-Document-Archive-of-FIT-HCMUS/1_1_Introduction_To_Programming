// Function main()

#include "IntArray.h"

int main(){
    int a[100];
    int n = 0;  // n <= 100
    
    nhapMang(a, n);
    
    printf("Mang a: ");
    xuatMang(a, n);
    printf("\n");
    
    int kq = duongDauTien(a, n);
    if(kq == -1){
        printf("Mang a ko co so duong nao ca\n");
    }
    else{
        printf("So duong dau tien: %d\n", kq);
    }
    
//    kq = duongNhoNhatC1Nhan(a, n);
//    if(kq == -1){
//        printf("Mang a ko co so duong nao ca\n");
//    }
//    else{
//        printf("So duong nho nhat: %d\n", kq);
//    }
    
    kq = duongNhoNhatC2TriVy(a, n);
    if(kq <= 0){
        printf("Mang a ko co so duong nao ca\n");
    }
    else{
        printf("So duong nho nhat: %d\n", kq);
    }
    
    if(ktMangTang(a, n) == true){
        printf("Mang a tang\n");
    }
    else{
        printf("Mang a ko tang\n");
    }
    
    int b[100];
    int m = 0;
    lietKeAm(a, n, b, m);
    if(m == 0){
        printf("Mang a ko co so am nao ca\n");
    }
    else{
        printf("Cac so am trong mang a: ");
        xuatMang(b, m);
        printf("\n");
    }
    
    sapGiam(a, n);
    printf("Mang a sau khi sap giam: ");
    xuatMang(a, n);
    printf("\n");
    
    them(a, n, 100, 1);
    printf("Mang a sau khi them: ");
    xuatMang(a, n);
    printf("\n");
    
    return 0;
}
