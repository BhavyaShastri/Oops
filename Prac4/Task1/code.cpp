#include<iostream>
using namespace std;
namespace first{
       int add(int a,int b)
        {
         return(a+b);
        }
 }
 namespace second{
      float add(float a,float b)
      {
        return(a+b);
      }
   }
int main()
{
   cout << first::add(3,1);
   cout << "\n";
   cout << second::add(3.2,2.1);
   cout << "\n";
   return 0;
 }
