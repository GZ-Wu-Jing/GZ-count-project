#include <stdio.h>
#include <stdlib.h>
//简单加减乘除计算程序

     double  add(double x,double y);
    double   ride(double x,double y);
     double  minus(double x,double y);
    double   divide(double x,double y);
    double  main(void)
{
        char h;
        double a,b;
        double kl;
        printf("输入计算式：");
       scanf("%lf  %c %lf",&a,&h,&b);
       if(h=='+')
        kl=add(a,b);
        if(h=='*')
        kl=ride(a,b);
        if(h=='-')
        kl=minus(a,b);
        if(h=='/')
        kl=divide(a,b);
       printf("\n两个数计算结果:%.3lf\n",kl);
      return 0;
}
double add(double x,double y)
{
        double z;
        z=x+y;
        return  z;
}
 double   ride(double x,double y)
{
    double z;
    z=x*y;
    return z;
}
double minus(double x,double y)
{
    double z;
    z=x-y;
    return z;
}
double divide(double x,double y)
{
    double z;
    z=x/y;
    return z;
}
