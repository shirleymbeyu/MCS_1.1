#include <stdio.h>
#include <math.h>

int main()
{   //ASSIGNMENT OPERATORS = :
    printf("RESULTS FOR ASSIGNMENT OPERATOR: \n");
    int a = 10;
    printf("%d\n", a);
    printf("%d\n");
    printf("\n");

    {//MATHEMATICAL OPERATORS:
    int a=20;
    int b=10;
    printf("RESULTS FOR MATHEMATICAL OPERATORS: \n");
    printf("sum a+b:%d\n", a+b);
    printf("multiplication a*b:%d\n", a*b);
    printf("division a/b:%d\n", a/b);
    printf("modulo operator a%b:%d\n", a%b);
    printf("\n");

   {//INCREMENT AND DECREMENT OPERATORS;
    int i,j,k,l,y,d;
    printf("RESULTS FOR INCREMENT OPERATOR: \n");
    int a = 10;
    int z;

    //pre-increment
    z=++a;
    printf("z=%d\n", z);
    printf("a=%d\n", a);
    i=10;
    j=++i+10;
    printf("j is %d\n", j);

    int b=20;
    int x;
    //Post-increment
    x=b++;
    k=5;
    l=5+k++;
    printf("x=%d\n", x);
    printf("b=%d\n", b);
    printf("l is %d\n", l);
    printf("k is %d\n", k);

    printf("RESULTS FOR DECREMENT OPERATORS: \n");
    //pre-decrement
    i=10;
    d=--i+10;
    printf("d is %d\n", d);

    //post-decrement
    x=5;
    y=5+x--;
    printf("y is %d\n", y);
    printf("\n");

    {//RELATIONAL OPERATORS:
    printf("RESULTS FOR RELATIONAL OPERATORS: \n");
    int x=10;
    int y=20;
    printf("%d\n", x>y);
    printf("%d\n", x>=y);
    printf("%d\n", x<y);
    printf("%d\n", x<=y);
    printf("\n");

    {//LOGIC OPERATORS:
    printf("RESULTS FOR LOGIC OPERATORS: \n");
    int a=10;
    int b=20;
    int c=30;
    printf("%d\n", (a>b)&&(a<c));
    printf("%d\n",(a>b)||(a<c));
    printf("%d\n", (!(a>b)));

    }
    }
    }
    }
    return 0;
}



