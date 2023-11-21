//
//  main.c
//  Bai6.TH01
//
//  Created by le thanh tung on 12/11/2023.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
//    Viết chương trình nhập vào 3 cạnh của một tam giác (giả sử số liệu nhập vào luôn đảm bảo tạo thành tam giác). Hãy tính chu vi và diện tích của tam giác này.
    
    // Khai báo biến để lưu ba cạnh của tam giác
      float a, b, c;

      // Nhập ba cạnh của tam giác từ bàn phím
      printf("Nhập cạnh a: ");
      scanf("%f", &a);
      printf("Nhập cạnh b: ");
      scanf("%f", &b);
      printf("Nhập cạnh c: ");
      scanf("%f", &c);

      // Kiểm tra xem ba cạnh có tạo thành tam giác hay không
      if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Ba cạnh không tạo thành tam giác\n");
        return 0;
      }

      // Tính chu vi của tam giác
      float perimeter = a + b + c;

      // Tính diện tích của tam giác theo công thức Heron
      float s = (a + b + c) / 2;
      float area = sqrt(s * (s - a) * (s - b) * (s - c));

      // Hiển thị kết quả
      printf("Chu vi của tam giác là %.2f\n", perimeter);
      printf("Diện tích của tam giác là %.2f\n", area);
    
    return 0;
}
