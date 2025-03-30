#include<stdio.h>
#include<math.h>
int main ()
{
    double pi=3.1416;
    int m1=3, m2=2;
     double d,lembda_1=530, lembda_2=700, th_1=65, th_2;
     th_1=th_1*(pi/180);
     d=(lembda_1 * m1)/(sin(th_1));
     th_2=asin((lembda_2 * m2)/d)*(180/pi);
     printf("The angle for second bright spot will be: %lf", th_2);
    return 0;
}
