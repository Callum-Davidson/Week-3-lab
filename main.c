#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*int main()  //arithmetic series
{
    int  d ,xn=2, xnm1=0 , n=0 ;
    int sn ;

     d=xn-xnm1;

    while (xn<20) {
    xn =xnm1 +d ;
    xnm1=xn ;
   // sn = 0.5 *n *(xn+xnm1);
    printf ("%d\n",xn);
    }


    return 0 ;
}
*/

//Geometric series

    int main () {
    float xnm1=5,xn=7,n=0 ;
    float k , sn=xnm1 ;
     k= xn/xnm1 ;

     printf("%f\n",xnm1);

     while (n<100){
     xn = k*xnm1 ;
     xnm1 = xn ;
      n++;

     sn=sn+xnm1;

    if (xnm1>=0.0001 && k<1)  {
        printf("the series converges, the sum is %f\n", sn) ;

     }

    else if(n<10 && k>=1) {
    printf ("%f and the sum is %f\n",xn,sn);

    }


     }


    return 0;
}


