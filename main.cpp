#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
   int a,b,c;
   cout<<"Enter three sides of triangle : ";
   cin>>a>>b>>c;
   if(a<0||b<0||c<0)
   {
    cout<<"triangle inequality";
    return 0;
   }
   if(a==b==c)
      cout<<"equilateral";
   else if((a!=b)&&(a!=c))
   {
     cout<<"Scalene";
   }
   else
   {
    cout<<"Isoceles";
   }
}
