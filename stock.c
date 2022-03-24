#include <stdio.h>
#include <stdlib.h>

void max(double arr[7])
{
    double max;
    int x;
    for (int i = 0; i < 7; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            x = i;
        }
    }
    printf("\n");
    printf("\n");
    printf("::::::::::::::::::::::::::::::::::::::\n");
    printf("    Highest Rise Was On Day: %d", x);
    printf("\n");
    printf("    The max rise was:       +");
    printf("%lf\n", max);
    printf(":::::::::::::::::::::::::::::::::::::::\n");
}

void min(double arr[7])
{
    double min;
    int x;
    for (int i = 0; i < 7; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            x = i;
        }
    }
    printf("\n");
    printf("\n");
    printf("::::::::::::::::::::::::::::::::::::::\n");
    printf("    Highest Dip Was On Day: %d", x);
    printf("\n");
    printf("    The max dip was:       ");
    printf("%lf\n", min);
    printf("::::::::::::::::::::::::::::::::::::::\n");

    printf("\n");
    printf("\n");
    printf("\t\t\t:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:\n");

    printf("\t\t\t*\t                                          \t\t*\n");
    printf("\t\t\t*\t          Thank You For Visiting!  \t\t\t*\n");
    printf("\t\t\t*\t                                          \t\t*\n");
    printf("\t\t\t:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:\n");
}

void Stock_Market()
{
    system("cls");
    printf("\t\t\t-----------------------------------------------------------------\n");

    printf("\t\t\t|\t                                          \t\t|\n");
    printf("\t\t\t|\t       Welcome To Our Stock Analysis  \t\t\t|\n");
    printf("\t\t\t|\t                                          \t\t|\n");
    printf("\t\t\t-----------------------------------------------------------------\n");
    printf("\n");
    printf("-----------------------------------------------------------------\n");
    printf("\n");
    printf(" Serial No  ");

    printf(" Company Name ");

    printf(" Stock Price \n");

    printf("  \n");
    printf("-----------------------------------------------------------------\n");
    printf("    1");
    printf("           HDFC        ");
    printf("   17,094.95\n");

    printf("    2");
    printf("           IBM      ");
    printf("      16,291.75\n");

    printf("    3");
    printf("           GFG        ");
    printf("    21,091.15\n");

    printf("    4");
    printf("           LIC       ");
    printf("     1,091.15\n");

    printf("    5");
    printf("           IDK       ");
    printf("     5,091.15\n");

    printf("-----------------------------------------------------------------\n");
    int choice;

    printf("Enter The choice Of your Company No: ");
    scanf("%d", &choice);

    printf("-----------------------------------------------------------------\n");
    printf("-----------------------------------------------------------------\n");

    switch (choice)
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
        printf("\t\t\t|\t       WEEKLY FLUCTUATIONS \t\t\t\t|\n");
        printf("\t\t\t|\t                                          \t\t|\n");
        printf("\t\t\t-----------------------------------------------------------------\n");

        double price1[7] = {24.7, -40.8, 9.78, 0.57, -11.6, 20.5, 37.45};

        printf("\n");
        printf("\n");
        printf("\n");

        printf(" Day No    ||    ");
        printf(" Stock Price \n");

        printf("**************************************\n");

        for (int i = 0; i < 7; i++)
        {
            int j = i + 1;
            printf("  %d                 ", j);
            printf("  %lf  \n", price1[i]);

            printf("**************************************\n");
        }
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
        printf("\t\t\t|\t       WEEKLY FLUCTUATIONS  \t\t\t\t|\n");
        printf("\t\t\t|\t                                          \t\t|\n");
        printf("\t\t\t-----------------------------------------------------------------\n");

        double price2[7] = {67.15, 2.60, 39.2, 76.9, -53.5, -69.5, 2.27};

        printf("\n");
        printf("\n");
        printf("\n");

        printf(" Day No    ||    ");
        printf(" Stock Price \n");

        printf("**************************************\n");

        for (int i = 0; i < 7; i++)
        {
            int j = i + 1;
            printf("  %d                 ", j);
            printf("  %lf  \n", price2[i]);

            printf("**************************************\n");
        }

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
        printf("\t\t\t|\t       WEEKLY FLUCTUATIONS  \t\t\t\t|\n");
        printf("\t\t\t|\t                                          \t\t|\n");
        printf("\t\t\t-----------------------------------------------------------------\n");

        double price3[7] = {-27.15, 20.3, 3.10, 4.98, -53.5, 6.95, 23.7};

        printf("\n");
        printf("\n");
        printf("\n");

        printf(" Day No    ||    ");
        printf(" Stock Price \n");

        printf("**************************************\n");

        for (int i = 0; i < 7; i++)
        {
            int j = i + 1;
            printf("  %d                 ", j);
            printf("  %lf  \n", price3[i]);

            printf("**************************************\n");
        }

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
        printf("\t\t\t|\t       WEEKLY FLUCTUATIONS \t\t\t\t|\n");
        printf("\t\t\t|\t                                          \t\t|\n");
        printf("\t\t\t-----------------------------------------------------------------\n");

        double price4[7] = {24.15, 26.2, -3.10, -90.8, 53.50, 6.95, 2};

        printf("\n");
        printf("\n");
        printf("\n");

        printf(" Day No    ||    ");
        printf(" Stock Price \n");

        printf("**************************************\n");

        for (int i = 0; i < 7; i++)
        {
            int j = i + 1;
            printf("  %d                 ", j);
            printf("  %lf  \n", price4[i]);

            printf("**************************************\n");
        }

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
        printf("\t\t\t|\t      WEEKLY FLUCTUATIONS  \t\t\t\t|\n");
        printf("\t\t\t|\t                                          \t\t|\n");
        printf("\t\t\t-----------------------------------------------------------------\n");

        double price5[7] = {47.15, 23.9, -10.2, 21.11, -54.5, 4.03, -34.23};

        printf("\n");
        printf("\n");
        printf("\n");

        printf(" Day No    ||    ");
        printf(" Stock Price \n");

        printf("**************************************\n");

        for (int i = 0; i < 7; i++)
        {
            int j = i + 1;
            printf("  %d                 ", j);
            printf("  %lf  \n", price5[i]);

            printf("**************************************\n");
        }

        max(price5);
        min(price5);
        break;
    }
}

