#include <stdio.h>
int main()
{

    int a,b,c;
    int r = 1;

    while(r==1){
    system("cls");

    printf("\n\n");
    printf("\t+------------------------------------------+\n");
    printf("\t|                                          |\n");
    printf("\t|    Simple program with restart option    |\n");
    printf("\t|                                          |\n");
    printf("\t|      Community   : Programmer's Fort     |\n");
    printf("\t|      Programmmer : Sajidur Rahman        |\n");
    printf("\t|                                          |\n");
    printf("\t+------------------------------------------+\n");
    printf("\t\t|\n");
    printf("\t\t|\n");
    printf("\t\t|\n");
    printf("\t\t+----> 1st number : ");
    scanf("%d",&a);
    printf("\t\t|\n");
    printf("\t\t+----> 2nd number : ");
    scanf("%d",&b);
    printf("\t\t|\n");
    c = a + b;
    printf("\t\t+----= Total : %d",c);


    printf("\n\n\n\t\tRestart[1] & Stop[0] :");
    scanf("%d",&r);

    printf("\n\n");
    }

    return 0;
}
