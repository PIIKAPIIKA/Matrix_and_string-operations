#include <iostream>
using namespace std;
int main() {
    string str,rev="";
    int a,i;
    cout<<"enter string";
    cin>>str;
    a=str.length();
    for(i=a-1;i>=0;i--){
        rev=rev+str[i];
    }

    cout<<rev;

    return 0;
}
// output //
//enter stringyash//
//hsay//