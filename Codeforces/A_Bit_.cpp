#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    string val;
    int count=0;
    while(n-->0){
        cin>>val;
        if(val=="++X"||val=="X++")
            count++;
        else if(val=="--X"||val=="X--")
            count--;
    }
    cout<<count;
    
    return 0;
}
