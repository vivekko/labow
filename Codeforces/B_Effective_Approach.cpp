#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
        scanf("%d", &n);   
        int pos[n]    ;
        for (int i = 0; i < n; i++) {
                int num;
                scanf("%d", &num);
                pos[num] = i + 1;
        }      
 
        int sum1 = 0, sum2 = 0;
 
        cin>>m     ;  
        for (int i = 0; i < m; i++)     {
                int q;
                cin>>q;
                sum1 += pos[q];
                sum2 += n - pos[q] + 1;                        
        }
 
       cout<<sum1<<sum2;
 
 
    
    
    return 0;
}
