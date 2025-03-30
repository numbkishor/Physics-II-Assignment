#include<stdio.h>
#include<math.h>
int main ()
{
    int m;
    double th, d, wavelength;
    printf("Enter the order of diffraction m: ");
    scanf("%d", &m);
    printf("Enter the angle of diffraction (in degrees) theta: ");
    scanf("%lf", &th);
    printf("Enter the slit separation (in micrometer) a: ");
    scanf("%lf", &d);

    d=d*1000;
    th=th*(3.1416/180);
    wavelength=(d*sin(th))/m;
    printf("%lf\n", wavelength);

    if (wavelength >= 380 && wavelength < 450) {
        printf("Violet");
    } else if (wavelength >= 450 && wavelength < 485) {
        printf("Blue");
    } else if (wavelength >= 485 && wavelength < 500) {
        printf("Cyan");
    } else if (wavelength >= 500 && wavelength < 565) {
        printf("Green");
    } else if (wavelength >= 565 && wavelength < 590) {
        printf("Yellow");
    } else if (wavelength >= 590 && wavelength < 625) {
        printf("Orange");
    } else if (wavelength >= 625 && wavelength <= 750) {
        printf("Red");
    }else{
        printf("Out of range");
    }
    return 0;
}
