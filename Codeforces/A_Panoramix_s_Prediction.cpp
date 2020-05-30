#include <iostream>
using namespace std;
bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,m;
    // int c=0;
    cin>>n>>m;
    if(n>=m)
    {
        cout<<"NO";
        return 0;
    }
    bool f = isPrime(m);
    if(f==false){
        cout<<"NO";
        return 0;
    }
    for(int i=n+1;i<m;i++){
       bool flag = isPrime(i);
        if (flag==true)
            {
                cout<<"NO";
                return 0;
            }
            // else
            // {
            //     cout<<"YES";
            //     return 0;
            // } 
    }
    
    cout<<"YES";
    
    return 0;
}


