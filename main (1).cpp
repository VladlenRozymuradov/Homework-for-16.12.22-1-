
#include <iostream>

using namespace std;

int main()
{
    double b1=1, b2=2, cup; int n;
    cin>>n;
    cout<<b1<<" "<<b2<<" ";
    for (int i=3; i<=n; i++){
        cup=b2;
        b2=b2/(b1+1);
        b1=cup;
        cout<<b2<<" ";
    }
    return 0;
}
