#include <bits/stdc++.h>
using namespace std;
int count = 0;

int main() {
    int count = 0;
    for(int z=0;z<1000;z++){
            string range;
            getline(cin,range);
            // cout<<range<<"\n";

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
            for(i;i<range.size();i++)   af[range[i]-'a']++;
            if(af[c - 'a'] >= stoi(first) && af[c - 'a']<= stoi(second)){
                ++count;
            }
    }
    cout<<count<<"\n";
}

