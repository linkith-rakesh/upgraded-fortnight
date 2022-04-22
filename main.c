/*TO FIND THE ROOTS OF A QUADRATIC EQUATION*/

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    double Disc,d;
    double root1,root2;
    printf("Enter an integer coeffecients of quadratic equation: ");
    scanf("%d %d %d",&a,&b,&c);
    Disc= (b*b)-(4*a*c);
    if (Disc>0)
    {
        printf("Roots are real \n");
        d=sqrt(Disc);
        root1=(-b+d)/(2*a);
        root2=(-b-d)/(2*a);
        printf("The roots are %lf ,%lf\n",root1,root2);
    }
    else
    {
        if (Disc==0)
        {
            printf("The roots are equal");
            root1=(-b)/(2*a);
            printf("The root is %lf\n",root1);
        }
        else
        {
            printf("complex roots");
            double real_part=(-b)/(2*a);
            double img_part= d/(2*a);
            printf("Real part is %lf\n",real_part);
            printf("Imaginary part +i%lf , -i%lf\n",img_part,img_part);
        }
    
    }

    return 0;
}
