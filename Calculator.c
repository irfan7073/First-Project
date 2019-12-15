#include<stdio.h>
#include<math.h>
#define KEY "Enter the calculator Operation you want to do:"



int main()
{
    long X;
    char Calc_oprn;

    calculator_operations();

    while(X)
    {
        printf("\n");
        printf("%s : ", KEY);

        Calc_oprn=getche();

        switch(Calc_oprn)
        {
            case '+': addition();
                      break;

            case '-': subtraction();
                      break;

            case '*': multiplication();
                      break;

            case '/': division();
                      break;

            case '^': power();
                      break;

            case '!': factorial();
                      break;

            case '1': d_o();
                      break;
            case '2': d_h();
                      break;
            case '4': o_d();
                      break;
            case '5': h_d();
                      break;
            case '9': h_o();
                      break;

            case '10': b_o();
                      break;


             case '11': b_o();
                      break;


            case 'H':
            case 'h': calculator_operations();
                      break;


            case 'Q':
            case 'q': exit(0);
                      break;
            case 'c':
            case 'C': system("cls");
                      calculator_operations();
                      break;


            default : system("cls");

    printf("\n*You have entered unavailable option");
    printf("\n");
    printf("\nPlease Enter any one of below available ");
    printf("\n");
                      calculator_operations();
        }
    }
}


void calculator_operations()
{

    printf("\n             Welcome to C calculator \n\n");


    printf(" display available option \n\n");
    printf("Chose The function of Calculator:\n\n");
    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter ^ symbol for Power \n");
    printf("Enter ! symbol for Factorial \n\n");
    printf("1.decimal_to_octal      | 2.decimal_to_hexadecimal  | 3.decimal_to_binary      |\n");

    printf("4.octal_to_decimal      | 5.hexadecimal_to_decimal  | 6.binary_to_decimal      |\n");

    printf("7.octal_to_binary       | 8.octal_to_hexadecimal    | 9.hexadecimal_to_octal   |\n");

    printf("10.binary_to_octal      | 11.binary_to_hexadecimal  | 12.hexadecimal_to_binary |\n");
    printf("-------------------------------------------------------------------------------------------\n");


    printf("Press 'Q' or 'q' to quit \n");
    printf("the program \n");
    printf(" Press 'H' or 'h' to display ");
    printf("below options \n\n");
    printf("Enter 'C' or 'c' to clear the screen and \n\n");
    printf("-------------------------------------------------------------------------------------------\n");


}

void addition()
{
    int n, total=0, k=0, number;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    while(k<n)
    {
        scanf("%d",&number);
        total=total+number;
        k=k+1;
    }
    printf("Sum of %d numbers = %d \n",n,total);
}

void subtraction()
{
    int a, b, c;
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    c = a - b;
    printf("\n %d - %d = %d\n", a, b, c);
}

void multiplication()
{
    int a, b, mul;
    printf("\nPlease enter first numb   : ");
    scanf("%d", &a);
    printf("Please enter second number: ");
    scanf("%d", &b);
    mul=a*b;
    printf("\nMultiplication of entered numbers = %d\n",mul);
}

void division()
{
    float a, b, d;
    printf("\nPlease enter first number  : ");
    scanf("%f", &a);
    printf("Please enter second number : ");
    scanf("%f", &b);
    d=a/b;
    printf("\n Division of entered numbers=%f \n",d);
}


void power()
{
    double a,num, p;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    scanf("%lf",&a);

    printf("power : ");
    scanf("%lf",&num);

    p=pow(a,num);

    printf("\n %lf to the power %lf = %lf \n",a,num,p);
}
int factorial()
{
    int i,fact=1,num;

    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);

    if (num<0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
        return 1;
    }

    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",num,fact);
    return 0;
}

void d_o()
    {
        int n;
        scanf("%d",&n);
        printf("%o",n);
    }

void d_h()
    {
        int n;
        scanf("%d",&n);
        printf("%x",n);
    }

void o_d()
    {
        int n;
        scanf("%o",&n);
        printf("%d",n);
    }
void h_d()
    {
        int n;
        scanf("%x",&n);
        printf("%d",n);
    }
void h_o()
    {
        int n;
        scanf("%x",&n);
        printf("%o",n);
    }
void b_o()
    {
        int n;
        scanf("%x",&n);
        printf("%d",n);
    }

