// To find the roots of a quadratic equation

#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c;
    float b_square, d, r1, r2, root_d;
    printf("Enter the coefficient of x^2: ");
    scanf("%d",&a);
    printf("Enter the coefficient of x: ");
    scanf("%d",&b);
    printf("Enter the constant: ");
    scanf("%d",&c);
    b_square = pow(b,2);
    d = (b_square) - (4*a*c);
    root_d = sqrt(d);
    if(d>0){
        r1 = ((-b) + root_d)/(2*a);
        r2 = ((b) + root_d)/(2*a);
        printf("The roots of the equation are %f and %f", r1, r2);
    }
    else if(d = 0){
        r1 = r2 = ((b) + root_d)/(2*a);
        printf("Same roots: %f", r1);
    }
    else{
        printf("The roots do not exist");
    }
}