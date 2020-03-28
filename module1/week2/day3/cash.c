#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main (void){
    float change;
    int c25=0;
    int c10=0;
    int c5=0;
    int c1=0;
    int ctotal;
    int coins;
    do{
        change=get_float ("How much change is owed: ");        
    }while(change<=-0);
    coins = round(change*100);
    do{
        if(coins%25==0){
            coins-=25;
            c25++; 
        }else if(coins%10==0){
            coins-=10;
            c10++;
        }else if(coins%5==0){
            coins-=5;
            c5++;
        }else if(coins%1==0){
            coins-=1;
            c1++;
        }
    }while(coins!=0);
    
    ctotal=c1+c5+c10+c25;
    printf("%i\n", ctotal);
}
