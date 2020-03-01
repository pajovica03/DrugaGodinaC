/**/



#include <stdio.h>

int main() {
int a[10][10],m,n,i,j;

printf("Uneti broj redova matrice:\n");
scanf("%d",&m);

printf("Uneti broj kolona matrice:\n");
scanf("%d",&n);

printf("Uneti elemente matrice:");
for(i=0; i<m; i++)
  for(j=0; j<n; j++)
    scanf("%d",&a[i][j]);

printf("Matrica:\n");

for(i=0; i<m; i++){
  for(j=0; j<n; j++)
    printf("| %d |",a[i][j]);

}
return 0;
}
