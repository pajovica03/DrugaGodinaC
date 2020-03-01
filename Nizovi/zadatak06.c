//Napisati program u kome se unosi broj dana u mesecu, a zatim dnevne temperature za taj mesec (niz celih brojeva). Odrediti:
//broj dana kada je temperatura bila ispod nule,
//redni broj dana kada je temperature bila najviša,

#include <stdio.h>
int main(void) {
  int n,i,x=0,max=0,m=0;
  float a[50];
  printf("Uneti broj dana u mesecu:\n");
  scanf("%d",&n);
  printf("Uneti dnevne temperature za taj mesec:\n");
  for(i=0;i<n;i++)
  {
  scanf("%f",&a[i]);
  if(a[i]<0)
    x++;
  }
  for(i=0;i<n;i++)
  if(a[i]>max)
  {
  max=a[i];
  m=i;
  }
  printf("Broj dana kada je temperatura bila ispod nule: %d\n",x);
  printf("Redni broj dana kada je temperatura bila najvisa: %d.",m+1);
  return 0;
}