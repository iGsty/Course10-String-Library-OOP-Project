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

	s1.value = "Hello im khalid, how are you doin?";

	cout << s1.numOfWordsInString() << endl;
	cout << clsString::numOfWordsInString("YO ye yaa");
	

	system("pause>0");

	return 0;
}