#include <iostream>
#include <cmath>
using namespace std;

int rnd(double d)
{
    if(int(d*10)%10 >= 5) return ceil(d);
    else return floor(d);
}

int main()
{
    double d;
    cin >> d;
    cout << rnd(d);
}
