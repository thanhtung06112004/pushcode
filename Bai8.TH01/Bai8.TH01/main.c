//
//  main.c
//  Bai8.TH01
//
//  Created by le thanh tung on 12/11/2023.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
//    Viết chương trình nhập vào bán kính của hình tròn. Hãy tính chu vi và diện tích của hình tròn này.
    

//   khai báo biến để lưu toạ độ và bán kính của hình tròn
    float x, y, r;
    
//    nhập toạ độ và tâm bán kính của hình tròn từ bàn phím
    printf("Nhap toa do x tu tam ban kinh hinh tron: ");
    scanf("%f", &x);
    printf("Nhap toa do y tu tam ban kinh hinh tron: ");
    scanf("%f", &y);
    printf("Nhap toa do r tu tam ban kinh hinh tron: ");
    scanf("%f", &r);
    
//    tính chu vi của hình tròn
    float perimiter = 2 * M_PI * r;
//    tính diện tích hình tròn
    float area = M_PI * r * r;
    
//    in kết quả ra màn hình
    printf("chu vi cua ban kinh hinh tron la %.2f\n", perimiter);
    printf("dien tich cua ban kinh hinh tron la %.2f\n", area);
    
    
    
    
    return 0;
}
