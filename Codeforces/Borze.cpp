#include <iostream>
#include<vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v;
    int val;
    while(cin>>val){
        v.push_back(val);
    }
    for(int i=0;i<v.size();i++){
        if(v.at(i)=='.'){
            v.at(i) = 0;

        }
        else if(v.at(i+1)=='-'&&v.at(i)=='-'){
            v.at(i) = 2;
            i++;
        }
        else
        {
            v.at(i) = 1;
        }
        
        }
    // for(int i=0;i<v.size();++i){
    //     cout<<v.at(i);
    // }
    for (auto i = v.begin(); i != v.end(); ++i) 
        cout << *i << " "; 
    return 0;
}
