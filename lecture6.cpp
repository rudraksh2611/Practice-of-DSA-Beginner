//For Loops:
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=10;
    
    for(int i=1; i<num ;i++ )
    {
        cout<<i<<endl;
    }
    return 0;
}
*/
/*// example for sum of n terms (for loop):
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n;
    cin>>n;

    int sum=0;
    for (int i=1;i<=n;i++)
    {
        sum+=i;
    }
        cout<<sum<<endl;
        return 0;
}
*/


//While Loop:
//example:
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1;
    while (i<5)
    {
        cout<<i<<endl;
        i++;
    } 
    return 0;
}
*/

//Ques-> Print the sum of the first 'n' natural no.s where 'n' is the input?
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,sum=0,i=1;
   cin>>n;

   while(i<=n)
   {
    sum +=i;
    i++;
   }
   cout<<sum<<endl;

    return 0;
}
*/


//Omitting init statement in for loops:
/*#include <bits//stdc++.h>
using namespace std;
int main()
{
    int i=1;
    for(;i<5;i++)
    {
        cout<<i<<endl;
    }
    return 0;
}*/

//Omitting condition in for loop:(I also omit the iterating faactor and plaaced in while loop)
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=1;;)
       while(i<5){
        cout<<i<<endl;
        i++;
        }
    return 0;
}
*/
//Omit final expression in for loop :
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i=1;i<5;)
    {
    cout<<i<<endl;
    i++;
    }
    return 0;
}*/

//Multiple Loop variables in for loop: (Doubt in J value)
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0,j=4;i<4,j>5;i++,j++)
    {
        //cout<<i<<" "<<endl;
        cout<<j<<" "<<endl;
    }
    return 0;
}
*/

//Example of while loop where when user gives us number as -1 then we end our loop:
/*#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n;
    cin>>n;
    while (true){
        
        if(n == -1)
        {
            cout<<n<<endl;
            break;
        }
        else
        {
            cout<<"Nope"<<endl;
            break;
        }
    }
    return 0;
}
*/
//Ques-> Print the 1st multiple of 5 which is also a multiple of 7?
#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*int i=5;
    while(true)
    {
        if (i%7==0) // 5%7  !=0
                    // 10%7 !=0
                    // 15%7 !=0
                    // continue 
        {
            cout<<i<<endl;
            break;
        }
        i+=5;
    }*/

    // from for loop:
    for(int i=5;;i+=5)
    if (i%7==0)
    {
        cout<<i<<endl;
        break;
    }
    return 0;
}
