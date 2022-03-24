#include <stdio.h>
#include <stdlib.h>

void max(double arr[7])
{
    double max;
    for(int i=0;i<7;i++)
    {
        if (max<arr[i])
        max=arr[i];
    }
    printf("\n");
    printf("    The max rise was:  +");
    printf("%lf\n", max);
}

void min(double arr[7])
{
    double min;
    for(int i=0;i<7;i++)
    {
        if (min>arr[i])
        min=arr[i];
    }
    printf("    The max dip was:   -");
    printf("%lf\n", min);
}


void Stock_Market(){
        system("cls");
     printf("\t\t\t-----------------------------------------------------------------\n");

    printf("\t\t\t|\t                                          \t\t|\n");
printf("\t\t\t|\t       Welcome To Our Stock Analysis  \t\t\t|\n");
    printf("\t\t\t|\t                                          \t\t|\n");
    printf("\t\t\t-----------------------------------------------------------------\n");
    printf("\n");
     printf("-----------------------------------------------------------------\n");
            printf(" Serial No  ");
            
            printf(" Company Name ");
            
            printf(" Stock Price \n");
            
             printf("  \n");
            printf("-----------------------------------------------------------------\n");
            printf("    1");
            printf("           HDFC        ");
            printf("   0\n");
            
            printf("    2");
            printf("           IBM      ");
            printf("      0\n");
            
            printf("    3");
            printf("           GFG        ");
            printf("    0\n");
            
            printf("    4");
            printf("           LIC       ");
            printf("     0\n");
            
            printf("    5");
            printf("           IDK       ");
            printf("     0\n");
            
            
            
            
            printf("-----------------------------------------------------------------\n");
            int choice;
            
            printf("Enter The choice Of your Company No: ");
            scanf("%d",&choice);
    
            printf("-----------------------------------------------------------------\n");
            printf("-----------------------------------------------------------------\n");

            
            
            switch(choice)
            {
              case 1:
              system("cls");
             
              printf("\t\t\t-----------------------------------------------------------------\n");

    printf("\t\t\t|\t                                          \t\t|\n");
printf("\t\t\t|\t       Welcome To HDFC  \t\t\t\t|\n");
    printf("\t\t\t|\t                                          \t\t|\n");
    printf("\t\t\t-----------------------------------------------------------------\n");

     printf("\t\t\t-----------------------------------------------------------------\n");

    printf("\t\t\t|\t                                          \t\t|\n");
printf("\t\t\t|\t       DAILY STOCK PRICE  \t\t\t\t|\n");
    printf("\t\t\t|\t                                          \t\t|\n");
    printf("\t\t\t-----------------------------------------------------------------\n");


            double price1[7] = {24,4,9,0 ,1,2,3};

              

     printf("\n");
     printf("\n");
     printf("\n");

            printf(" Day No    ||    ");
            printf(" Stock Price \n");
            
            
            printf("**************************************\n");  
          


            for(int i=0;i<7;i++)
            {
                int j=i+1;
                printf("  %d                 " , j );
                printf("  %d  \n" , price1[i] );

                printf("**************************************\n");

            }
            printf(" Highest Rise Was On Day: %d\n",1);
            max(price1);
            min(price1);

              break;

              case 2:
              system("cls");

 printf("\t\t\t-----------------------------------------------------------------\n");

    printf("\t\t\t|\t                                          \t\t|\n");
printf("\t\t\t|\t         Welcome To IBM  \t\t\t\t|\n");
    printf("\t\t\t|\t                                          \t\t|\n");
    printf("\t\t\t-----------------------------------------------------------------\n");

     printf("\t\t\t-----------------------------------------------------------------\n");

    printf("\t\t\t|\t                                          \t\t|\n");
printf("\t\t\t|\t       DAILY STOCK PRICE  \t\t\t\t|\n");
    printf("\t\t\t|\t                                          \t\t|\n");
    printf("\t\t\t-----------------------------------------------------------------\n");

              double price2[7] = {2467.15,260,310, 40, 535, 695,2};

              printf("\n");
              printf("\n");
              printf("\n");

            printf(" Day No    ||    ");
            printf(" Stock Price \n");
            
            
            printf("**************************************\n");  
              

            for(int i=0;i<7;i++)
            {
                int j=i+1;
                printf("  %d                 " , j );
                printf("  %d  \n" , price2[i] );

                printf("**************************************\n");

            }
            
            printf(" Highest Rise Was On Day: %d",2);
            max(price2);
            min(price2);

              break;



              case 3:
              system("cls");

 printf("\t\t\t-----------------------------------------------------------------\n");

    printf("\t\t\t|\t                                          \t\t|\n");
printf("\t\t\t|\t       Welcome To GFG  \t\t\t\t\t|\n");
    printf("\t\t\t|\t                                          \t\t|\n");
    printf("\t\t\t-----------------------------------------------------------------\n");

     printf("\t\t\t-----------------------------------------------------------------\n");

    printf("\t\t\t|\t                                          \t\t|\n");
printf("\t\t\t|\t       DAILY STOCK PRICE  \t\t\t\t|\n");
    printf("\t\t\t|\t                                          \t\t|\n");
    printf("\t\t\t-----------------------------------------------------------------\n");

              double price3[7] = {2467.15,260,310, 40, 535, 695,2};



              printf("\n");
              printf("\n");
              printf("\n");

            printf(" Day No    ||    ");
            printf(" Stock Price \n");
            
            
            printf("**************************************\n");  

            for(int i=0;i<7;i++)
            {
                int j=i+1;
                printf("  %d                 " , j );
                printf("  %d  \n" , price3[i] );

                printf("**************************************\n");

            }
            
            printf(" Highest Rise Was On Day: %d",1);
            max(price3);
            min(price3);
              break;

              case 4:
              system("cls");

 printf("\t\t\t-----------------------------------------------------------------\n");

    printf("\t\t\t|\t                                          \t\t|\n");
printf("\t\t\t|\t       Welcome To LIC  \t\t\t\t\t|\n");
    printf("\t\t\t|\t                                          \t\t|\n");
    printf("\t\t\t-----------------------------------------------------------------\n");

     printf("\t\t\t-----------------------------------------------------------------\n");

    printf("\t\t\t|\t                                          \t\t|\n");
printf("\t\t\t|\t       DAILY STOCK PRICE  \t\t\t\t|\n");
    printf("\t\t\t|\t                                          \t\t|\n");
    printf("\t\t\t-----------------------------------------------------------------\n");

             double price4[7] = {2467.15,260,310, 40, 535, 695,2};

              

              printf("\n");
              printf("\n");
              printf("\n");

            printf(" Day No    ||    ");
            printf(" Stock Price \n");
            
            
            printf("**************************************\n");  

           for(int i=0;i<7;i++)
            {
                int j=i+1;
                printf("  %d                 " , j );
                printf("  %d  \n" , price4[i] );

                printf("**************************************\n");

            }
            
            printf(" Highest Rise Was On Day: %d",1);
            max(price4);
            min(price4);
              break;

              case 5:
              system("cls");

 printf("\t\t\t-----------------------------------------------------------------\n");

    printf("\t\t\t|\t                                          \t\t|\n");
printf("\t\t\t|\t       Welcome To IDK  \t\t\t\t\t|\n");
    printf("\t\t\t|\t                                          \t\t|\n");
    printf("\t\t\t-----------------------------------------------------------------\n");

     printf("\t\t\t-----------------------------------------------------------------\n");

    printf("\t\t\t|\t                                          \t\t|\n");
printf("\t\t\t|\t       DAILY STOCK PRICE  \t\t\t\t|\n");
    printf("\t\t\t|\t                                          \t\t|\n");
    printf("\t\t\t-----------------------------------------------------------------\n");

              double price5[7] = {2467.15,260,310, 40, 535, 695,2};



              printf("\n");
              printf("\n");
              printf("\n");

            printf(" Day No    ||    ");
            printf(" Stock Price \n");
            
            
            printf("**************************************\n");  

            for(int i=0;i<7;i++)
            {
                int j=i+1;
                printf("  %d                 " , j );
                printf("  %d  \n" , price5[i] );

                printf("**************************************\n");

            }
            printf(" Highest Rise Was On Day: %d",1);
            max(price5);
            min(price5);
              break;

            }  
}


