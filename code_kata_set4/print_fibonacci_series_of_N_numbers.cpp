#include<iostream>
using namespace std;

main()

{
   int n, c, first = 0, second = 1, next;
   cin >> n;

   for ( c = 1 ; c <= n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }

      cout << next << " ";
   }

   return 0;

}
