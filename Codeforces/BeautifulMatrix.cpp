#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ii;
    int jj;
    int bmatrix[5][5];
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        {
            cin>>bmatrix[i][j];
            if(bmatrix[i][j]==1)
                {
                    ii=i;
                    jj=j;
                }
        }
        int m=0;
// cout<<ii<<endl<<jj<<endl;

while(ii!=2 || jj!=2){

    ++m;
    // cout<<"Added"<<endl;
    if(ii<2){
        ++ii;
   
    }
    else if(jj<2){
        ++jj;

    }
    else if(ii>2){
        --ii;
    }
    else if(jj>2){
        --jj;
    }
    else 
        {
            return 0;
        }
        // ++m;
    }
cout<<m;
    return 0;
}