int main()
{
     printf("\t\t\t-----------------------------------------------------------------\n");

    printf("\t\t\t|                                          \t\t\t|\n");
printf("\t\t\t|\t\t    Welcome To Investopedia   \t\t\t|\n");
    printf("\t\t\t|\t                                          \t\t|\n");
    printf("\t\t\t-----------------------------------------------------------------\n");
    printf("\n");

printf("\t\t\t-----------------------------------------------------------------\n");

    printf("\t\t\t|\t                                           \t\t|\n");
printf("\t\t\t|\t\t       Choose From:  \t\t\t\t|\n");
printf("\t\t\t|\t\t         \t\t\t\t\t|\n");
printf("\t\t\t|\t\t      1: Crypto_Currency  \t\t\t|\n");
printf("\t\t\t|\t\t      2: Stock_Market  \t\t\t\t|\n");
printf("\t\t\t|\t\t      3: Mutual_Funds  \t\t\t\t|\n");
printf("\t\t\t|\t\t      4: Calculator  \t\t\t\t|\n");


    printf("\t\t\t|\t                                           \t\t|\n");
    printf("\t\t\t-----------------------------------------------------------------\n");
    printf("\n");

    printf("Enter Your Mode Of Investment");
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
        // case 1:
        // Crypto_Currency();
        // break;
        case 2:
        Stock_Market();
        break;
        // case 3:
        // Mutual_Funds();
        // break;
        // case 4:
        // Calculator();
        // break;
        
        
    }
}
    



 
