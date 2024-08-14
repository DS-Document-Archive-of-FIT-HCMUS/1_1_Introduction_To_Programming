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
    s = 0;
    tu = 1;
    mau = 0;
    
    for(int i = 1; i <= n; i++)
    {
        tu = tu * x;
        mau = mau + i;
        s = s + tu / mau;
    }
    
    printf("S = %0.3lf", s);
    
    return 0;
}
