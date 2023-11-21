//
//  main.c
//  Bai7.TH01
//
//  Created by le thanh tung on 12/11/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    Viết chương trình nhập vào 2 cạnh của hình chữ nhật. Hãy tính chu vi và diện tích của hình chữ nhật này.
    
//    nhập khai báo để lưu 2 cạnh của hình chữ nhật
    float a, b;
    
//    Nhập 2 cạnh của hình chữ nhật từ bàn phím
    printf("Nhap canh a: ");
    scanf("%f", &a);
    printf("Nhap canh b: ");
    scanf("%f", &b);
    
//    tính chu vi của hình chữ nhật
    float perimeter = 2 * (a + b);
    
//    tính diện tích của hình chữ nhật
    float area = a * b;
    
//    hiển thị kết qủa
    printf("Chu vi của hinh chu nhat la %.2f \n", perimeter);
    printf("Dien tich cua hinh chu nhat la %.2f\n", area);
    
    
    
    return 0;
}
