#include <stdio.h>
int main (){
      int hari, jam, menit, detik_a, detik_1, detik_2, detik;
      scanf("%d", &detik_a);
      hari    = detik_a / 86400;
      detik_1 = detik_a % 86400;
      jam     = detik_1 / 3600;
      detik_2 = detik_1 % 3600;
      menit   = detik_2 / 60;
      detik   = detik_2 % 60;
      if (detik_a <= 86400)
      {
            printf("%.2d:%.2d:%.2d\n", jam, menit, detik);
      }
      else if (detik_a > 86400)
      {
            printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
      }
      return 0;
}
