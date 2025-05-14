#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e = 0;
    cin>>a>>b>>c>>d;

    int h[4] = {a, b, c, d};

    for(int i = 0; i<3; ++i)
    {
        if(h[i] == h[i + 1] || h[i] == h[i + 2] || h[i] == h[i + 3])
        {
            e++;
        }
        
    }
   
    cout<<e<<endl;
    return 0;
}