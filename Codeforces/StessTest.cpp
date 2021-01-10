#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Vivek main
#define all(x) (x).begin(),(x).end()
#define vec_p vector<pair<int,int>
#define v vector<int>

struct testcase{
    int a,n,d;
};
int randomNumber(int a,int b){
    return a + (rand() % b);
}
testcase generateTestCase(){
    testcase randomTest;
    randomTest.a = randomNumber(1,100000);
    randomTest.n = randomNumber(1,100000);
    randomTest.d = randomNumber(-100000,100000);

}
int bruteForce(testcase T){
    int ret;
  
    return ret;
}
int optimizedSolution(testcase T){
    int ret;
    
    return ret;
}

void debugger(){
    testcase random = generateTestCase();
    int ans1 = bruteForce(random);
    int ans2 = optimizedSolution(random);
    if(ans1 != ans2) {
        cout<<random.a;
        return;
    }
}


void solve(){
    

}
int32_t Vivek(){
int t;
cin>>t;
while(t--)
    solve();
return 0;
}

// ___.   .__                 __          .__              __    
// \_ |__ |  | _____    ____ |  | _____  _|__|__  __ ____ |  | __
//  | __ \|  | \__  \ _/ ___\|  |/ /\  \/ /  \  \/ // __ \|  |/ /
//  | \_\ \  |__/ __ \   \___|    <  \   /|  |\   /\  ___/|    < 
//  |___  /____(____  /\___  >__|_ \  \_/ |__| \_/  \___  >__|_ \
//      \/          \/     \/     \/                    \/     \/
