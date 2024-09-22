// Lab_03.3.cpp
// Магоцький Орест Маркович
// Лабораторна робота №3.3
// розгалуження, задане графіком функції
// варіант 18

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y, R;
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    //розгалуження
    if(x <= -1 -2 * R)
    {
        y = (-R*x) - (2 * (R * R));
    }
    else
        if(-1-2 * R < x && x <= 0)
        {
            y = (- 1.0/2) * x;
        }
        else
            if(0 < x && x <= R)
            {
                y = R - sqrt((R * R) - (x * x));
            }
            else
                if(R < x && x <= 2 * R)
                {
                    y = sqrt((R * R) - ((x * x) - (2 * R * x) + (R * R)));
                }
                else
                    y = (x - 2 * R)/ (6 - 2 * R);
    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}