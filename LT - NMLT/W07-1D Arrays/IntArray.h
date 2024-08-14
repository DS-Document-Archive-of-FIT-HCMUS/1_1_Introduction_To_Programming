#ifndef _INTARRAY_H_
#define _INTARRAY_H_

#include<stdio.h>

// Function declaration / prototype
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);

int duongDauTien(int a[], int n);
int duongNhoNhatC1Nhan(int a[], int n);

int duongNhoNhatC2TriVy(int a[], int n);

bool ktMangTang(int a[], int n);

void lietKeAm(int a[], int n, int b[], int &m);

void sapTang(int a[], int n);
void sapGiam(int a[], int n);
void sapTangViTriLe(int a[], int n);
void them(int a[], int &n, int x, int k);

#endif

// coding convention
// camelCase: lạc đà, nhapMang
// underscore: nhap_mang
