// Program treba provjerit je li matrica donje trokutasta.

#include <stdio.h>

int main()
{
    int A[10][10],i,j,m,n;
    int redak, stupac, donja;

    printf("Unesi broj redaka: ");
        scanf("%d", &m);
        printf("\nUnesi broj stupaca: ");
        scanf("%d",&n);
        printf("\nUnesi vrijednosti matrice: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nUnesi vrijednost A[%d][%d] : ",i,j);
                 scanf("%d", &A[i][j]);
        }
    }

    donja = 1;
    for(redak=0; redak<m; redak++)
    {
        for(stupac=0; stupac<n; stupac++)
        {
            /*
             * Ako su elementi iznad glavne dijagonale(redak>stupac)
             * razliciti od 0(A[row][col]!=0)
             */
            if(stupac>redak && A[redak][stupac]!=0)
            {
                donja = 0;
            }
        }
    }

    if(donja == 1)
    {
        printf("\nMatrica je donje trokutasta: \n\n");

        /*
          Ispis elemenata donje trokutaste matrice
         */
        for(redak=0; redak<m; redak++)
        {
            for(stupac=0; stupac<n; stupac++)
            {
                if(A[redak][stupac]!=0)
                {
                    printf("\t%d", A[redak][stupac]);
                }
            }

            printf("\n\n");
        }
    }
    else
    {
        printf("\nMatrica nije donje trokutasta");
    }

    return 0;
}
