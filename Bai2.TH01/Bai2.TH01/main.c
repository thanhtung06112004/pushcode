//
//  main.c
//  Bai2.TH01
//
//  Created by le thanh tung on 12/11/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    . Hãy nhập vào 2 số nguyên, sau đó hãy tính tổng, hiệu, tích, thương theo mẫu.
    int a, b;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu 2: ");
    scanf("%d", &b);
    
//    tính tổng, tích, thương, hiệu của hai số nguyên.
    int tong = a + b;
    int tich = a * b;
    float thuong = (float)a / b;
    int hieu = a - b;
    
//    hiển thị kết quả
    printf("tong: %d\n", tong);
    printf("tich: %d\n", tich);
    printf("thuong: %.2f\n", thuong);
    printf("hieu: %d\n", hieu);
    

    return 0;
}
