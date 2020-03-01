/*Dat je niz realnih brojeva. Napraviti nove nizove od pozitivnih i od negativnih elemenata datog niza. Odredtiti prosečne vrednosi oba niza.*/

//x[n]
//
//y[0-n]  x[i] >= 0
//z[0-n]  x[i] < 0
//
//sum(y[i])/[0-n])

#include <stdio.h>

int main() {
    //deklaracije promenjivih
    int brel_y = 0, brel_z = 0, m = 0, n = 0, i = 0, j=0;
    float x[50], y[50], z[50];
    float sum_y = 0, sum_z = 0;
    //Unos niza:
    //Unos broja clanova niza
    printf("Uneti broj clanova n:\n");
    scanf("%d",&n);
        
    //Unos elemenata:
    printf("Uneti elemente tog niza:\n");

    for(i=0;i<n;i++) {
      printf("Unesi element #%d: ", i); 
      scanf("%f", &x[i]);
    }
        
    // Provera unetih vrednosti
    for(i=0; i<n; i++) {
      printf("Element #%d: %f\n", i, x[i]);
    }
   
    // Sortiranje elemenata po nizovima:
    for(i=0; i<n; i++) {
        if(x[i] >= 0){ 
            //printf("%f", x[i]);
            y[brel_y] = x[i];
            brel_y = brel_y + 1;
        }
        else {
            z[brel_z] = x[i];
            brel_z = brel_z + 1;
        }   
   }

    for(i=0; i<brel_y; i++){
        printf("Y[%d]=%f\n",i ,y[i]);
        sum_y = sum_y + y[i];
    }   
    printf("Srednja vrednost niza Y (pozitivni i nula): %f \n", sum_y / brel_y);

    for(i=0; i<brel_z; i++){
        printf("Z[%d]=%f\n",i ,z[i]);
        sum_z = sum_z + z[i];
    }   
    printf("Srednja vrednost niza Z (negativnih): %f\n", sum_z / brel_z);

}
