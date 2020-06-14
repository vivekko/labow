#include <iostream>
#include <sstream>
#include<iomanip>
int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int a,b;
    long long int res=0;
    int val1[50];
    int val2[50];
    int i=0,j=0;
    cin>>a>>b;
    while(a>0){
        
        val1[i++] = a%10;
        a=a/10;
        val2[i++] = b%10;
        b=b/10;

    }
    int val3[a];
    for(int i=0;i<a;i++){
        if(val1[i]==val2[i])
            val3[a-i-1] = 0;
        else 
            val3[a-i-1] = 1;
    }
    stringstream ss;
       for (int i : val3)
            ss << i;
        int result;
    ss >> result;
    cout << result;
}

//! Woah! 
