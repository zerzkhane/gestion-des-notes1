#include <stdio.h>
#include <stdlib.h>

int main()
{

       int i;
       float T1[13],T2[15],T_tri[28];
       printf("saisir les moyennes de ses élèves de class 1:\n");

    for (i = 0 ; i <=13 ; i++)
      {
        printf("entrer les notes :\n" );
        scanf("%f", &T1[i]);
      }
    for (i = 0 ; i <=13 ; i++)
      {
        printf("T1[%d] = %f \n", i, T1[i]);

      }

        printf("saisir les moyennes de ses élèves de class 2:\n");
    for (i = 0 ; i <=15 ; i++)
      {
        printf("entrer les notes :\n" );
        scanf("%f", &T2[i]);
      }
    for (i = 0 ; i <=15; i++)
      {
        printf("T2[%d] = %f \n", i, T2[i]);

      }
    for (i = 0; i<=13 ; i++)
    {
        T_tri[i] = T1[i];
    }

    for(i = 0; i<=15; i++)
     {
        T_tri[13+i] = T2[i];
     }

     printf("le tableau fesionner classe 1 et classe 2 :\n");
     for(i=0; i<=28; i++)
      {
         printf(" T_tri[%d] = %f \n", i, T_tri[i] );

      }

    return 0;
}
