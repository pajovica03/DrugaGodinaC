//Uneti broj takmičara u trci na 100m, a zatim njihove rezultate na takmičenju (niz realnih brojeva). 
//a)Napraviti novi niz od takmičara koji su trčali ispod 10,5 sekundi.
//b)Naknadno uneti svetski rekord na 100m i ispisati za svakog takmičara novog niza razliku rekorda i njegovog rezultata.

#include <stdio.h>

int main() {
  // inicijalizacija promenjivih
  int n,i,x,j=0;
  int sv_rekord;
  float a[50], b[50];

  // Stampanje teksta i unos vrednosti
  printf("Uneti broj takmicara u trci na 100 metara:\n");
  scanf("%d",&n);
  printf("Uneti njihove rezultate:\n");

  // unos rezultata takmicara u niz a
  for(i=0;i<n;i++)
  {
    printf("Takmicar %d: ", i+1);
    scanf("%f", &a[i]);
  }

  /* provera zadatog limita za vreme i 
  unos u niz b ako je uslov zadovoljen */ 
  for(i=0;i<n;i++)
  {
      if (a[i] < 10.5) { // provera u nizu a
          b[j] = a[i];   // unos u nov niz b
          j++;           // brojanje clanova novog niza
      }
  }

  // stampanje novog niza b
  for(i=0;i<j;i++) {
      printf("Takmicar: %d | Vreme: %f\n", i + 1, b[i]);
  }

  // stampanje teksta i unos sv_rekord  
  printf("\nUnesi svetski rekord: ");
  scanf("%d",&sv_rekord);

  // stampanje razlike elementa niza b i sv_rekord-a
  for(i=0; i<j;i++) {
      printf("Takmicar: %d | Razlika: %f \n", i + 1, b[i] - sv_rekord);
  }


  // return from main (exit status 0)
  return 0;
}