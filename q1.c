#include<stdio.h>
int main()
{
    int h,flow;
    float g=9.8;
    printf("enter the height of the dam:");
    scanf("%d",&h);
    printf("enter the number of cubic meters of water that are projected to flow:");
    scanf("%d",&flow);
    float w;
    w=(flow*1000)*g*h;
    printf("the energy produced is:%f\n",(w*0.9)/1e6);
    return 0;
}