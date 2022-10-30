#include <iostream>
using namespace std;

// declaration

void print_string(string);
void print_string_pyramid(string);

// main

int main(){

	string user_input;
	cout << "Value: ";
	getline(cin, user_input);
	print_string(user_input);
	print_string_pyramid(user_input);
}

// definition

void print_string(string string_input){
	cout << "\n" << string_input <<"\n";
}

void print_string_pyramid(string string_pyramid){
	int counter;
	for (counter; counter <= string_pyramid.size(); ++counter){
		cout << string_pyramid.substr(0,counter)<<endl;
	}
}
	




