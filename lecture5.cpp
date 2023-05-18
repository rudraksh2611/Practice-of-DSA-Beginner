//If-else (PASS/FAIL!)
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cout<<"enter marks: ";
    cin>>marks;

    if(marks>33){
        cout<<"pass";
    }
    else{
        cout<<"fail";
    }
    return 0;
}
*/

//Odd and Even output:
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"enter num-";
    cin>>num;

    if (num%2==0)
    {
        cout<<num<<" - Even";
    }
    else
    {
        cout<<num<<" - Odd";
    }
    return 0;
}
*/
//if- else if STATEMENT:
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter maarks-";
    cin>>marks;

    if (marks>80)
    {
        cout<<"A";
    }
    else if (marks>60)
    {
        cout<<"B";
    }
    else if (marks>40)
    {
        cout<<"C";
    }
    else
    8{
        cout<<"fail";
    }
    return 0;
}
*/

// To divide people into 3 age groups depending upon your age:
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cout<<"Enter Age: ";
    cin>>age;

    if (age<12)
    {
        cout<<"Child";
    }
    else if (age>18)
    {
        cout<<"Adult";
    }
    else
    {
        cout<<"Teenager";
    }
    return 0;
}
*/

//Nested if - else STATEMENT: 
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;

    if(marks>40)
    {
        if(marks>80)
        {
            cout<<"Gracefully Passed";
        }
        else
        {
            cout<<"Passed";
        }
    }
    else
    {
        cout<<"Fail";
    }
    return 0;
}
*/

//Ternary Operator:
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int marks;
   cout<<"Enetr marks: ";
   cin>>marks;

    if(marks>33)
    {
        cout<<"pass"<<endl;
    }
    else
    {
        cout<<"Fail"<<endl;
    }
//above 8 lines code converted below in single line using ternary operator:

   marks>33 ? cout<<"Pass" : cout<<"fail";

   return 0; 
} 
*/

//Common Misconceptions 
/*
#include<bits/stdc++.H>
using namespace std;
int main()
{
    if(false & 5/0==1)
    return 0;    
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
  if(false && 5/0==1)
  {
        cout<<"run"<<endl;
    }
    else
    {
        cout<<"Error";
    }
  
  return 0;  
} 
*/
/*
#include<bits/stdc++.h>
using namespacce std;
int main()
{
    if(true | 5/0==1)
    {
        cout<<"run"<<endl;
    }
    else
    {
        cout<<"Error";
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    if (true || 5/0==1)
    {
        cout<<"run"<<endl;
    }
    else
    {
        cout<<"Error";
    }
    return 0;
}
*/

//Q. W.T.P. tp print the value if it is even and divisible by 3:
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;

    if ((num%2==0) && (num%3==0))
    {
        cout<<num<<endl;
    }
    else
    {
        cout<<"Not satisfied"<<endl;
    }
    return 0;
}
*/

//Q. W.T.P. to print the value if it is divisible by 3 or 5:
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Eneter a number: "<<endl;
    cin>>num;

    if ((num%3==0) || (num%5==0))
    {
        cout<<num<<endl;
    }
    else
    {
        cout<<"not divisible"<<endl;
    }
    return 0;
}
*/
/*
//Q. Print the day based on  the day:
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int day;
    cout<<"Enter day: ";
    cin>>day;

    switch(day)
    {
        case 1:
        cout<<"Mon"<<endl;
        break;

        case 2:
        cout<<"Tues"<<endl;
        break;

        case 3:
        cout<<"Wed"<<endl;
        break;

        case 4:
        cout<<"Thur"<<endl;
        break;

        default :
        cout<<"Default Case."<<endl;
    }
    return 0;

}
*/

//Q. To print whether the letter is consonant or vowel:
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char character;
    cout<<"Enter a character: "<<endl;
    cin>>character;

    switch (character)
    {
        case 'a':
        cout<<"Vowel"<<endl;
        break;

        case 'e':
        cout<<"Vowel"<<endl;
        break;

        case 'i':
        cout<<"Vowel"<<endl;
        break;

        case 'o':
        cout<<"Vowel"<<endl;
        break;

        case 'u':
        cout<<"Vowel"<<endl;
        break;

        default:
        cout<<"Consonant"<<endl;
    }
    return 0;
}
*/

//Output :
#include<bits./stdc++.h>
using namespace std;
int  main()
{
    int course=2;
    switch(course)
    {
        case 1:
        cout<<"Java"<<endl;
        
        case 2:
        cout<<"Python"<<endl;

        case 3:
        cout<<"cpp"<<endl;

    }
    return 0;
}