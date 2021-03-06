#include <iostream>
#include <cmath>
using namespace std;

int to_10(int n)
{
    int dec=0;
    int i=0;
    while(n>0)
    {
        dec += ((n%10) * pow(2,i));
        i++;
        n/=10;
    }
    return dec;
}

int to_2(int n)
{
    int i=31;
    int bin=0;
    while(i>=0)
    {
        bin*=10;
        if(n>=pow(2,i))
        {
            n-=pow(2,i);
            bin++;
        }
        i--;
    }
    return bin;
}

int main()
{
    int a;
    cin >> a;
    cout << to_2(a) << endl;
    cout << to_10(to_2(a)) << endl;
}
