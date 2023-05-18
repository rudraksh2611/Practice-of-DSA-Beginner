
// LECTURE-4

//Arithematic Operator:
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1=6, num2=3;

    cout<<(num1+num2)<<endl;
    cout<<(num1-num2)<<endl;
    cout<<(num1*num2)<<endl;
    cout<<(num1/num2)<<endl;
    cout<<(num1%num2)<<endl;

return 0;    
}
*/
// Relational Operators:
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1=6,num2=3;

    cout<<(num1==num2)<<endl;
    cout<<(num1!=num2)<<endl;
    cout<<(num1>=num2)<<endl;

    return 0;
}
*/

// Logical Operators:
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool exp1=true, exp2=false;
    
    cout<<(exp1 && exp2)<<endl;
    cout<<(exp1 || exp2)<<endl;
    cout<<(!exp1)<<endl;

    return 0;
}
*/

//Assignment Operator:
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1=6,num2=3;

    num1+=3;
    cout<<num1<<endl;
    num2-=2;
    cout<<num2<<endl;
    
    return 0;
}
*/

//Bitwise Operator:
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1=5; // 0101

    cout<<(num1<<1)<<endl;//10
    cout<<(num1>>1)<<endl;//2

    int num2=8;//1000

    cout<<(num1&num2)<<endl;//0
    cout<<(num1|num2)<<endl;//13 or 1101

    return 0;
}
*/

//MISC. OPERATORS:
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=4;
    cout<<sizeof(a)<<endl;//4

    char name;
    cout<<sizeof(name)<<endl;//1

    bool flag;
    a==name? flag=true: flag=false;
    cout<<flag<<endl;//0

    cout<<(&a)<<endl;//address

    return 0;
}
*/

//Unary Operator:
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=6;
    cout<<(a++)<<endl;

    int b=a+5;
    cout<<(--b)<<endl;

    return 0;
}
*/


//Q.1

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=4,b=2;
    cout<<(a+b+"pqr")<<endl;
    cout<<("pqr"+a+b)<<endl;

    return 0;
}
//not getting reqired result i.e. 
//6pqr
//pqr42



//Q.2
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,r,s;
    s=p-(++r)-(++q);
    cout<<s<<endl;
    cout<<p<<endl;
    cout<<q<<endl;
    cout<<r<<endl;

    return 0;
}
//not sure about the answer whether it is correct or not.`
*/


//Q.3
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool p = false;
    bool q = false;
    bool r = true;

    cout<<(p==q==r);

    return 0; 
}
*/
