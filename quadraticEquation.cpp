#include "iostream"
#include "cmath"
int main()
{
    std::cout<<"this program is designed to receive the values of a,b,c and find the roots of the quadratic equation"<<std::endl
             <<"please enter the required values\n";

    float a , b , c , delta;

    std::cout<<"\n";
    std::cin>>a>>b>>c;

    if (0 == a)
    {
        std::cout<<"the value of 'a' cannot be set to zero. in that case the equation will be linear."<<std::endl
                 <<"press enter to exit the program";
        system("pause >nul");
        return 0;
    }

    delta = pow (b,2) - 4 * a * c;

    if (delta > 0)
    {
        float x1,x2;
        x1 = ((-b) + sqrt(delta)) / (2*a);
        x2 = ((-b) - sqrt(delta)) / (2*a);
        std::cout<<"\ndelta is: "<<delta<<std::endl<<"there are two real roots for this quadratic equation."<<"\n\tx1 is: "<<x1<<"\n\tx2 is: "<<x2<<"\n";
    }

    else if (delta < 0)
        std::cout<<"\ndelta is " <<delta<< " .there are no real roots for this equation\n";
    else
    {
        float doubleRoot = (-b) / (2 * a);
        std::cout<<"\ndelta is '" << delta << "'. in this case there is one real root, called the double root, and is equal to:  "<<doubleRoot<<"\n";
    }
    std::cout<<"press enter to finish the program";
    system("pause >nul");

}