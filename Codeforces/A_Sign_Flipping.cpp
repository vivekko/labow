#include <iostream>
#include<math.h>
int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int countp=0;
    int countn =0 ;
    while(t-->0){
        int l;
        cin>>l;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        for(int i=0;i<l;i++){
            if(((i+1)&1)==1){
                arr[i] = abs(arr[i]);
            }
            else{
                arr[i] = arr[i]<0? arr[i]:-arr[i];
            }
        }
        for(int i=0;i<l;i++){
            cout<<arr[i]<<" ";
        }
    }
return 0;
}

        