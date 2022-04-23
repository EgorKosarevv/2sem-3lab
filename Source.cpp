#include "String.h"

inline void line()
{
	std::cout << std::endl;
}

int main()
{
	char A[] = "CARS";
	TString str1;
	TString str2(A);
	TString str3(10, 'r');
	TString str4 = str2;
	TString* split;
	std::cout << "String: " << str3.GetString() << "\n" << "Length: " << str3.GetLength() << "\n";
	line();
	
	str1.SetString("I buy cars");
	str3 = A;
	str4 = str1 + str3;
	std::cout << str4;
	line();

	std::cout << "Index of 's' == " << str4.Find('s') << "\t"
		<< "Index of 'CARS' == " << str4.Find(str3) << "\n";
	line();

	if (str2 == str3) std::cout << "str2 == str3\n";
	if (str1 < str3) std::cout << "str1 < str3\n";
	if (str2 > str4) std::cout << "str2 > str4\n";
	line();

	std::cout << "str2.string[0] == " << str2[0] << std::endl;
	line();


	split = str1.Split('r');
	for (int i = 0; i < str1.GetCountOfSplit(); i++)
	{
		std::cout << split[i];
	}
	return 0;
}