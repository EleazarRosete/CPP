#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

void process(string phrase){
	string acronym;
	int size = phrase.size();
	for(int i = 0; i < size; i++){
		if(i == 0){
			acronym = acronym + phrase[i];
		}
		else if(phrase[i] == ' '){
			acronym = acronym + phrase[i+1];
		}
		else{
			continue;
		}
	}
	transform(acronym.begin(), acronym.end(), acronym.begin(), ::toupper);
	cout << "- Acronym: " << acronym << "\n";
}

void start(){
	string phrase;
	cout << "\n\"Acronym Creator\"\n\n";
	cout << "Enter Phrase: ";
	getline(cin,phrase);
	cout << "- Phrase: " << phrase << "\n";
	process(phrase);
}

int main() {
	start();
	cout << "\n\"Thank you!\"";
	return 0;
}
