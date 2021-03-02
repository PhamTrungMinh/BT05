#include <iostream>
using namespace std;

int ucln(int a, int b)
{
    if(a==b) return a;
    if(a>b) return ucln(a-b,b);
    return ucln(a,b-a);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << ucln(a,b) << endl;
    if(ucln(a,b)==1) cout << "2 so nguyen to cung nhau";
    else cout << "2 so ko nguyen to cung nhau";
}
