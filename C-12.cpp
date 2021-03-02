#include <iostream>
using namespace std;

int giaithua(int n)
{
    if(n<=1)    return 1;
    return n*giaithua(n-1);
}

int to_hop(int k, int n)
{
    return giaithua(n) / (giaithua(k) * giaithua(n-k));
}

int dieu_kien(int k, int n)
{
    if((1<=n && n<=20) && (0<=k && k<=n)){
        return 1;
    }
    return 0;
}

void nhapKN(int k[], int n[], int& soPhanTu)
{
    do{
        cin >> k[soPhanTu] >> n[soPhanTu];
        soPhanTu++;
    }
    while(k[soPhanTu-1]!=-1 && n[soPhanTu-1]!=-1);
}

int main()
{
    int k[100],n[100];
    int soPhanTu=0;
    nhapKN(k,n,soPhanTu);
    for(int i=0; i<soPhanTu-1; i++){
        if(dieu_kien(k[i], n[i])) cout << to_hop(k[i],n[i]) << endl;
        else cout << "Khong thoa man" << endl;
    }
}
