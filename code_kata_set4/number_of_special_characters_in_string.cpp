#include <iostream>
using namespace std;

int main()

{
  	char str[100];
  	int i, alphabets, digits, special;
  	i = alphabets = digits = special = 0;

  	cin>>str;

  	while (str[i] != '\0')

  	{
  		if( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') )
  		{
  			alphabets++;
 		}
  		else if (str[i] >= '0' && str[i] <= '9')
  		{
  			digits++;
  		}
  		else
    		special++;
    	i++;
	}

	cout<<special;

  	return 0;

}
