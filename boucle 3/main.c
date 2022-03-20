#include <stdio.h>
#include <stdlib.h>

int estBissextille (int annee){

    if(annee%4!=0){
        printf("l'annee %d est pas bissextille \n",annee);
    }
    else if (annee%4==0 && annee%100!=0){
        printf(" l'annee %d est bissextille \n",annee);
    }
    else if (annee%4==0 && annee%100==0 && annee%400!=0){
        printf("l'annee %d est pas bissextille \n",annee);
    }
    else if (annee%4==0 && annee%100==0 && annee%400==0){
        printf("l'annee %d est bissextille \n",annee);
    }

            return estBissextille;
}



int main()
{

// 2 nb de jours







// 1 Année


    int annee;
        printf("veuillez entrer une annee : ");
        scanf("%d",&annee);

        estBissextille(annee);




    return 0;
}
