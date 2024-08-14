// Function definition / Implementation

#include "IntArray.h"

void nhapMang(int a[], int &n){
    printf("Nhap n: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[], int n){
    if(n == 0){
        printf("Mang rong");
    }
    else{
        for(int i = 0; i < n; i++){
            printf("%d ", a[i]);
        }
    }
}

int duongDauTien(int a[], int n){
    for(int i = 0; i < n; i++){
        if(a[i] > 0){
            return a[i];
        }
    }
    return -1;
}

int duongNhoNhatC1Nhan(int a[], int n){
    // đặt kq = a[0] có thể sai!!!
    int kq = duongDauTien(a, n);
    if(kq == -1){
        return -1;
    }
    for(int i = 0; i < n; i++){
        if(a[i] > 0 && a[i] < kq){
            kq = a[i];
        }
    }
    return kq;
}

int duongNhoNhatC2TriVy(int a[], int n){
    int kq = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > 0){
            if(kq <= 0){
                kq = a[i]; // lấy số dương đầu tiên
            }
            else{
                if(a[i] < kq){
                    kq = a[i];
                }
            }
        }
    }
    return kq;
}

bool ktMangTang(int a[], int n){
    // giả sử mảng a tăng
    bool kq = true;
    // với mọi => phản ví dụ
    // 0 -> n-2
    for(int i = 0; i < n-1; i++){
        // tìm xem có 2 số nào kề nhau, ko đúng thứ tự tăng
        if(a[i] > a[i+1]){
            kq = false;
            break;
        }
    }
    return kq;
}
// với mọi
// kq = true
// phản ví dụ
// kq = false

// tồn tại
// kq = false
// ví dụ củng cố
// kq = true

void lietKeAm(int a[], int n, int b[], int &m){
    int j = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < 0){
            b[j] = a[i];
            j++;
        }
    }
    m = j;
}

void sapTang(int a[], int n){
    // bản chất, mỗi lần xong được i, thì phần mảng [0] - [i] tăng dân
    // tìm số nhỏ nhất đẩy vào vị trí a[i]
    for(int i = 0 ; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            // i đứng trước j
            // đang mong muốn mảng a tăng
            // đúng ra, a[i] <= a[j]
            // nên, nếu a[i] > a[j] => hoán vị
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void them(int a[], int &n, int x, int k){
    // 1 2 3 4 5
    // [4]
    
    // x = 100, k = 5
    // 1 2 3 4 5 100
    if(k >= 0 && k <= n){
        // Kéo qua phải 1 ô
        for(int i = n; i > k; i--){
            a[i] = a[i-1];
        }
        // a[k] = x
        a[k] = x;
        n++;
    }
}

void sapGiam(int a[], int n){
    // bản chất, mỗi lần xong được i, thì phần mảng [0] - [i] tăng dân
    // tìm số nhỏ nhất đẩy vào vị trí a[i]
    for(int i = 0 ; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            // i đứng trước j
            // đang mong muốn mảng a giảm
            // đúng ra, a[i] >= a[j]
            // nên, nếu a[i] < a[j] => hoán vị
            if(a[i] < a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void sapTangViTriLe(int a[], int n){
    // bản chất, mỗi lần xong được i, thì phần mảng [0] - [i] tăng dân
    // tìm số nhỏ nhất đẩy vào vị trí a[i]
    for(int i = 0 ; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            // i đứng trước j
            // đang mong muốn mảng a tăng
            // đúng ra, a[i] <= a[j]
            // nên, nếu a[i] > a[j] => hoán vị
            if(i % 2 != 0 && j % 2 != 0 && a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}


