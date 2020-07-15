#include <iostream>
#include<cstring>
int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while (n-->0)
    {
        int t;
        cin>>t;
        int arr[t];
        for(int i = 0;i<t;i++){
            arr[i] = 1;
        }
        for (int i  = 0; i < t; i++)
        {
            /* code */cout<<arr[i]<<" ";
        }
    cout<<"\n";
        
    }
    
    
    return 0;
}
