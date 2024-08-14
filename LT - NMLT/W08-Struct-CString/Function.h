#ifndef Function_h
#define Function_h

#include <stdio.h>

// Bai540
struct Point2D{
    double x;
    double y;
};

// Bai581
struct Triangle{
    Point2D A;
    Point2D B;
    Point2D C;
};

// Bai541
void nhapDiem(Point2D &p);

// Bai542
void xuatDiem(Point2D p);

// Bai546
Point2D doiXungQuaGocToaDo(Point2D p);

void nhapTamGiac(Triangle &tr);

void nhapMangDiem(Point2D a[], int &n);

#endif
