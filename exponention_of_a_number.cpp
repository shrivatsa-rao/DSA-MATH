/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//exponention: 2power5=35
#include <iostream>

using namespace std;
//program to find the power of n.

int expo(int n,int x)
{
   
    int res=1;
    while(n>0)
    {
        if(n%2==1)//for odd power we need to do extra time multilication.
        {//for odd it will be x power n multiply x that is (x powerof  n)*x this is for odd.
            res=res*x;
            
        }
        x=x*x;// for both odd and even we will do this step. it will be like
        //compulsory step for both.
        n=n/2;//didvide by 2
    }
   return res;


}


int main()
{
    int n=3,x=5;
    int k=expo(n,x);
    cout<<k<<endl;
}
