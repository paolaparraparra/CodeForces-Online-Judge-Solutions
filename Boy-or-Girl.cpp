#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin>>name;
    int c = 0;

    sort(name.begin(), name.end());
    
    for(int i = 1; i< name.size(); ++i)
    {
        if( name[i] != name[i - 1])
        {
            c++;
        }
    }
    
    if(c%2!=0){cout<<"CHAT WITH HER!"<<endl;}
    else{cout<<"IGNORE HIM!"<<endl;}
    return 0;
}