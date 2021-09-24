#include <iostream>  
using namespace std;
int main()  
{  
  int N, i, k=0, flag=0;  
  cout << "Enter the number to check prime: ";  
  cin >> N;  
  k=N/2;  
  for(i = 2; i <= k; i++)  
  {  
      if(N % i == 0)  
      {  
          cout<<"Not prime";  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout << "Prime";  
  return 0;  
}
