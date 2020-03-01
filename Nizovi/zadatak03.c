//1.Napisati program koji učitava niz od n realnih brojeva i računa:
//a) aritmetičku sredinu niza,
//b) minimalnu vrednost niza.

#include <stdio.h>
int main(void) {
  int n,i,min=99999,z=0;
  float a[50];
  float as=0, sum=0;
  printf("Uneti niz od n realnih brojeva\n");
  scanf("%d",&n);
  printf("Uneti elemente niza:\n");
  for(i=0;i<n;i++)
  {
  scanf("%f",&a[i]);
//  z=z+a[i];
  as=z/n;
  if(a[i]<min)
  min=a[i];
  }
  for(i=0;i<n;i++){
      sum = sum + a[i];
  }
    as = sum / n;
  printf("Aritmeticka sredina je: %f\n",as);
  printf("Minimalna vrednost niza: %d\n",min);
  return 0;
}
