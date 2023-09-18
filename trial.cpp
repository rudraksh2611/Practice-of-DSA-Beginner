/*#include<bits/stdc++.h>
using namespace std;
int main()
{
 int apples;
 cin>>apples;
 cout<<"No. of Apples given by user:"<<apples;
 return 0;   
}
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    string wish;
    string temperature;
    cout << "Type Your morning wish:"<<endl;
    cin>>wish;
    if(wish=="gm"){
        cout<<"Good morning sir/ma'am, Should i tell you about temperature if yes then type temperature below 😊:"<<endl;
        cin>>temperature;
        if(temperature=="temperature"){
            cout<<"It's partially cloudy outside! Thank You 😊"<<endl;
        }
        else
        {
            cout<<"Your input not in our system,have a nice day ahead"<<endl;
        }
    }
    else 
    {
        cout<<"Your input not in our system,have a nice day ahead!"<<endl;
    }

    return 0;
}
