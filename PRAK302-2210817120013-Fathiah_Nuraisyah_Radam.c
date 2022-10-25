#include <stdio.h>
void main(){
      int angka;
      scanf("%d", &angka);      
      if (angka >=80)
      {
            printf("A\n");
      }
      else if (angka >=70 && angka<=79)
      {
            printf("B\n");
      }
      else if(angka >=60 && angka<=69)
      {
            printf("C\n");
      }
      else if (angka >=50 && angka<=59)
      {
            printf("D\n");
      }
      else if (angka <50)
      {
            printf("E\n");
      }
}