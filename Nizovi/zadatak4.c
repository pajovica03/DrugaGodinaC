//2.Napisati program koji učitava niz od n celih brojeva i računa:
//a) proizvod pozitivnih elemenata,
//b) srednju vrednost negativnih elemenata.

#include <stdio.h>
int main(void) {
  int n,i,p=1,sv=0,z=0,r=0;
  float a[50];
  printf("Uneti niz od n realnih brojeva\n");
  scanf("%d",&n);
  printf("Uneti elemente niza:\n");
  for(i=0;i<n;i++)
  {
  scanf("%f",&a[i]);
  if(a[i]>0)
  {
  p=p*a[i];
  }
  if(a[i]<0)
  {
  n=n-a[i];
  z=z+a[i];
  r=z/n;
  sv=sv+r;
  }
  }
  printf("Proizvod pozitivnih elemenata je: %d\n",p);
  printf("Srednja vrednost negativnih elemenata je:%d\n",sv);
  return 0;
}