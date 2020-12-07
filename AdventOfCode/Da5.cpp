#include<bits/stdc++.h>
using namespace std;
int main(){
    int seat = -1;
    int minseat = INT32_MAX;
    set<int> labow;
    for(int z=0;z<816;z++){
        string a;
        cin>>a;
        int high = 127,low = 0;
        for(int i=0;i<7;i++){
            int mid = ceil((float)(low+high)/2);
            if(a[i] == 'B'){
                low = mid;
            }
            else
            {
                high = mid;
            }}
        int store = (low+high)/2;
        high = 7,low = 0;
        for(int i=7;i<10;i++){
            int mid = ceil((float)(low+high)/2);
            if(a[i] == 'R'){
                low = mid;
            }
            else
            {
                high = mid;
            }

        }
        int ans = store*8 + (high+low)/2;
        labow.insert(ans);
        seat = max(ans,seat);
        minseat = min(ans,minseat);
    }
    for(int i=32;i<=848;i++){
        if(labow.find(i) == labow.end()){
            cout<<i<<"\n";
        }
    }
}
