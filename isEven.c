#include <stdio.h>
#include <cs50.h>


int main (void){

    int n = get_int("Check intiger if even or odd: ");

    if (n % 2 == 0){
        printf("even\n");
    } else {
        printf("odd\n");
    }

}
