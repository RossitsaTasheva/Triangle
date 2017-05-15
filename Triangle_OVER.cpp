//==================2==========================================================
// Name        : Triangle_OVER.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Tr.h"
#include <iostream>
using namespace std;

int main() {
	Tr t1;
	cin>>t1;
	cout<<t1;
	Tr t2;
	cin>>t2;
	cout<< t2;
	Tr t3;
	cout << t1.operator ==(t2)<<endl;
	cout << t1.operator !=(t2);
	return 0;
}
