#include <iostream>     // sum of odd and even digits of a given num;

using namespace std;

int main()
{
   int se=0, so=0;
   int n,r;
   cin>>n;
   while(n>0){
       r = n%10;
       if (r%2==0){
           se = se+r;
       }
       else{
           so =so+r;
       }
       n=n/10;
  }
  cout<< se<<" "<<so;
  return 0;
}
   