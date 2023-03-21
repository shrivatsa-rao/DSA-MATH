/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//sieve of eratos.
#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int n=20,c=0;
    vector<int>ans(n+1,true);
    ans[0]=ans[1]=false;
    cout<<"the prime numbera are\n";
    for(int i=2;i<n;i++)
    {
        if(ans[i]==true)
        {
            for(int j=2*i;j<n;j=j+i)//here all the multiples of i are marked with
            {                   //false and then increment will be j=4+2=6,j=6+2=8,
                ans[j]=false;
            }
        }
        
        if(ans[i]==true)//if i is prime then imcrement count.
        {
                cout<<i<<endl;
                c++;
        }
    }
    
    cout<<"the total number of prime numbers below "<<n<<"are"<<c<<endl;
    

    return 0;
}
