//Napisati program u kome se unosi broj učenika u odeljenju n, a zatim se unosi n ocena iz Programiranja (niz celih brojeva). Ispisati:
//- koliko ima petica,
//- da li ima nedovoljnih ocena.

#include <stdio.h>
int main(void) {
  int n,i,p=0;
  float a[50];
  printf("Uneti broj ucenika u odeljenju\n");
  scanf("%d",&n);
  printf("Uneti njihove ocene iz programiranja:\n");
  for(i=0;i<n;i++)
  {
  scanf("%f",&a[i]);
  if(a[i]==5)
  {
    p++;
  }
  }
  for(i=0;i<n;i++)
  {
    if(a[i]==1)
    {
      printf("Ima nedovoljnih ocena.\n");
    }
  }
  printf("Broj petica u odeljenju je %d\n",p);
  return 0;
}