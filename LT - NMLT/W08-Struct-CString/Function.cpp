#include "Function.h"

void nhapDiem(Point2D &p){
    printf("Nhap x: ");
    scanf("%lf", &p.x);
    printf("Nhap y: ");
    scanf("%lf", &p.y);
}

void xuatDiem(Point2D p){
    printf("(%0.3lf, %0.3lf)", p.x, p.y);
}

Point2D doiXungQuaGocToaDo(Point2D p){
    Point2D kq;
    kq.x = -p.x;
    kq.y = -p.y;
    return kq;
}

void nhapTamGiac(Triangle &tr){
    printf("Nhap diem A:\n");
    nhapDiem(tr.A); // nhap x, y cua A
    
    printf("Nhap diem B:\n");
    nhapDiem(tr.B); // nhap x, y cua B
    
    printf("Nhap diem C:\n");
    nhapDiem(tr.C); // nhap x, y cua C
}

void nhapMangDiem(Point2D a[], int &n){
    printf("Nhap n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Nhap a[%d]: ", i);
        nhapDiem(a[i]);
    }
}

// char str[] => C => <string.h> => cac ham tien ich
// string str => C++ => <string> => cac ham tien ich
