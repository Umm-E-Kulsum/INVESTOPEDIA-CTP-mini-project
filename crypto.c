#include <stdio.h>
#include <string.h>

struct Crypto_Currency
{
   char coinname[35];
   float price;
   char Change[35];
} Bitcoin, Ethereum, Solana, Avalanche, The_Sandbox, Doge, Shiba_Inu;

struct topgainer
{
   char *name;
   float num;
   char *kill;
} Gainer, Looser;

struct portfolio
{
   int Current_value;
   int Invested;
   char *Returns;
   char *Return_percent;

} Total_investment;

int main()
{

   printf("\t\t\t CRYPTO CURRENCY   \n\n ");

   strcpy(Bitcoin.coinname, "BITCOIN");
   Bitcoin.price = 3128931.77;
   strcpy(Bitcoin.Change, "+1.68");

   strcpy(Ethereum.coinname, "ETHEREUM");
   Ethereum.price = 2211779.26;
   strcpy(Ethereum.Change, "+3.53");

   strcpy(Solana.coinname, "SOLANA");
   Solana.price = 7112.537;
   strcpy(Solana.Change, "+2.32");

   strcpy(Avalanche.coinname, "AVALANCHE");
   Avalanche.price = 6137.69;
   strcpy(Avalanche.Change, "+2.81");

   strcpy(The_Sandbox.coinname, "THE SABDBOX");
   The_Sandbox.price = 238.90;
   strcpy(The_Sandbox.Change, "+4.38");

   strcpy(Doge.coinname, "DOGE ");
   Doge.price = 9.90;
   strcpy(Doge.Change, "+2.85");

   strcpy(Shiba_Inu.coinname, "SHIBA INU");
   Shiba_Inu.price = 0.001956;
   strcpy(Shiba_Inu.Change, "+5.81");

   printf(" \t \t %s       %f     %s \n", Bitcoin.coinname, Bitcoin.price, Bitcoin.Change);
   printf(" \t \t %s      %f     %s \n", Ethereum.coinname, Ethereum.price, Ethereum.Change);
   printf(" \t \t %s        %f        %s \n", Solana.coinname, Solana.price, Solana.Change);
   printf(" \t \t %s     %f        %s \n", Avalanche.coinname, Avalanche.price, Avalanche.Change);
   printf(" \t \t %s   %f         %s \n", The_Sandbox.coinname, The_Sandbox.price, The_Sandbox.Change);
   printf(" \t \t %s         %f           %s \n", Doge.coinname, Doge.price, Doge.Change);
   printf(" \t \t %s     %f           %s \n", Shiba_Inu.coinname, Shiba_Inu.price, Shiba_Inu.Change);
   printf("--------------------------------------------------------------------\n");

   printf(" \n \t Do you want to know the top gainers and losers of today? (yes/no) \n ");
   char y[30] = "yes";
   char x[30] = "no";

   char p[30];
   scanf("%s", &p);

   if (strcmp(y, p) == 0)
   {
      Gainer.name = "PRAJJWAL SUHANE ";
      Gainer.num = 18.39;
      Gainer.kill = "+21.02%";
      Looser.name = "KANISHK DADHICH";
      Looser.num = 378.83;
      Looser.kill = "-11.52%";
      printf("---------------------------------------------------------\n");
      printf(" \t\t--- HERE IS THE TOP GAINER--- \n");

      printf("\t\t %s   %f  %s  \n \n ", Gainer.name, Gainer.num, Gainer.kill);
      printf("\t\t------------------------------------------------------\n");

      printf(" \t\t ---HERE IS THE TOP LOSER--- \n");
      printf("\t\t %s   %f  %s  \n \n\n", Looser.name, Looser.num, Looser.kill);




       printf("  \t\t ------Do you want to know my Portfolio  (yes/no)---------- \n\n");

      char a[30] = "yes";
      char b[30] = "no";

      char c[30];
      scanf("%s", &c);
      if (strcmp(a, c) == 0)
      {
         Total_investment.Current_value = 10519;
         Total_investment.Invested = 10000;
         Total_investment.Returns = "+519 Rs";
         Total_investment.Return_percent = "+5.19";

         printf("\t\t  Current value                    Invested\n");
         printf("\t\t  %d                               %d \n\n", Total_investment.Current_value, Total_investment.Invested);

         printf("\t\t  Returns                          Return_percent\n");
         printf("\t\t  %s                          %s \n\n", Total_investment.Returns, Total_investment.Return_percent);
         printf("\t\t----------------------------------------------------------\n");

         printf("\t\t  These are the list of coins in which I have invested\n");
         printf("\t\t  BITCOIN\n");
         printf("\t\t  ETHEREUM\n");
         printf("\t\t  DOGE COIN\n");



         printf("\t\t\t:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:\n");

      printf("\t\t\t*\t                                          \t\t*\n");
      printf("\t\t\t*\t          Thank You For Visiting!  \t\t\t*\n");
      printf("\t\t\t*\t                                          \t\t*\n");
      printf("\t\t\t:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:\n");
      }

      else
      {
         printf("\t\t\t:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:\n");

    printf("\t\t\t*\t                                          \t\t*\n");
    printf("\t\t\t*\t          Thank You For Visiting!  \t\t\t*\n");
    printf("\t\t\t*\t                                          \t\t*\n");
    printf("\t\t\t:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:\n");
      }
   }

   else
   {
      printf("  \t\t ------Do you want to know my Portfolio  (yes/no)---------- \n\n");

      char a[30] = "yes";
      char b[30] = "no";

      char c[30];
      scanf("%s", &c);
      if (strcmp(a, c) == 0)
      {
         Total_investment.Current_value = 10519;
         Total_investment.Invested = 10000;
         Total_investment.Returns = "+519 Rs";
         Total_investment.Return_percent = "+5.19";

         printf("\t\t  Current value                    Invested\n");
         printf("\t\t  %d                               %d \n\n", Total_investment.Current_value, Total_investment.Invested);

         printf("\t\t  Returns                          Return_percent\n");
         printf("\t\t  %s                          %s \n\n", Total_investment.Returns, Total_investment.Return_percent);
         printf("\t\t----------------------------------------------------------\n");

         printf("\t\t  These are the list of coins in which I have invested\n");
         printf("\t\t  BITCOIN\n");
         printf("\t\t  ETHEREUM\n");
         printf("\t\t  DOGE COIN\n");





         printf("\t\t\t:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:\n");

      printf("\t\t\t*\t                                          \t\t*\n");
      printf("\t\t\t*\t          Thank You For Visiting!  \t\t\t*\n");
      printf("\t\t\t*\t                                          \t\t*\n");
      printf("\t\t\t:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:\n");
      }

      else
      {
      printf("\t\t\t:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:\n");

      printf("\t\t\t*\t                                          \t\t*\n");
      printf("\t\t\t*\t          Thank You For Visiting!  \t\t\t*\n");
      printf("\t\t\t*\t                                          \t\t*\n");
      printf("\t\t\t:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:*:\n");

      }
   }
}