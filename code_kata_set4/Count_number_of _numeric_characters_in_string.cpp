#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;
  int count = 0;

  getline(cin, str);

  for(int ind = 0; str[ind] != '\0'; ind++)
  {
      if(str[ind] >= '0' && str[ind] <= '9')
        count++;
  }

  cout << count;

  return 0;
}
