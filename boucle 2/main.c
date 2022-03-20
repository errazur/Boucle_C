#include <stdio.h>
#include <stdlib.h>

int main()
{

//4 affichage nombres

//b

    int s=1;
    int nb=5;




    while (s<2){

        printf("\n");

            for(int k=1;k<=nb;k++){
                printf("%d",k);
            }
                    printf("\n");
            for(int l=2;l<nb;l++){
                printf("%d   %d\n",l,l);
                }
            for(int s=nb;s>=1;s--){
                printf("%d",s);
                }
                    printf("\n");

        s++;

    }



/*
//a
    int s=1;
    int nb=5;




    while (s<=nb){

        printf("\n");

            for(int k=s;k<=nb;k++){
                printf("%d",k);
            }
        s++;

    }
printf("\n");
*/

    return 0;
}
