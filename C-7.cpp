#include <iostream>
using namespace std;

void in(int m, int n)
{
    for(int i=0; i<m; i++) cout << " ";
    for(int i=0; i<n; i++) cout << "*";
    cout <<endl;
}

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
        in(5-i,2*i-1);
}
