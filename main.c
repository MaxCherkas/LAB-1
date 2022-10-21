#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double X1, X2, delta, func;
    unsigned int N, var;
    //створив змінні;

    printf("\tEnter variant (1 or 2):");
    scanf("%d",&var);

    while(var!= 1  &&  var!= 2){
        printf("\tError. Wrong variant.\n\t Enter variant again(1 or 2):");
        scanf("%d",&var);
    }//вибір варіанту 1 або 2;

    if(var == 1){
        printf("\n\t Enter X1:");
        scanf("%lf",&X1);

        printf("\n\t Enter X2:");
        scanf("%lf",&X2);

        printf("\n\t Enter N:");
        scanf("%u",&N);
        //введення данних;
        delta = (X2 - X1) / (N - 1);//обрахунок дельти;

	system("cls");//очистка виведеного;
    printf("\n************************************************");
    printf("\n*  N  *         X         *        F(X)        *");
    printf("\n************************************************");

    for(int i=1;i<=N;i++){

       X1 += delta;
       func=2*pow(X1,2)-3*pow(X1,3)+1500*X1-12000;//функція 24;
       printf("\n|%5.0d|%19.2lf|%20.2lf|\n",i,X1,func);
       printf("\n************************************************");//вивід таблиці;

    if(i%10==0){//повторювання кожні 10 комірок таблиці;

        printf("\nPress any key to continue...");
        getch();//зупинка;
    }
    }
    }

    if(var == 2){
        printf("\n\t Enter X1:");
        scanf("%lf",&X1);

        printf("\n\t Enter X2:");
        scanf("%lf",&X2);

        printf("\n\t Enter delta:");
        scanf("%lf",&delta);
        //введення данних;
        N=(int)(X2-X1)/delta;//обрахунок кількості стовпців;

    system("cls");//очистка виведеного;
    printf("\n************************************************");
    printf("\n*  N  *         X         *        F(X)        *");
    printf("\n************************************************");

     for(int i=1;i<=N;i++){

          X1 += delta;
          func=2*pow(X1,2)-3*pow(X1,3)+1500*X1-12000;//функція 24;
          printf("\n|%5.0d|%19.2lf|%20.2lf|\n",i,X1,func);
          printf("\n************************************************");//вивід таблиці;

        if(i%10==0){
        printf("\nPress any key to continue...");
        getch();//зупинка
    }
    }
    }

    return 0;
}
