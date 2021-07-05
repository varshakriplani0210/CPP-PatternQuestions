//here always remember i stands for ROWS
//j stands for COLUMNS
//So if we want to print 5 rows and 10 columns ,i will execute till 5 and j till 10.

#include <iostream>

using namespace std;

int main()
{
   int i,j,n;
   cout<<"enter n ";
   cin>>n;
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
           cout<<" * ";
       }
       cout<<endl;
   }
}
