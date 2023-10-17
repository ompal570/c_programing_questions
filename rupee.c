#include<stdio.h>
void main(){
     int x;
     printf("enter the amount:");
     scanf("%d",&x);
     
     int twothousend=x/2000;
     printf("two thousend note=%d\n ",twothousend);
     
     
     int five=x%2000;
     int f=five/500;
     printf("five hunderd note=%d\n ",f);
     
     int t=x%500;
     int twohunderd=t/200;
     printf("two hundrad note=%d\n ",twohunderd);
     
     int o=t%100;
     int onehunderd=o/100;
     printf("one hundrad note=%d\n ",onehunderd);
     
          
     int fi=o%100;
     int fifty=fi/50;
     printf("fifty note=%d\n ",fifty);
     
     int ti=fi%50;
     int twenty=ti/20;
     printf("twenty note=%d\n ",twenty);
     
    int te=ti%30;
     int ten=te/10;
     printf("ten note=%d\n ",ten);
     
      int ff=te%10;
     int fff=ff/5;
     printf("five rupees=%d\n ",fff);
     
     
       int tw=fff%5;
     int two=tw/2;
     printf("two rupees=%d \n",two);
     
      int on=tw%2;
     int one=on/1;
     printf("one rupees=%d\n ",one);
     
     
     
     
}
