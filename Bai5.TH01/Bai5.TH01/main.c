//
//  main.c
//  Bai5.TH01
//
//  Created by le thanh tung on 12/11/2023.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
//    Viết chương trình tính căn bậc k của một số x nhập vào từ bàn phím. Yêu cầu không sử dụng hàm pow().
    // Khai báo biến để lưu số x và k
      float x, k;

      // Nhập số x và k từ bàn phím
      printf("Nhập số x: ");
      scanf("%f", &x);
      printf("Nhập số k: ");
      scanf("%d", &k);

      // Tính căn bậc k của x bằng cách sử dụng phép chia lặp
      float y = x;
      while (y * y < x) {
        y = (y + x / y) / 2;
      }

      // Hiển thị kết quả
      printf("Căn bậc %d của %.2f là %.2f\n", k, x, y);
    

    
    return 0;
}
