#include <iostream>
#include <cmath>
using namespace std;
float quadraticequation(float a, float b, float c)
{
    float d, root1, root2, realpart, imagepart;
    d = b * b - (4* a * c);
    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        cout <<"x ="<< root1;
        cout <<"x ="<< root2;
    }
    else if (d == 0)
    {
        root1 = -b / (2 * a);
        cout << "x = "<<root1;
    }
    else
    {
        realpart = -b / (2 * a);
        imagepart = sqrt(-d) / (2 * a);
        cout <<"x "<< realpart << "+" << imagepart;
        cout <<"x "<< realpart << "-" << imagepart;
    }
}

main()
{
    int a, b, c, eq;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
    cout << "Enter the value of c:";
    cin >> c;
    quadraticequation(a, b, c );
    
}