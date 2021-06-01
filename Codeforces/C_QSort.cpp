#include<bits/stdc++.h>
using namespace std;


int partition(vector<int> &a,int p,int q){
    int pivot = a[q];
    int k = p-1;
    for(auto i = p;i<=q;i++){
        if(a[i] <= pivot )  swap(a[i],a[++k]);
    }
    return k;
}

void Qsort(vector<int> &a, int p,int q){
    if(p>=q)    return;
    int j = partition(a,p,q);
    Qsort(a,p,j-1);
    Qsort(a,j+1,q);
}

int main(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i:a)   cin>>i;
    Qsort(a,0,a.size() - 1);
    for(int i:a)    cout<<i<<" ";
}
