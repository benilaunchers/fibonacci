#include <iostream>
using namespace std;
int main() {
    int n1=0,n2=1,n3,number;
    cout<<"Enter the number : ";
    cin>>number;
    cout<<n1<<" "<<n2<<" ";
    for(int i=2;i<number;++i)
    {
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
}