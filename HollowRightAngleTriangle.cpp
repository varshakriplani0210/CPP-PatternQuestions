/*
* 
* * 
*   * 
*     * 
* * * * *
*/

#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    cout<<"enter n ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
             if(i==1 || i==j || j==1 || i==n)
        {
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
        }
        
       
        
        cout<<endl;
    }
}
