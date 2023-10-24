// #include <iostream>
// #include <math.h>

// using namespace std;

// int main()
// {
//     int degree;
//     cout << "Enter the degree ";
//     cin >> degree;

//     int coeff[degree];
//     cout << "Enter the coefficients" << endl;
//     for (int i = 0; i <= degree; i++)
//     {
//         cin >> coeff[i];
//     }

//     // display of equation
//     for (int i = 0; i <= degree; i++)
//     {
//         if (degree == 0)
//         {
//             cout << coeff[i] << "*x^" << i << "+";
//         }
//         else if (i == degree)
//         {
//             cout << coeff[i] << "*x^" << i;
//         }
//         else
//         {
//             cout << coeff[i] << "*x^" << i << "+";
//         }
//     }

//     // solving the equation
//     cout << endl;
//     cout << "Enter the point " << endl;

//     int x, x1;
//     cin >> x >> x1;

//     float y = 0.0, y1 = 0.0, h = 0.001;

//     for (int i = 0; i <= degree; i++)
//     {

//         y = y + coeff[i] * pow(x, i);
//     }
//     cout << "y = " << y << endl;

//     for (int i = 0; i <= degree; i++)
//     {
//         y1 = y1 + coeff[i] * pow(x1, i);
//     }
//     cout << "y1 = " << y1 << endl;

//     float slope =(y-y1)/h;
//     cout<<"slope = "<<slope<<endl;

//     return 0;
// }
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int degree;
    cout << "Enter the degree " << endl;
    cin >> degree;

    int coeff[degree];
    cout << "Enter the coefficients " << endl;

    for (int i = 0; i <= degree; i++)
    {
        cin >> coeff[i];
    }

    // display of equation

    for (int i = 0; i <= degree; i++)
    {
        if (degree == 0)
        {
            cout << coeff[i] << "*x^" << i << "+";
        }
        else if (degree == i)
        {
            cout << coeff[i] << "*x^" << i;
        }
        else
        {
            cout << coeff[i] << "*x^" << i << "+";
        }
    }

    // solving the equation
    cout << endl;
    float x, x1;
    cout << "Enter the point " << endl;
    cin >> x >> x1;

    float y = 0.0, y1 = 0.0, h = 0.01;
    x1 = x + h;

    for (int i = 0; i <= degree; i++)
    {
        y += coeff[i] * pow(x, i);
    }
    cout << "y= " << y << endl;

    for (int i = 0; i <= degree; i++)
    {

        y1 += coeff[i] * pow(x1, i);
    }
    cout << "y1 = "<< y1 << endl;

    float slope =(y=y1)/h;
    cout<<"slope = "<<slope<<endl;

    return 0;
}