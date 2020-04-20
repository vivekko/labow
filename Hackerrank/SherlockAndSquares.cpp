#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the squares function below.
int squares(int a, int b) {
    int a1 = sqrt(a);
    int b1 = sqrt(b);
    // return a1;
    int c=0;
    for(int i=1;i<=b1+2;i++)
    {
        if((i*i>=a)&&(i*i<=b))
        {
            c++;
        }
    }
return c;

}