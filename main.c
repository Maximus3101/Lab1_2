#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    unsigned int var,i;
    int N;
    double x1, x2, delta, x;
    do{

    printf("enter variant (1 or 2):");
    scanf("%u",&var);
    }
    while(var!=1 && var!=2);

    printf("x1=");
    scanf("%lf", &x1);


    printf("x2=");
    scanf("%lf", &x2);

        if (var==1){

            printf("N=");
            scanf("%u", &N);

        while( N<=0 ){
         printf("!!!!   N must be > 0 !!!! \n");
         printf("N=");
         scanf("%d", &N);}

            if (N > 1) {

                system("cls");
             printf("x1=%.2lf\n", x1);
             printf("x2=%.2lf\n", x2);
             printf("N=%d\n", N);
                printf("**********************************************************\n");
                printf("*   N    *           X           *           F(X)        *\n");
                printf("**********************************************************\n");
             printf("+-----------+----------------------+--------------------------+\n");

              for( i=1; i<=N ; i++ ){

                delta = (x2-x1)/(N-1);
                double x=x1+(i-1)*delta;
                printf("|%11d|%22.2lf|%26.2lf|", i, (pow(x/100 - 5, 5) - pow(x/50 + 10, 4) - pow(x/25 - 15, 3) - pow(x, 2) - 10) );
                printf("\n");
                printf("+-----------+----------------------+--------------------------+");
                printf("\n");

                if( i%20 == 0){
                    printf("Press any key\r");
                    getch();
                }
             }
            }

            else
                {
                system("cls");
             printf("Only one row \n");
             printf("x1=%.2lf\n", x1);
             printf("x2=%.2lf\n", x2);
             printf("N=%d\n", N);
             printf("**********************************************************\n");
                printf("*   N    *           X           *           F(X)        *\n");
                printf("**********************************************************\n");
             printf("+-----------+----------------------+--------------------------+");
             printf("\n");
             printf("|%11d|%22.2lf|%26.2lf|", N,x1 ,2*x1 );
             printf("\n");
             printf("+-----------+----------------------+--------------------------+");

             }
        }

     else
            {
         printf("delta=");
         scanf("%lf", &delta);

         system("cls");
             printf("x1=%.2lf\n", x1);
             printf("x2=%.2lf\n", x2);
             printf("delta=%.2lf\n", delta);
             printf("**********************************************************\n");
                printf("*   N    *           X           *           F(X)        *\n");
                printf("**********************************************************\n");

             printf("+-----------+----------------------+--------------------------+\n");
                for( int i=1; i<=N ; i++)
                    {
                 N=1+(x2-x1)/delta;

                 x=x1+(i-1)*delta;

                printf("|%11d|%22.2lf|%26.2lf|", i, x,(pow(x/100 - 5, 5) - pow(x/50 + 10, 4) - pow(x/25 - 15, 3) - pow(x, 2) - 10) );
                printf("\n");
                printf("+-----------+----------------------+--------------------------+");
                printf("\n");

                if( i%20 == 0){
                    printf("Press any key\r");
                    getch();
                }
                    }
            }




return 0;


}

