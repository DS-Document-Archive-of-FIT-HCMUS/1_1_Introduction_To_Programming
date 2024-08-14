#include <stdio.h>

// Đọc mảng phân số từ text file
// In mảng phân số ra màn hình

struct PhanSo{
    int tu;
    int mau;
};
// Đọc mảng phân số từ text file
void docMangPS(FILE *f, PhanSo a[], int &n);
void docPS(FILE *f, PhanSo &p);

// In mảng phân số ra màn hình
void xuatMangPS(PhanSo a[], int n);
void xuatPS(PhanSo p);


int main(){
    FILE *f;
    f = fopen("/Users/htthanh/Desktop/data.txt", "rt");
    if(f == NULL){
        printf("Mo file ko thanh cong\n");
    }
    else{
        PhanSo a[100];
        int n = 0;
        docMangPS(f, a, n);
        printf("Mang phan so vua doc tu file\n");
        xuatMangPS(a, n);
    }
    return 0;
}

// Đọc mảng phân số từ text file
void docMangPS(FILE *f, PhanSo a[], int &n){
    fscanf(f, "%d", &n);
    for(int i = 0; i < n; i++){
        docPS(f, a[i]);
//        fscanf(f,"%d", &a[i].tu);
//        fscanf(f, "%d", &a[i].mau);
    }
}

void docPS(FILE *f, PhanSo &p){
    fscanf(f,"%d", &p.tu);
    fscanf(f, "%d", &p.mau);
//    fscanf(f,"%d%d", &p.tu, &p.mau);
}

void docPS(FILE *f, PhanSo &p);

// In mảng phân số ra màn hình
void xuatMangPS(PhanSo a[], int n){
    for(int i = 0; i < n; i++){
        printf("a[%d]: ", i);
        xuatPS(a[i]);
    }
}
void xuatPS(PhanSo p){
    printf("%d / %d\n", p.tu, p.mau);
}
