//
//  main.c
//  Bai4.TH01
//
//  Created by le thanh tung on 12/11/2023.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
//    Viết chương trình tính căn bậc 2 của một số x nhập vào từ bàn phím
    
//    khai báo biến để lưu số x
    float x;
    
//    Nhập số x từ bàn phím
    printf("Nhap so x: ");
    scanf("%f", &x);
    
//    tính căn bậc 2 của x
    float y = sqrt (x);
    
//    hiển thị kết quả
    printf("Can bac 2 cua %.2f la: %.2f\n", x, y);
    return 0;
}
