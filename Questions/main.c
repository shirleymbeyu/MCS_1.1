#include <stdio.h>
#include <stdlib.h>

int main()
{ //Prompting user input and displaying the value:
    int k, a;
    printf("enter k \n");
    scanf("%d", &k);
    printf("k is %d\n", k);
    printf("\n");

    printf("enter an integer a \n");
    scanf("%d", &a);
    printf("a is %d\n", a);
    printf("\n");

    {//simple manipulation using user input:
    int a,b,c,d,e,sum,difference;
    printf("enter two numbers\n");
    scanf("%d", &a);
    scanf("%d", &b);
    sum=a+b;
    printf("sum is %d\n", sum);

    printf("enter two numbers\n");
    scanf("%d", &c);
    scanf("%d", &d);

    difference= c-d;
    printf("difference is %d\n", difference);

    e= sum*difference;
    printf("The product of sum and difference is %d\n", e);
    printf("\n");

    {//Area and perimeter of square:
    int s,area,perimeter;
    printf("enter side s\n");
    scanf("%d", &s);
    perimeter=s*4;
    printf("perimeter is %d\n", perimeter);
    area=s*s;
    printf("area is %d\n", area);
    printf("\n");

    {//SIMPLE INTEREST:
    printf("Calculation of simple interest: \n");
    int principal,time,rate,si;
    printf("enter principal,time and rate \n");
    scanf("%d", &principal);
    scanf("%d", &time);
    scanf("%d", &rate);
    si=(principal*time*rate)/100;
    printf("simple interest is %d\n", si);
    printf("\n");

    {//Asking for user input(marks of five subjects) and getting the sum and percent for those:
    int maths,english,kiswahili,science,socialstudies,sum,percentage;
    printf("Enter marks of the 5 subjects \n");
    scanf("%d \n" "%d" "%d" "%d" "%d", &maths , &english, &kiswahili, &science, &socialstudies);
    sum = maths+english+kiswahili+science+socialstudies;
    printf("sum is %d\n", sum);
    percentage=(sum/5);
    printf("percentage is %d\n", percentage);

}
}
}
}
return 0;
}
