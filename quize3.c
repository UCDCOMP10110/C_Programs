Lab questions
Q1)
/*write a program to read the base and hight of a triangle and display the area.
the formula for the area of a triangle is [1/2(base*height)].*/
 #include <stdio.h>
 #include <math.h>

 int main(void)
 {
     double base;
     double height;
     double ans;



     printf("Please enter the height: ");
     scanf("%lf", &height);

     printf("please enter the length of the base: ");
     scanf("%lf", &base);

     ans = (base*height)*0.5;


     printf("The area of triangle is %f", ans);

     return 0;


 }

Q2)
/*Q2 pi is pie=3.14*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    double radius;
    double ans;

    printf("Pleas enter the radius of circule: ");
    scanf("%lf", &radius);

    ans = (radius*radius)*3.14;

    printf("the area of the circule is %f", ans);

    return 0;
}












Q3)
/*Q3*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    double euro;
    double ans;

    printf("Please enter Euro: ");
    scanf("%lf", &euro);

    ans = (euro*0.80);

    printf("this is worth %f sterling.", ans);

    return 0;
}












Q4)
/*Q4 pi is pie=3.14*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    double radius;
    double ans;

    printf("Please enter the radius of the sphere: ");
    scanf("%lf", &radius);

    ans = ((radius*radius*radius)*3.14*4/3);

    printf("the volume of sphere is %f", ans);

    return 0;
}












Q5)
/*Q5 pi is pie=3.14*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    double width;
    double ans;

    printf("Please enter the width of the cube: ");
    scanf("%lf", &width);

    ans = (width*width*width);

    printf("the width of cube is %f", ans);

    return 0;
}












6)
/*Q6 pi is pie=3.14*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    double width;
    double height;
    double depth;
    double ans;

    printf("Please enter the height of the cube: ");
    scanf("%lf", &height);
    printf("Please enter the width of the cube: ");
    scanf("%lf", &width);
    printf("Please enter the depth of the cube: ");
    scanf("%lf", &depth);

    ans = (height*width*depth);

    printf("the volume of cube is %f", ans);

    return 0;
}







Q7)
/*Q7 pi is pie=3.14*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    double celsius;
    double ans;

    printf("Please enter the celsius: ");
    scanf("%lf", &celsius);

    ans = (5/9*celsius)+32;

    printf("the fahrenheit %f", ans);

    return 0;
}











Q8)
/*Q8 pi is pie=3.14*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    double fahrenheit;
    double ans;

    printf("Please enter the fahrenheit: ");
    scanf("%lf", &fahrenheit);

    ans = (fahrenheit-32)*5/9;

    printf("the celsius %f", ans);

    return 0;
}












Q9)
/*Q9 pi is pie=3.14*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    double first_number;
    double second_number;
    double ans;

    printf("Please enter the first number: ");
    scanf("%lf", &first_number);
    printf("Please enter the second number: ");
    scanf("%lf", &second_number);


    ans = first_number - second_number;

    printf("the results are %f", ans);

    return 0;
}








10)
/*Q10 pi is pie=3.14*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    double first_number;
    double second_number;
    double ans;

    printf("Please enter the first number: ");
    scanf("%lf", &first_number);
    printf("Please enter the second number: ");
    scanf("%lf", &second_number);


    ans = first_number + second_number;

    printf("the results are %f", ans);

    return 0;
}








Q11)
/*Q11 PART1*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    double first_number;
    double second_number;
    double ans;

    printf("Please enter the first number: ");
    scanf("%lf", &first_number);
    printf("Please enter the second number: ");
    scanf("%lf", &second_number);


    ans = first_number * second_number;

    printf("the results are %f", ans);

    return 0;
}








/*Q11 PART2*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    double first_number;
    double second_number;
    double ans;

    printf("Please enter the first number: ");
    scanf("%lf", &first_number);
    printf("Please enter the second number: ");
    scanf("%lf", &second_number);


    ans = first_number / second_number;

    printf("the results are %f", ans);

    return 0;
}
