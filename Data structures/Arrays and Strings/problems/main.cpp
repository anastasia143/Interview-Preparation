#include <iostream>
#include "1_1.h"
#include "1_2.h"
#include "1_3.h"
#include "1_4.h"
using namespace std;

int main()
{
	string str = "cats";
	string str2 = "stca";
//	removeDuplicates2(str);
	cout << isAnagrams2(str, str2);
	return 0;
}