//Rectangle Shape :
/*
# include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/

//Hollow Rectangular Pattern:
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,n;
    cin>>n>>m;

    for (i=1;i<=n;i++)
    {
        for (j=1;j<=m;j++)
        {
            if (i==1 || i==n || j==1 || j==m)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}