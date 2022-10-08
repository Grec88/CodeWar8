//============================================================================
// Name        : CodeWars8.cpp
// Author      : grec88
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
using namespace std;




string to_camel_case(string text) {
	for(size_t i = 0; i < text.size(); ++i){
		if(text[i] == '-' || text[i] == '_'){
			text[i + 1] = toupper(text[i + 1]);
			text.erase(begin(text) + i);
		}
	}
	return text;
}

int main() {
	cout << to_camel_case("") << "\n";
	return 0;
}
