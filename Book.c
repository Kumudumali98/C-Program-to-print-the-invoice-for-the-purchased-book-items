#include <stdio.h>

void main()
{

    char NAME[100];
    printf("\nCustomer Name :");
    scanf("%s",&NAME);

    int N;
    printf("How many number of entries do you going to enter\?\n\t\t");
    scanf("%d",&N);

    int CODE[N];
    int QTY[N];
    float UPRICE[N];

    int i;
    for (i=0; i<N; i++)
    {
        printf("\nBook Number : ");
        scanf("%d",&CODE[i]);

        printf("Quantity =");
        scanf("%d",&QTY[i]);

        printf("Unit Price =");
        scanf("%f",&UPRICE[i]);

    }

    printf("\n\n\t\"Maddy`s Print Shop - Books to Change The World\"\n\t\t\tInvoice\n\n");

    printf("Custormer Name : %s",NAME);

    printf("\n-----------------------------------------------------------------------\n");

    printf("Code\tQty\t\tUnit Price\t\tLine Total");

    printf("\n-----------------------------------------------------------------------\n");

    float LINET,SUM,DISC,TOT;

    for (int j = 0; j <N; j++)
    {
        LINET=UPRICE[j]*QTY[j];
        SUM=SUM+LINET;
        printf("BN%d\t%d\t\t%.2f\t\t\t%.2f\n",CODE[j],QTY[j],UPRICE[j],LINET);
    }
    
    printf("-----------------------------------------------------------------------\n");

    printf("\t\t\tSub Total\t\t%.2f\n\n",SUM);

    if(SUM>=5000)
    {
        DISC=SUM*0.1;
    }
    else if(SUM>=1000)
    {
        SUM=SUM*0.05;
    }
    else
    {
        DISC=0;
    }

    printf("\t\t\tDiscount\t\t%.2f\n",DISC);

    printf("-----------------------------------------------------------------------\n");

    TOT = SUM-DISC;
    printf("\t\t\tTotal\t\t\t%.2f\n",TOT);

    printf("-----------------------------------------------------------------------\n");

    printf("\t\tThank You for Your Business!\n\n");
}