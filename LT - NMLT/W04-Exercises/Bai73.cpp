#include<stdio.h>

int main()
{
    // x = 3, n = 4
    
    int n;
    double x;
    
    // INPUT
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Nhap x: ");
    scanf("%lf", &x);
    
    // PROCESS
    double s, tu, mau;
    int dau;
    s = -1;
    tu = 1;
    mau = 1;
    dau = 1;
    
    for(int i = 1; i <= n; i++)
    {
        // ko dung ham pow
        tu = tu * x * x;
        mau = mau * (2*i-1) *(2*i);
        s = s + dau * tu / mau;
        dau = -dau;
    }
    
    printf("S = %0.3lf", s);
    
    return 0;
}
