#include <iostream>
using namespace std;
int main() {
    string str,rev="";
    int a,i,b=0;
    cout<<"enter string";
    cin>>str;
    a=str.length();
    for(i=a-1;i>=0;i--){
        rev=rev+str[i];
    }
    for(i=0;i<a;i++)
    {
        if(str[i]==rev[i])
        {
            b=b+1;
        }
    }
    if(b==a){
        cout<<("palidrome");
    }
    else
    {
        cout<<("non-palindrome");
    }

    return 0;
}
// output //
//enter string naman//
//palidrome//
//enter stringyash//
//non-palindrome//