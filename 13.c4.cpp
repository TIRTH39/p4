#include<stdio.h>

main()
{
    int gs,bs,hra,da,ta;  
      printf("value of base salary=");
      scanf("%d",&bs);
      printf("value of house rent allowance=");
      scanf("%d",&hra);
      printf("value ofdear allowance =");
      scanf("%d",&da);
      printf("value of travelling allowance=");
      scanf("%d",&ta);
      
      hra=hra*bs/100;
      da=da*bs/100;
      ta=ta*bs/100;
      
      gs=hra+da+ta+bs;
      
      printf("value of gross salary=%d");
}
