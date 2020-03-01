/*Dat je niz realnih brojeva. Odrediti koliko ima elemenata pre pojavljivanja prve nule u nizu.*/


#include <stdio.h>

int main() {
    int n,i,b=0;
    float a[50];

    printf("Uneti broj elemenata niza:\n");
    scanf("%d",&n);
    printf("Uneti elemente tog niza:\n");

    for(i=1; i<=n; i++) {
      printf("Broj #%d: ",i);
      scanf("%f",&a[i]);
    }
    
    i=0;
    for(i=0; i<n; i++){
    if(a[i]!=0)
    b++;
    }
    

    
   printf("Ima %d elemenata pre pojavljivanja nule.\n",b);

return 0;
}
