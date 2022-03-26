#include <stdio.h>
#include <math.h>

void lumpsum(float p1, float r1, float y1)
{
    printf("                                        \t Loading LUMPSUM CALCULATOR .......            \n\n");

    printf("Enter the amount you want to invest initially : ");
    scanf("%f", &p1);
    printf("Enter expected rate of interest : ");
    scanf("%f", &r1);
    printf("How long you want your investments to be : ");
    scanf("%f", &y1);

    float ans = pow(((1 + 0.01 * r1)), y1);
    printf("Corpus value of your invested amount is : %0.2f Rs\n", p1 * ans);
    printf("Total Earnings : %.2f Rs\n", p1 * ans - p1);
    printf("Total Amount Deposited : %.2f Rs\n", p1);
}

void sip(float p2, float r2, float y2)
{
    printf("                                        \t Loading SIP CALCULATOR .......            \n\n");
    printf("Enter the amount you wish to invest every year : ");
    scanf("%f", &p2);
    printf("Enter expected rate of interest : ");
    scanf("%f", &r2);
    printf("How long you want your investments to be : ");
    scanf("%f", &y2);
    float sum = 0;

    for (int i = 1; i <= y2; i++)
    {
        sum = p2 + sum;
        sum = sum + sum * r2 * (0.01);
    }
    printf("Your total corpus value is : %.2f Rs\n", sum);
    printf("Total Earnings : %.2f Rs\n", sum - p2 * y2);
    printf("Total Amount Deposited : %.2f Rs\n", p2 * y2);
}

void goalPlanning(float p3, float r3, float y3)
{
    printf("                                        \t Loading GOAL PLANNING CALCULATOR .......            \n\n");
    printf("Enter your Targeted Wealth : ");
    scanf("%f", &p3);
    printf("Enter expected rate of return : ");
    scanf("%f", &r3);
    printf("Enter how fast you want to reach your goal : ");
    scanf("%f", &y3);
    float ans = pow(((1 + 0.01 * r3)), y3);
    printf("Investment amount needed initially is : %0.2f Rs\n", p3 / ans);
}

void timeDuration(float initial, float final, float roi)
{
    printf("                                        \t Loading TIME DURATION CALCULATOR .......            \n\n");
    printf("Enter your targeted wealth : ");
    scanf("%f", &final);
    printf("Enter single investment amount : ");
    scanf("%f", &initial);
    printf("Enter expected rate of return : ");
    scanf("%f", &roi);
    printf("Expected time duration is : %.2f years", (log(final) - log(initial)) / log((1 + (0.01) * roi)));
}

int main()
{
    printf("                                      ****  SELECT THE TYPE OF CALCULATOR YOU WANT TO USE : ****\n                      ");
    printf("                                  1.)   LUMPSUM CALCULATOR \n                     ");
    printf("                                   2.)      SIP CALCULATOR \n                     ");
    printf("                                   3.)  GOAL PLANNING CALCULATOR \n                     ");
    printf("                                   4.)  TIME DURATION CALCULATOR  \n                    ");
    printf("                                   5.)  EXIT         \n                    ");
    printf("\n");

    int choice;
    printf("Enter your choice from 1 2 3 4 listed calculators : ");

    float p1, r1, y1;
    float p2, r2, y2;
    float p3, r3, y3;
    float intial, final, roi;
    while (choice != 5)
    {
        scanf("%d", &choice);
        printf("\n");
        switch (choice)
        {
        case 1:
            lumpsum(p1, r1, y1);
            break;
        case 2:
            sip(p2, r2, y2);
            break;
        case 3:
            goalPlanning(p3, r3, y3);
            break;
        case 4:
            timeDuration(intial, final, roi);
            break;
        default:
            printf("Please input a valid choice");
            break;
        }

        printf("\n\nPlease enter your choice again! : ");
    }

    return 0;
}