#include<stdio.h>
#include<conio.h>
int main()
{
    // clrscr();
    int b,n,i,rate,qty;
    float gst,tot,gt=0;
    printf("Choose any one option from the below options\n");
    printf("\n1. GROCERY");
    printf("\n2. STATIONERY");
    printf("\n3. CLOTHING");
    printf("\n\nEnter Category No. here = ");
    scanf("%d", &b);
    switch (b)
    {
    case 1:
        // clrscr();
        printf("\nYou have selected GROCERY option\n\n");
        printf("Enter the total items : ",n);
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            printf("\nEnter the quantity of %d item : ",i);
            scanf("%d",&qty);
            printf("Enter the rate of %d item : ",i);
            scanf("%d",&rate);
            tot=qty*rate;
            printf("TOTAL = %.2f\n",tot);
            gt+=tot;
        }
        printf("\nGRAND TOTAL = %.2f",gt);
        gst=gt*5/100;
        printf("\nGST charged 5%% = %.2f",gst);
        gt=gt+gst;
        printf("\nGRAND TOTAL after GST = %.2f",gt);
        break;
    case 2:
        // clrscr();
        printf("\nYou have selected STATIONERY option\n\n");
        printf("Enter the total items : ",n);
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            printf("\nEnter the quantity of %d item : ",i);
            scanf("%d",&qty);
            printf("Enter the rate of %d item : ",i);
            scanf("%d",&rate);
            tot=qty*rate;
            printf("TOTAL = %.2f\n",tot);
            gt+=tot;
        }
        printf("\nGRAND TOTAL = %.2f",gt);
        gst=gt*12/100;
        printf("\nGST charged 12%% = %.2f",gst);
        gt=gt+gst;
        printf("\nGRAND TOTAL after GST = %.2f",gt);
        break;
    case 3:
        // clrscr();
        printf("\nYou have selected CLOTHING option\n\n");
        printf("Enter the total items : ",n);
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            printf("\nEnter the quantity of %d item : ",i);
            scanf("%d",&qty);
            printf("Enter the rate of %d item : ",i);
            scanf("%d",&rate);
            tot=qty*rate;
            printf("TOTAL = %.2f\n",tot);
            gt+=tot;
        }
        printf("\nGRAND TOTAL = %.2f",gt);
        gst=gt*18/100;
        printf("\nGST charged 18%% = %.2f",gst);
        gt=gt+gst;
        printf("\nGRAND TOTAL after GST = %.2f",gt);
        break;
    default:
        printf("Your have not selected the appropriate option, run the code again and select any one option from the given list");
        break;
    }
}