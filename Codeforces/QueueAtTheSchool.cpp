// The first line contains two integers n and t (1 ≤ n, t ≤ 50), which represent the number of children in the queue
// and the time after which the queue will transform into the arrangement you need to find. 
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
       
    int n,t;
    cin>>n>>t;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }
    while(t>0){
        for(int i=0;i<n-1;i++){
            if((arr[i]=='B')&&(arr[i+1]=='G')){
                char temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                i++;
            }
        }
        --t;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;
}
