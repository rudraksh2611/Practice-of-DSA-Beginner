//--------------LOOPS PROBLEMS----------------//
//Question 1 -> Count the number of digits for a given number n?
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int digits=0;
    while(n>0)
    {
        digits++;
        n = n/10;
    }
    cout<<"Number of digits are:"<<digits<<endl;
    return 0;
}
*/

//Question 2 -> Find the sum of digits in a given number 'n'?
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;

    int sum=0;//sum can be store in this variable.
    while (n>0)
    {
        int lastdigit = n%10;
        sum+=lastdigit;
        n=n/10;
    }
    cout<<"Sum is:"<<sum<<endl;
    return 0;
    
}
*/

//Question 3-> Reverse the digit number:
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number which you want to reverse:";
    cin>>n;

    int reverse=0;
    while(n>0)
    {
        int lastdigit = n%10;
        reverse = reverse * 10 + lastdigit;
        n/=10;
    }
    cout<<"Reverse Number is:"<<reverse<<endl;
    return 0;
}