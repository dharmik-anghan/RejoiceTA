// 8. Determine the roots of a quadratic equation given the coefficients.
/*
For a quadratic equation ax2 + bx + c = 0, The roots are calculated using the formula, 
x = (-b ± √ (b2 - 4ac) )/2a
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c;
    cout<<"Enter Quadratic Equation ax2 + bx + c = 0\nEnter value of a,b,c\n"<<endl;
    cin>>a>>b>>c;
    double y = sqrt((b*b)-(4*a*c));
    double ansP = (-(-b) + y) / 2*a;
    double ansN = (-(-b) - y) / 2*a;

    cout<<"X = "<<ansP<<"\nX = "<<ansN;    

    return 0;
}