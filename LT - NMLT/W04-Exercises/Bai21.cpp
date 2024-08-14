#include<stdio.h>
#include <math.h>

int main()
{
    int n;
    long sum = 0;
    
    // INPUT
    printf("Nhap n: ");
    scanf("%d", &n);
    
//    // PROCESS
    for(int i = 1; i <= n; i++)
    {
        // Neu i la uoc so cua n, thi cong vao sum
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }
//    for(int i = 1; i <= sqrt(n); i++)
//    {
//        if(n % i == 0)
//        {
//            if(i == sqrt(n))
//            {
//                sum = sum + i;
//            }
//            else
//            {
//                sum = sum + i + n/i;
//            }
//        }
//    }
    // OUTPUT
    printf("Tong uoc so: %ld\n", sum);
    return 0;
}
