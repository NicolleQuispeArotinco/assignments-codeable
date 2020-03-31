#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(void){
    int letter=0;
    int word=0;
    int sentence=0;
    int index;
    string text=get_string("Text: ");
    if(isalnum(text[0])){
        word=1;
    }
    for( int i = 0 , n = strlen(text) ; i< n ; i++){
        if((text[i]>='a' && text[i]<='z') || (text[i]>='A' && text[i]<='Z')){
          letter++;
        }
        if(text[i]==' ' ||(i < n - 1 && isspace(text[i]) && isalnum(text[i + 1]))){
            word++;
        }
        if(text[i]=='.' || text[i]=='!' || text[i]=='?'){
          sentence++;
        }
    }
    index =(int)round(0.0588 * (100 * letter / word) - 0.296 * (100 * sentence / word) - 15.8);
    if (index <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index < 16)
    {
        printf("Grade %i\n", index);
    }
    else
    {
        printf("Grade 16+\n");
    }
}