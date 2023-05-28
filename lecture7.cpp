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
/*#include <bits/stdc++.h>
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
*/

//Half Pyramid pattern after 180 degree Rotation:
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;

    for( int row=1; row<=n; row++)
    {
        for (int col=1; col<=n; col++)//____ [col= column] 
        {
            if(col<=n-row) //
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/

// Number Half Pyramid:
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number which denotes height of your Pyramid :";
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        for (int col=1; col<=row;col++)
        {
            cout<<row;
        }
        cout<<endl;
    }
    return 0;
}*/

//Floyd Pyramid:
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=1;
    cout<<"Enter a number which denotes height of your Pyramid:";
    cin>>n;

    for (int row=1; row<=n; row++)
    {
        for (int col=1; col<=row; col++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}
*/

//____" Butter Fly "___:
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number which will denote your Butter Fly size:";
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        for (int col=1; col<=row; col++)
        {
            cout<<"*";
        }

        int space = 2*n - 2*row;

        for (int col=1; col<=space; col++)
        {
            cout<<" ";
        }

        for (int col=1; col<=row; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
//Mirroring of our Upper code :
    for (int row=n; row>=1; row--)
    {
        for (int col=1; col<=row; col++)
        {
            cout<<"*";
        }

        int space = 2*n - 2*row;

        for (int col=1; col<=space; col++)
        {
            cout<<" ";
        }

    for (int col=1; col<=row; col++)
        {
            cout<<"*";
        }
        cout<<endl;    
    }
    return 0;
}