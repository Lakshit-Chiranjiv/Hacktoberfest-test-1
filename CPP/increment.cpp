#include <iostream>
using namespace std;
int main()
{
  int a=1;
  int x= (a) + a++ + (a++) * a++;
  cout<<x<<endl;
  return 0;	
}