/*
* * * * * 
* *   * * 
*   *   * 
* *   * * 
* * * * * 

*/
#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    cout<<"enter n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==n || i==1 || j==1 || i==n || j==n-i+1 || i==j)
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
