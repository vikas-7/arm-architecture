#include <stdio.h>
#include <math.h>
int main()
{
    float x=-1.5707;
    float y[100];
    int i;
    for(i=0;i<=10000;i++){
        y[i] = tan(x);
        printf("\n%f\t\t%f",x,y[i]);
        x = x+0.010;
        if(x > 1.5709) break;
    }

    return 0;
}