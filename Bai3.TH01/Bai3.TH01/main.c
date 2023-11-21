//
//  main.c
//  Bai3.TH01
//
//  Created by le thanh tung on 12/11/2023.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
//    Viết chương trình tính Sin, Cos của một số x nhập vào từ bàn phím, với x là số độ cần tính.
    
//    khai báo để lưu số dộ
    float x;
    
//    nhập số độ từ bàn phím
    printf("Nhap so do: ");
    scanf("%f", &x);
    
//    tính sin và cos của x
    float sinx = sin(x * M_PI / 180);
    float cosx = cos(x * M_PI / 180);
    
//    hiển thị kết quả
    printf("sin(%1.f) = %2.f\n", x, sinx);
    printf("cos(%1.f) = %2.f\n", x, cosx);
    
    return 0;
}
