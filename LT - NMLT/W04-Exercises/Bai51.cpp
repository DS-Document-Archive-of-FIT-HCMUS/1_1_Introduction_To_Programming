#include<stdio.h>

int main()
{
    long n;
    // n = 2021
    // n = 895794856740
    
    printf("Nhap n: ");
    scanf("%ld", &n);
    
    int temp = n;
    int digit;
    int maxDigit = 0;
    while(temp > 0)
    {
        digit = temp % 10; // 12345 % 10 => 5
        temp = temp / 10; // 12345 / 10 => 1234
        
        if(digit > maxDigit)
        {
            maxDigit = digit;
        }
    }
    
    printf("Chu so lon nhat: %d\n", maxDigit);
    
    // Ki thuat tach cac chu so cua so nguyen duong n
    // Ki thuat tim min va tim max trong day so
    
    return 0;
}


// S(n)
// Uoc so
// Dat co hieu
// Tach chu so % /
// Tim min, max