int main()
{

   system("cls");
    char username[15];
    char password[12];

    printf("Enter your username:\n");
    scanf("%s", &username);
    int f = 0;
    printf("Enter your password:\n");
    scanf("%s", &password);
    char a[15] = "Prajjwal";
    char b[15] = "Kanishk";
    char c[15] = "Arpita";
    char d[15] = "Kulsum";
    if (strcmp(username, a) == 0 || strcmp(username, b) == 0 || strcmp(username, c) == 0 || strcmp(username, d) == 0)
    {
        if (strcmp(password, "07171821") == 0)
        {

            printf("\nWelcome.Login Success!\n");
            f = 1;
        }
        else
        {
            printf("\nwrong password");
        }
    }
    else
    {
        printf("\nUser doesn't exist");
    }

    if (f == 1)
    {

    printf("\t\t\t-----------------------------------------------------------------\n");

    printf("\t\t\t|                                          \t\t\t|\n");
    printf("\t\t\t|\t\t    Welcome To Investopedia   \t\t\t|\n");
    printf("\t\t\t|\t                                          \t\t|\n");
    printf("\t\t\t-----------------------------------------------------------------\n");
    printf("\n");

    printf("\t\t\t-----------------------------------------------------------------\n");

    printf("\t\t\t|\t                                           \t\t|\n");
    printf("\t\t\t|\t\t  :::::::::::::::::::::::::  \t\t\t|\n");
    printf("\t\t\t|\t\t        Choose From:  \t\t\t\t|\n");
    printf("\t\t\t|\t\t  :::::::::::::::::::::::::  \t\t\t|\n");
    printf("\t\t\t|\t\t         \t\t\t\t\t|\n");
    printf("\t\t\t|\t\t      1: Crypto_Currency  \t\t\t|\n");
    printf("\t\t\t|\t\t      2: Stock_Market  \t\t\t\t|\n");
    printf("\t\t\t|\t\t      3: Mutual_Funds  \t\t\t\t|\n");
    printf("\t\t\t|\t\t      4: Calculator  \t\t\t\t|\n");

    printf("\t\t\t|\t                                           \t\t|\n");
    printf("\t\t\t-----------------------------------------------------------------\n");
    printf("\n");

    printf("Enter Your Mode Of Investment:  ");
    int choice;
    scanf("%d", &choice);
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
}
