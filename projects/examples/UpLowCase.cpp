//aaaBBbbc => AAABBBBC
#include<iostream>
#include<string>
std :: string upperCase(std :: string s)
{ 
	//'a' => 'A' 
	//'b' => 'B'
	//'B' - 'b' == 'A' - 'a'
	for(int i = 0; i < s.size(); ++i)
	{
		int deference = 'A' - 'a';
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] += deference;
		}	
	}
	return s;
}
std :: string lowerCase(std :: string s)
{
	for(int i = 0; i < s.size(); ++i)
	{
		int deference = 'Z' - 'z';
		if(s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] -= deference; int i = 1 
		}
	}
	return s;
}

int main()
{
	std :: string s;
	s = "FFFFFFFFFFFFFFFfgfgdfgdgdgdfgdfd 005 ___ 9\n";
	std :: cout << upperCase(s) << lowerCase(s);
}