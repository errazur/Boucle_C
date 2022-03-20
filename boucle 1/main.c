#include <stdio.h>
#include <stdlib.h>

double calculette(){
char rep;
double a;
double b;
double resultat;


printf("Veuillez entrer le signe de votre operation : ");
scanf(" %c", &rep);
if(rep == '+'){
    printf("Vous avez choisis l'addition ! \n");
    printf("Veuillez entrer les nombres a additionner : ");
    scanf(" %lf %lf", &a, &b);
    resultat = a + b;
    printf("%lf + %lf = %lf \n", a, b, resultat);
} else if (rep == '-'){
    printf("Vous avez choisis la soustraction ! \n");
    printf("Veuillez entrer les nombres a soustraire : ");
    scanf(" %lf %lf", &a, &b);
    resultat = a - b;
    printf("%lf - %lf = %lf \n", a, b, resultat);
} else if (rep == '*' || rep == 'x'){
    printf("Vous avez choisis la multiplication ! \n");
    printf("Veuillez entrer les nombres a multiplier : ");
    scanf(" %lf %lf", &a, &b);
    resultat = a * b;
    printf("%lf * %lf = %lf \n", a, b, resultat);
} else if (rep == '/'){
    printf("Vous avez choisis la division ! \n");
    printf("Veuillez entrer les nombres a diviser : ");
    scanf(" %lf %lf", &a, &b);
    resultat = a / b;
    printf("%lf / %lf = %lf \n", a, b, resultat);
}
}


int main()
{

//5

char n = 'o';

while (n == 'o')
{
    calculette();
    printf("Voulez vous refaire un calcule ? O pour OUI et N pour NON : ");
    scanf(" %c",&n);
}



/*
    char rep='o';
    char p;
    int a;
    int b;

    do {

        printf("Quel type d'operation voulez vous faire : +,-,*,/ ou appuyer sur n pour quitter : \n");
        scanf ("%c",&rep);

        if(rep == '+'){
            printf("veuillez entrer les nombres du calcule : ");
            scanf("%d %d", &a,&b);
            int s = a+b;
            printf("Le resultat de l'addition de %d + %d = %d\n", a,b,s);
        }
        if(rep =='-'){
            printf("veuillez entrer les nombres du calcule : ");
            scanf("%d %d", &a,&b);
            int s = a-b;
            printf("Le resultat de la soustraction de %d - %d = %d\n", a,b,s);
        }
        if(rep == '*'){
            printf("veuillez entrer les nombres du calcule : ");
            scanf("%d %d", &a,&b);
            int s = a*b;
            printf("Le resultat de la multiplication de %d * %d = %d\n", a,b,s);
        }
        if (rep == '/'){
            printf("veuillez entrer les nombres du calcule : ");
            scanf("%d %d", &a,&b);
            int s = a/b;
            printf("Le resultat de la division de %d / %d = %d\n", a,b,s);
        }
    }

    while (rep !='n');
*/

/*
//4

    int s=0;
    int N;
    int nb;
    int k=0;

        printf("entrer deux nombres a diviser x/x : ");
        scanf ("%d/%d",&nb,&N);

    while (nb - N >= 0){

    k=nb/N;
    s=nb%N;
    break;

}
    printf("%d / %d = %d et reste %d \n", nb, N, k,s);


*/


/*
//3

    int i;
    int s =0;
    int N;
    int nb;

        printf("entrer deux nombres a multiplier x*x : ");
        scanf ("%d*%d",&N,&nb);

    for (int i=0;i<N;i++){

    s +=nb;
}

 printf("%d * %d = %d \n", nb, N, s);

*/

/*
 int n;
int nb;
int p;

printf("Entrer 2 nombres entier a multiplier :");
scanf("%d %d", &nb, &n);

for (int i = 0; i < n; i++)
{
    p += nb;
}
printf("%d * %d = %d \n", nb, n, p);

*/


/*
// somme, produit, moyenne
//c
    int i;
    int N;
    int nb;

        printf("entrer le nombre de donnees : ");
    scanf("%d",&N);

    for(i=0;i<N;i++){
        printf("entrer le nombre de donnees a traiter : ");
        scanf("%d",&nb);
        i++;
        printf(" %d. nombre : %d \n\n",i,N);

    int S = N+nb;
    printf("la somme des nombres est : %d\n",S);

    int K = N*nb;
    printf("la multiplication des nombres est : %d\n",K);

    double L = S/nb;
    printf("la moyenne des nombres est : %lf\n",L);

        break;

    }

*/


/*
//b
    int i;
    int N;
    int nb;

    printf("entrer le nombre de donnees : ");
    scanf("%d",&N);

    do {

                printf("entrer le nombre de donnees a traiter : ");
        scanf("%d",&nb);
        i++;
        printf(" %d. nombre : %d \n\n",i,N);

    int S = N+nb;
    printf("la somme des nombres est : %d\n",S);

    int K = N*nb;
    printf("la multiplication des nombres est : %d\n",K);

    double L = S/nb;
    printf("la moyenne des nombres est : %lf\n",L);

        break;
    }
    while (i<N);
*/


/*
//a

    int i;
    int N;
    int nb;


    printf("entrer le nombre de donnees : ");
    scanf("%d",&N);

    while(i<N){
        printf("entrer le nombre de donnees a traiter : ");
        scanf("%d",&nb);
        i++;
        printf(" %d. nombre : %d \n\n",i,N);

    int S = N+nb;
    printf("la somme des nombres est : %d\n",S);

    int K = N*nb;
    printf("la multiplication des nombres est : %d\n",K);

    double L = S/nb;
    printf("la moyenne des nombres est : %lf\n",L);

        break;

}
*/



/*
int n;
int i;
int nb;
int s;
int p = 1;
double m;

printf("Entrer le nombre de donnees a traiter : ");
scanf("%d", &n);
printf("Nombre de donnes : %d\n", n);

while (i<n)
{
    i++;
    scanf("%d",&nb);
    s += nb;
    p *= nb;
    m = (double)s/nb;
    printf("%d. Nombre : %d\n", i, nb);
    printf("La somme des %d nombres est %d \n", nb, s);
    printf("Le produit des %d nombres est %d \n", nb, p);
    printf("La moyenne des %d nombres est %lf \n", nb, m);

}
*/



/*
// somme des entiers
    int i;
    int s =0;

    for (i=1;i<9;i++){
        printf ("%d\n",i);
        s=s+i;
        }

    printf ("la somme de i est : %d",s);
*/



    return 0;
}
