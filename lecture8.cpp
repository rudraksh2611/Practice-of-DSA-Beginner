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
/*#include<bits/stdc++.h>
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
}*/

// Question 4-> Given 2 numbers 'a' and 'b'. Find 'a' raise to the power 'b':
/*#include<bits./stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter A which is your base number:";
    cin>>a;
    cout<<"Enter B which is your base to the 'Power' number:";
    cin>>b;

    int result=1;
    for (int i=1; i<=b; i++)
    {
        result*=a;
    }
    cout<<"Your Answer is:"<<result<<endl;
    return 0;
    
}*/

//Question 5-> Find the sum of a Series -> (Series=1-2+3-4....n)
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number till which you want to get your series extended:";
    cin>>n;

    int result=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)//If the number of terms is even
        {
            result -=i;
        }
        else
        {
            result +=i;
        }
    }
    cout<<"Your Sum of the given series is:"<<result;
    return 0;
}*/

//Question 6->Print the first 'n' Factorial:
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a nunber of what you want a factorial:";
    cin>>n;

    int factorial =1;
    for (int i=1;i<=n;i++)
    {
        factorial *=i;
    }
    cout<<"Yoour answeer is:"<<factorial<<endl;
    return 0;
}