#include <bits/stdc++.h>
using namespace std;
int count = 0;

int main() {
    int count = 0;
    for(int z=0;z<1000;z++){
            string range;
            getline(cin,range);
            std::vector<int> af(26);
            int i = 0;
            string first,second;
            while(range[i]!='-'){
                first += range[i];
                ++i;
            }++i;
            while(range[i]!=' '){
                second += range[i++];
            }++i;
            char c = range[i];
            i+=3;
            int j = i;
            string s;
            for(j;j<range.size();j++){
                s+=range[j];
            }
            if(s[stoi(first)-1] == c &&  s[stoi(second)-1] != c)    ++count;
            else if(s[stoi(first)-1] != c &&  s[stoi(second)-1] == c)    ++count;
    }
    cout<<count<<"\n";
}

