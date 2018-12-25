#include <cs50.h>
#include<stdio.h>
#include<string.h>

//Declaration of function
void strmltply (char s, int multiplier);

int main(void){

    int h;
    do{
        h = get_int("Height: ");

    }while(h > 23 || h < 0);

    int i;
    for(i=1;i<=h;i++){
       strmltply(' ',h-i);
       strmltply('#',i);
       strmltply(' ',2);
       strmltply('#',i);
       printf("\n");
    }

    return 0;
}

//Returns the mutiplication of string pattern
void strmltply (char s, int multiplier) {
    int i;
    for (i = 1; i <= multiplier; ++i) {
       putchar(s);
    }
}