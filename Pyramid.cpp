#include<iostream>
#include <cmath>
using namespace std;
int main()
{
int i,j,n,m,a;
cout << "Enter the height of Pyramid in rows: ";
cin >> n;
a=2*n;
for (i=0;i<n;i++)
 {
   for (j=0;j<a;j++)
      {
        if (abs((n-1)-j)<=i)
            {
               cout << "*" ;
            }
        else    
               cout << " " ;
      }
     cout << endl;
 }
}
