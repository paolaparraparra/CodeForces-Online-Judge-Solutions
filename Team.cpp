#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0;
    cin>>n;

    while(n--)
    {
        int p, v, t, s = 0;
        cin>>p>>v>>t;

        int a[3] = {p,v,t};
        for(int i = 0; i<3; ++i)
        {
            s +=a[i];
        }
        if(s >= 2){c++;}
    }
    cout<<c<<endl;

    return 0;
}