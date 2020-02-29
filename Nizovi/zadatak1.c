



#include <stdio.h>
#include <math.h>

int main() {
    int n, i;                      // broj clanova niza
    float x[10], y[10], z[10], q[10];     // nizovi x, y, z

    //ucitavanje broja clanova svih nizova:
    printf("Unesi broj clanova niza:");
    scanf("%d", &n);

    //ucitavanje niz X
    for (i=0; i<n; i++) {
        printf("Unasi x[%d]:", i);
        scanf("%f", &x[i]);
    }

    //ucitavanje niza Y
    for (i=0; i<n; i++) {
        printf("Unasi y[%d]:", i);
        scanf("%f", &y[i]);
    }

    for (i=0; i<n; i++) {
        z[i] = (x[i] + y[i]) / 2;
        q[i] = sqrt(x[i] * y[i]);
    }

    printf("Srednja vrednost izracunata.\n\n");

    for (i=0; i<n; i++) {
        printf("Aritmeticka sredina clanova x[%d] i y[%d] je z[%d]=%f\n", i, i, i, z[i]);
    }

    for (i=0; i<n; i++) {
        printf("Geometrijska sredina clanova x[%d] i y[%d] je q[%d]=%f\n", i, i, i, q[i]);
    }

 return 0;
}
