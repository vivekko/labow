#include<bits/stdc++.h>
using namespace std;


void Merge(vector<int> &a,int l,int m,int r){
    vector<int> left(m-l+1);
    vector<int> right(r-(m+1)+1);

    for(int i=0;i<left.size();i++){
        left[i] = a[i+l];
    }
    for(int i =0; i<right.size(); i++ ){
        right[i] = a[m+1 + i];
    }

    int i = 0,j = 0,k = l;

    while(i<left.size() && j<right.size()){
        if(left[i] <= right[i]) a[k++] = left[i++];
        else    a[k++] = right[j++];
    }
    while(i<left.size()){
        a[k++] = left[i++];
    }
    while(j<right.size()){
        a[k++] = right[j++];
    }
}

void MS(vector<int> &a,int i,int j){
    if(i>=j)    return;
    int mid = i+ (i-j)/2;
    MS(a,i,mid);
    MS(a,mid+1,j);
    Merge(a,i,mid,j);
}

int main(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i:a)   cin>>i;
    MS(a,0,n-1);
    for(int i:a)    cout<<i<<" ";
}