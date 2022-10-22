#include<stdio.h>
int main(){
    int n,i;
    printf("1. Go to Case 1");
    printf("\n2. Go to Case 2");
    printf("\n3. Go to Case 3");
    printf("\nEnter your Case Number here = ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Hello you are on case 1 now");
        break;
        case 2:
        printf("<<<<You are on case 2>>>>");
        printf("\n1. Go to File 1");
        printf("\n2. Go to File 2");
        printf("\n3. Go to File 3");
        printf("\nNow select any one File from above = ");
        scanf("%d",&i);
        switch(i)
        {
            case 1:
            printf("I am file 1");
            break;
            case 2:
            printf("I am file 2");
            break;
            case 3:
            printf("I am file 3");
            break;
            default:
            printf("I am default");
        }
        break;
        case 3:
        printf("You have selected the Case 3 Now");
        break;
        default:
        printf("You haven't select any option so now it's default");
    }
}