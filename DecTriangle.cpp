
#include <iostream>

using namespace std;

int main()
{
   int i,j,n;
   cout<<"enter n ";
   cin>>n;
   for(i=1;i<=n;i++)
   {
       for(j=5;j>=i;j--)
       {
           cout<<" * ";
       }
       cout<<endl;
   }
}

//or
#include <iostream>

using namespace std;

int main()
{
   int i,j,n;
   cout<<"enter n ";
   cin>>n;
   for(i=1;i<=n;i++)
   {
       for(j=i;j<=n;j++)
       {
           cout<<" * ";
       }
       cout<<endl;
   }
}
