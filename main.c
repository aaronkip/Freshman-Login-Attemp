#include <stdio.h>
#include <stdlib.h>

int main()
{
    char password[8];
    int count = 0;
    int attempts;

    while (count < 3)
    {
        printf("Input password: ");
        scanf("%s",&password);

        if(strcmp(password, "Admin123") == 0)
        {
            printf("Login successful!\n");
            calculate();
            break;
        }
        else
        {
            attempts = 2 - count;
            count ++;
            printf("Login failed, Attempts remaining: (%d)\n",attempts);

        }

        memset(password,0,strlen(password));

        printf("\n");
    }

    return 0;
}
void calculate()
{
    float a,b,c,x,a2,b2,c2,x2,a3,b3,c3,x3,a4,b4,c4,x4,a5,b5,c5,x5;
    printf("Enter (a): ");
    scanf("%f",&a);
    printf("Enter (b): ");
    scanf("%f",&b);
    printf("Enter (c): ");
    scanf("%f",&c);
    printf("Enter (x): ");
    scanf("%f",&x);

    printf("Enter Second set of numbers:\n");
    printf("Enter (a): ");
    scanf("%f",&a2);
    printf("Enter (b): ");
    scanf("%f",&b2);
    printf("Enter (c): ");
    scanf("%f",&c2);
    printf("Enter (x): ");
    scanf("%f",&x2);

    printf("Enter Third set of numbers:\n");
    printf("Enter (a): ");
    scanf("%f",&a3);
    printf("Enter (b): ");
    scanf("%f",&b3);
    printf("Enter (c): ");
    scanf("%f",&c3);
    printf("Enter (x): ");
    scanf("%f",&x3);

    printf("Enter Fourth set of numbers:\n");
    printf("Enter (a): ");
    scanf("%f",&a4);
    printf("Enter (b): ");
    scanf("%f",&b4);
    printf("Enter (c): ");
    scanf("%f",&c4);
    printf("Enter (x): ");
    scanf("%f",&x4);

    printf("Enter Last set of numbers:\n");
    printf("Enter (a): ");
    scanf("%f",&a5);
    printf("Enter (b): ");
    scanf("%f",&b5);
    printf("Enter (c): ");
    scanf("%f",&c5);
    printf("Enter (x): ");
    scanf("%f",&x5);

    float result = a*(x*x)+b*x+c;
    float result2 = a2*(x2*x2)+b2*x2+c2;
    float result3 = a3*(x3*x3)+b3*x3+c3;
    float result4 = a4*(x4*x4)+b4*x4+c4;
    float result5 = a5*(x5*x5)+b5*x5+c5;

    system("cls");
    printf("\ta\t\tb\t\tc\t\tx\t\tPolynomial Value\n");
    printf("_________________________________________________________________________________________________________\n");
    printf("\t%.1f\t\t%.1f\t\t%.1f\t\t%.1f\t\t%.1f\n",a,b,c,x,result);
    printf("\t%.1f\t\t%.1f\t\t%.1f\t\t%.1f\t\t%.1f\n",a2,b2,c2,x2,result2);
    printf("\t%.1f\t\t%.1f\t\t%.1f\t\t%.1f\t\t%.1f\n",a3,b3,c3,x3,result3);
    printf("\t%.1f\t\t%.1f\t\t%.1f\t\t%.1f\t\t%.1f\n",a4,b4,c4,x4,result4);
    printf("\t%.1f\t\t%.1f\t\t%.1f\t\t%.1f\t\t%.1f\n",a5,b5,c5,x5,result5);

}
