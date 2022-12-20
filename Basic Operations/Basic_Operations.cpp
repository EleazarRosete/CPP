#include <iostream>

using namespace std;
// General Prompt
int Prompt(){
	int choice;
	cout << "\n\"Basic Operations\"\n"
				"\nThis are the basic operations.\n\n"
				"1.Arithmetic Operations\n"
				"2.Bitwise Operations\n"
				"0.Exit\n"
				"-> ";

	cin >> choice;
	return choice;
}
// For Arithmetic
int ArithmeticPrompt(){
	int UserChoice;
	cout << "\nThis are the arithmetic operators.\n\n"
			"1.Addition\n"
			"2.Subtraction\n"
			"3.Multiplication\n"
			"4.Division\n"
			"5.Modulus\n"
			"0.Back\n"
			"-> ";
	cin >> UserChoice;
	return UserChoice;
}

void Addition(){
	int x,y,sum;
	cout << "Enter a number: ";
	cin >> x;
	cout << "Enter a number: ";
	cin >> y;
	sum = x + y;
	printf("Sum: %d\n" , sum);
}

void Subtraction(){
	int x,y,difference;
	cout << "Enter a number: ";
	cin >> x;
	cout << "Enter a number: ";
	cin >> y;
	difference = x - y;
	printf("Difference: %d\n",difference);
}

void Multiplication(){
	int x,y,product;
	cout << "Enter a number: ";
	cin >> x;
	cout << "Enter a number: ";
	cin >> y;
	product = x * y;
	printf ("Product: %d\n",product);
}

void Division(){
	int x,y,quotient;
	cout << "Enter a number: ";
	cin >> x;
	cout << "Enter a number: ";
	cin >> y;
	quotient = x / y;
	printf ("Quotient: %d\n",quotient);
}

void Modulus(){
	int x,y,remainder;
	cout << "Enter a number: ";
	cin >> x;
	cout << "Enter a number: ";
	cin >> y;
	remainder = x % y;
	printf ("Remainder: %d\n",remainder);
}

void Arithmethic(){
	switch(ArithmeticPrompt()){
	case 1: Addition(); break;
	case 2: Subtraction(); break;
	case 3: Multiplication(); break;
	case 4: Division(); break;
	case 5: Modulus(); break;
	case 0: break;
	default: cout << "\n\"Invalid Input!\"\n";
	}
}
// Bitwise Operations
int BitwisePrompt(){
	int UserChoice;
	cout << "\nThis are the bitwise operators.\n\n"
			"1.AND\n"
			"2.OR\n"
			"3.XOR\n"
			"4.Complement \n"
			"5.Shift Left\n"
			"6.Shift Right\n"
			"0.Back\n"
			"-> ";
	cin >> UserChoice;
	return UserChoice;
}

void AND(){
	int a,b,c;
	cout << "Enter a first number to bitwise AND: ";
	cin >> a;
	cout << "Enter a second number to bitwise AND: ";
	cin >> b;
	c = a & b;
	printf("AND: %d\n",c);
}

void OR(){
	int a,b,c;
	cout << "Enter a first number to bitwise OR: ";
	cin >> a;
	cout << "Enter a second number to bitwise OR: ";
	cin >> b;
	c = a | b;
	printf("AND: %d\n",c);
}

void XOR(){
	int a,b,c;
	cout << "Enter a first number to bitwise XOR: ";
	cin >> a;
	cout << "Enter a second number to bitwise XOR: ";
	cin >> b;
	c = a ^ b;
	printf("AND: %d\n",c);
}

void Complement(){
	int a,b;
	cout << "Enter a number to complement: ";
	cin >> a;
	b = ~a;
	printf("AND: %d\n",b);
}

void ShiftLeft(){
	int a,b,c;
	cout << "Enter a number to shift left: ";
	cin >> a;
	cout << "How many shift? ";
	cin >> b;
	c = a << b;
	printf("AND: %d\n",c);
}

void ShiftRight(){
	int a,b,c;
		cout << "Enter a number to shift left: ";
		cin >> a;
		cout << "How many shift? ";
		cin >> b;
		c = a >> b;
	printf("AND: %d\n",c);
}

void Bitwise(){
	switch(BitwisePrompt()){
	case 1: AND(); break;
	case 2: OR(); break;
	case 3: XOR(); break;
	case 4: Complement(); break;
	case 5: ShiftLeft(); break;
	case 6: ShiftRight(); break;
	case 0: break;
	default: cout << "\n\"Invalid Input!\"\n";
	}
}


int main() {
	system("cls");
	while(true){
		switch(Prompt()){
		case 1: Arithmethic(); break;
		case 2: Bitwise(); break;
		case 0: cout << "\n\"Thank You\""; exit(0);
		}
	}
	return 0;
}
