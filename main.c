#include <stdio.h>
#include <math.h>
#include "../include/calc4.h"

int main()
{
    FILE *file;
    file=fopen("sinx.txt","w");

    int deg;
    double pi=3.14159;
    for(deg=0;deg<=360;deg=deg+15)
    {
        double rad=deg*pi/180;

        fprintf(file,"%3d° : 値=%4.2lf\n",deg,sin(rad));
    }

    fclose(file);
    
    return 0;
}
