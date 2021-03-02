#include <iostream>
using namespace std;
bool nguyen_to(int n)
{
    if(n==2 || n==3) return true;
    for(int i=2; i<=n/2; i++)
        if(n%i==0) return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    for(int i=2; i<n; i++)
        if(nguyen_to(i)) cout << i << " ";
}
