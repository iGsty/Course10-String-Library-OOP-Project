#include <iostream>
#include "clsString.h"
#include <vector>

using namespace std;

int main()
{
	//test
	clsString s1("Hello#//#Its#//#Turki");

	vector <string> vS1 = s1.splitString("#//#");
	s1.printVectorElements(vS1);

	cout << s1.numOfWordsInString("Hello im khalid, how are you doin?");
	

	system("pause>0");

	return 0;
}