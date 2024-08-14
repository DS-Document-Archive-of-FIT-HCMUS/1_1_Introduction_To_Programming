#include<stdio.h>

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    
    // Kien: neu so luong uoc so bang 2, thi n la so nguyen to
    
    // Thanh: so nguyen to la so chi co 2 uoc so, la 1 va chinh n
    // Cac so tu 2 den n-1, deu ko phai la uoc so cua n (neu n la nguyen to)
    bool nguyenTo = true;
    if(n < 2)
    {
        nguyenTo = false;
    }
    else
    {
        for(int i = 2; i <= n-1; i++)
        {
            if(n % i == 0)
            {
                nguyenTo = false;
            }
        }
    }
    
    if(nguyenTo == true)
    {
        printf("n la so nguyen to\n");
    }
    else
    {
        printf("n ko phai la so nguyen to\n");
    }
    
    // Ki thuat dat co hieu
    // Dung cho 2 truong hop:
    // TH1: Phat bieu voi moi => tim 1 vi du de phan bac
    
    // TH2: Phat bieu ton tai => tim 1 vi du de cung co
    // flag = False
    // 1. Duyet qua cac ban sv trong lop
    // 1.1. Neu co 1 ban sv que o mien Bac
    // 1.1.1. flag = True
    
    return 0;
    
}
