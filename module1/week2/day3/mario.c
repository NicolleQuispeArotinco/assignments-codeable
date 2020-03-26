#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int numH;
    do{
        numH=get_int("Height: ");
                   
    }while(numH < 1 || numH > 9);
    int numW=numH-1;
    for(int i=1; i<=numH; i++){
        for(int j=1; j<=numW;j++){
            printf(" ");
        }
        numW--;
        for(int k=1; k<=i;k++){
            printf("#");
        }
        printf("\n");
    } 

}
