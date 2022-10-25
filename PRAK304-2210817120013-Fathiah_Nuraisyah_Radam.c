#include <stdio.h>
void main (){
      int angka;
      scanf("%d", &angka);
      if (angka == 0)
            printf("Nol");
      else if (angka >= 1 && angka < 10 )
            printf("Satuan");
      else if (angka >= 10 && angka < 20)
            printf("Belasan");
      else if (angka >= 20 && angka < 100)
            printf("Puluhan");
      else if (angka >= 100)
            printf("Anda Menginput Melebihi Limit Bilangan");
}