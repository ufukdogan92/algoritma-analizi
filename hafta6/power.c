#include <stdio.h>
#include <stdlib.h>


double power(double a,double b,double *dizi){
    double i,sum=1;
    double sayac = 0;
    for(i=0;i<b;i++){
        sum = sum * a;
        sayac++;
    }
    dizi[0] = sum;
    dizi[1] = sayac;
    return *dizi;

}

int main()
{
    double dizi[2];
    *dizi = power(3,62,dizi);
    printf("sonuc %f\n",dizi[0]);
    printf("adim sayisi  = %f\n",dizi[1]);
    return 0;
}
