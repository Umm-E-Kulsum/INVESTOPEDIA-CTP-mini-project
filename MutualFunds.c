#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printName(int n)
{
    if (n == 0)
    {
        for (int i = 0; i < 37; i++)
        {
            if (i == 0)
                printf("|");
            else
                printf(" ");
        }
    }
    if (n == 1)
    {
        for (int i = 0; i < 31; i++)
        {
            printf(" ");
        }
    }
    if (n == 2)
        printf("    SBIMF      ||       75     ");
    if (n == 3)
        printf("    UTI        ||       30     ");
    if (n == 4)
        printf("    HDFC       ||       75     ");
    if (n == 5)
        printf("    RELIANCE   ||       56     ");
    if (n == 6)
        printf("    ICICI      ||       45     ");
    if (n == 7)
        printf("    KOTAK      ||       45     ");
    if (n == 8)
        printf("    OTHERS     ||       70     ");
    if (n == 9)
        printf("    SBIMF      ||       55     ");
    if (n == 10)
    {
        for (int i = 0; i < 31; i++)
        {
            printf(" ");
        }
    }
    if (n == 11)
    {
        for (int i = 0; i < 31; i++)
        {
            printf(" ");
        }
    }
}

void printScheme(int n)
{
    if (n == 0)
    {
        for (int i = 0; i < 110; i++)
        {
            printf(" ");
        }
    }
    if (n == 1)
    {
        for (int i = 0; i < 110; i++)
        {
            printf(" ");
        }
    }
    if (n == 2)
    {

        char *sh[10] = {"Aditya Birla Frontline Equity (G)", "Frankline India Bluechip Fund (G)", "Invesco India Dynamic Equity  (G)", "Invesco India Growth Opp Fund (G)", "Miraee Asset India Equity Reg (G)", "SBI BlueChipp Fund Equity Reg (G)", "DSPBRR Opportunities Fund Reg (G)", "Franklin India Smaller  Fund  (G)", "HDFC MidCap Opportunitie Fund (G)", "L&T India Value Registration  (G)"};
        char *y1[10] = {"11.87", "19.90", "12.60", "17.00", "25.91", "11.87", "17.00", "25.91", "17.37", "18.24"};
        char *y2[10] = {"25.91", "17.00", "18.24", "11.87", "19.90", "17.37", "12.60", "12.60", "11.87", "18.24"};
        char *y3[10] = {"12.60", "18.24", "25.91", "17.00", "18.24", "17.37", "11.87", "17.37", "19.90", "18.24"};
        for (int i = 0; i < 10; i++)
        {
            printf("| %s                           %s            %s            %s   ", sh[i], y1[i], y2[i], y3[i]);
            printf("\n");
        }
    }

    if (n == 3)
    {
        for (int i = 0; i < 110; i++)
        {
            printf(" ");
        }
    }
}

int main()
{
    printf("\t\t\t-----------------------------------------------------------------\n");

    printf("\t\t\t|\t                                          \t\t|\n");
    printf("\t\t\t|\t     Welcome to Mutual Funds Analysis  \t\t\t|\n");
    printf("\t\t\t|\t                                          \t\t|\n");
    printf("\t\t\t-----------------------------------------------------------------\n");
    printf("\n");
    printf("\t\t---------------------------------------------------------------------------------\t\t\t\t\n");

    printf("\n");
    printf("\n");

    printf(" Major AMC investors survey\n");

    for (int i = 0; i < 13; i++)
    {

        for (int j = 0; j < 31; j++)
        {

            if (j == 0)
                printf("*");
        }

        for (int j = 0; j < 32; j++)
        {

            if (i == 0 || i == 12)
                printf("*");
        }

        printName(i);

        for (int j = 0; j < 31; j++)
        {

            if (j == 30)
                printf("*");
        }

        printf("\n");
    }


    printf("\n\n\n");
    printf("\t\t\t:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:\n");

    printf("\t\t\t*\t                                                                       \t\t*\n");
    printf("\t\t\t*\t         Do you want see the scheme details? (yes/no)     \t\t\t*\n");
    printf("\t\t\t*\t                                                                       \t\t*\n");
    printf("\t\t\t:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*::*:*:*:*:*:*:*:*:*:*:*:**:*:*:*:*:*:*:*:\n");


    char y1[30] = "yes";
    char x1[30] = "no";

    char p1[30];
    scanf("%s", &p1);
    system("cls");
    if (strcmp(y1, p1) == 0)
    {

        printf("\n");
        printf("\n");
        printf("\n");

        printf("--------------------------------------------------------------------------------------------------------------\n");
        printf("|| Scheme Name                                     ||    ");
        printf(" 1st Year      || ");
        printf(" 2nd Year      || ");
        printf(" 3rd Year      ||\n");
        printf("--------------------------------------------------------------------------------------------------------------\n");

        for (int i = 0; i < 5; i++)
        {

            for (int j = 0; j < 110; j++)
            {
                if (i == 0 || i == 4)
                    printf("-");
            }

            printScheme(i);

            printf("\n");
        }

    }

    printf("\n\n\n");
    printf("\t\t\t:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:\n");

    printf("\t\t\t*\t                                                                       \t\t*\n");
    printf("\t\t\t*\t         Do you want to invest in any scheme? (yes/no)     \t\t\t*\n");
    printf("\t\t\t*\t                                                                       \t\t*\n");
    printf("\t\t\t:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*::*:*:*:*:*:*:*:*:*:*:*:**:*:*:*:*:*:*:*:\n");


    
    char y[30] = "yes";
    char x[30] = "no";

    char p[30];
    scanf("%s", &p);

    if (strcmp(y, p) == 0)
    {
        FILE *fptr;
        char name[100];
        int accountNumber;
        int selectScheme;

        printf("Enter your name:");
        scanf("%s", &name);
        printf("Enter your Account Number:");
        scanf("%d", &accountNumber);
        printf("Enter your Scheme you want to invest in:");
        scanf("%d", &selectScheme);

        fptr = fopen("NewUser.txt", "w");

        fprintf(fptr, "%s\t", name);
        fprintf(fptr, "%d\t", accountNumber);
        fprintf(fptr, "%d\t", selectScheme);

        fclose(fptr);
    }
    

    system("cls");
    printf("\n\n\n");
    printf("\t\t\t:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:\n");

    printf("\t\t\t*\t                                          \t\t*\n");
    printf("\t\t\t*\t          Thank You For Visiting!  \t\t\t*\n");
    printf("\t\t\t*\t                                          \t\t*\n");
    printf("\t\t\t:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:\n");
}
