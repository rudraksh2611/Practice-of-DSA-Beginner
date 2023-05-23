//Rectangle Shape :
/*
# include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter Row number:";
    cin>>row;
    cout<<"Enter Columns Number:";
    cin>>col;

    for (int i=1;i<=row;i++)
    {
        for (int j=1;j<=col;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/

//Hollow Rectangular Pattern:
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    int row,col;

    cout<<"Enter No. of Rows:";
    cin>>row;
    cout<<"Enter No. of Columns:";
    cin>>col;

    for (i=1;i<=row;i++)
    {
        for (j=1;j<=col;j++)
        {
            if (i==1 || i==row || j==1 || j==col)
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
*/

//Half Pyramid pattern:
/*
# include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    int row;

    cout<<"Enter the No. of Rows:";
    cin>>row;

    for (i=1;i<=row;i++)
    {
        for (j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0; 
}
*/

//Inverted Half Pyramid pattern:
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    int row;
    
    cout<<"Enter No. of Rows Required:";
    cin>>row;

    for (i=row;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
