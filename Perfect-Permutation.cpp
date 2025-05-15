#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, aux, c = 0;
    cin>>n;
    int a[n];

    if(n % 2 != 0)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(int i=0; i<n; ++i)
        {
            a[i] = i + 1;
        }
        //que la posicion i se intercambie con la posicion i + 1 para cualquier n
        for(int i=0; i<n/2; ++i)
        {
            aux = a[c];
            a[c] = a[c+1];
            a[c+1] = aux;
            c+=2;
        }
        for(int i=0; i<n; ++i)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}