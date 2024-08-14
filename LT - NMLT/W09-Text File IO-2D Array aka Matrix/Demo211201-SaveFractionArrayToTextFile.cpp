#include <stdio.h>
// Nhập 1 mảng phân số từ bàn phím
// Ghi mảng phân số xuống text file

struct PhanSo{
    int tu;
    int mau;
};

void nhapMangPS(PhanSo a[], int &n);
void nhapPS(PhanSo &p);

void ghiMangPS(FILE *f, PhanSo a[], int n);
void ghiPS(FILE *f, PhanSo p);


int main(){
    PhanSo a[100];
    int n = 0;
    
    printf("Nhap mang a tu ban phim:\n");
    nhapMangPS(a, n);
    
    printf("Ghi mang a ra file...\n");
    // B1
    FILE* f = fopen("/Users/htthanh/Desktop/data.pdf", "wt");
    
    // B2
    if(f == NULL){
        printf("Mo file ko thanh cong\n");
    }
    else{
        ghiMangPS(f, a, n);
        fflush(f);
        fclose(f);
    }
    printf("Ket thuc chuong trinh\n");
    return 0;
}

void nhapPS(PhanSo &p){
    printf("Nhap tu: ");
    scanf("%d", &p.tu);
    printf("Nhap mau: ");
    scanf("%d", &p.mau);
}

void nhapMangPS(PhanSo a[], int &n){
    printf("Nhap n: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        printf("Nhap a[%d]: ", i);
        nhapPS(a[i]);
    }
}

void ghiMangPS(FILE *f, PhanSo a[], int n){
    fprintf(f, "%d\n", n);
    for(int i = 0; i < n; i++){
        printf("a[%d]", i);
        ghiPS(f, a[i]);
    }
}

void ghiPS(FILE *f, PhanSo p){
    fprintf(f, "%d %d\n", p.tu, p.mau);
}
