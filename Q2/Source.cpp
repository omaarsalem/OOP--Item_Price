#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Fruit // create a class named as fruit which will store various fruits
{
public:

	//Varibale declartions

	double cost, weight;
	string shape, color;
};

int main() {
	// Fruit class with object Mango and its specs
	Fruit Mango;
	Mango.weight;
	Mango.shape = "Oval";
	Mango.color = "red";
	Mango.cost = 10;
	// Fruit class with object Watermelon and its specs
	Fruit watermelon;
	watermelon.weight;
	watermelon.shape = "Oval";
	watermelon.color = "Green/Red";
	watermelon.cost = 10.99;
	// Fruit class with object Banana and its specs
	Fruit Banana;
	Banana.weight;
	Banana.shape = "Crescent";
	Banana.color = "Yellow";
	Banana.cost = 3.77;
	// Fruit class with object Coconut and its specs
	Fruit Coconut;
	Coconut.weight;
	Coconut.shape = "Circle";
	Coconut.color = "Brown";
	Coconut.cost = 19.75;



	char fruit;  
	cout << "Welcome to the fruit store" << endl;
	cout << "1. Mango   " << "2. Watermelon  " << "3. Banana  " << "4. Coconut  " << endl;  //a display for what the user can do through the output
	cout << "Choose the number of the fruit: ";
	cin >> fruit;

	switch (fruit) {
	case '1': {
		cout << "Mango shape is: " << Mango.shape << endl;
		cout << "Mango color is: " << Mango.color << endl;  // Case 1 is Mango and displaying its infromation as shape,color, and cost per Kg. 
		cout << "Mango cost/kg is: " << Mango.cost << endl;

		char response;
		cout << "Do you want to know the price y/n : ";
		cin >> response;
		if (response == 'y')
		{
			
			cout << "Enter the Required Mango weight: ";   // asking the user to input his required weight of mango to calculate the price
			cin >> Mango.weight;

			cout << "Mango cost is: " << Mango.cost * Mango.weight << " Pound" << endl;
		}

		else {               // if the user don't want to know the price , this message will be printed out
			cout << "See you later";
		}
	}
			break;
	case '2': {
		cout << "Watermelon Shape is: " << watermelon.shape << endl;
		cout << "watermelon Color is: " << watermelon.color << endl; // Case 2 is Watermelon and displaying its infromation as shape,color, and cost per Kg.
		
		char response;
		cout << "Do you want to know the price y/n : ";
		cin >> response;


		if (response == 'y') {
			cout << "Enter the Required watermelon weight: "; // asking the user to input his required weight of mango to calculate the price
			cin >> watermelon.weight;

			cout << "watermelon cost is: " << watermelon.cost * watermelon.weight << endl;
		}

		else {                 // if the user don't want to know the price , this message will be printed out
			cout << "See you later";
		}
	}
			break;
	case '3': {
		cout << "Banana shape is: " << Banana.shape << endl;
		cout << "Banana color is: " << Banana.color << endl;        // Case 3 is Banana and displaying its infromation as shape,color, and cost per Kg.
		cout << "Banana cost/kg is: " << Banana.cost << endl;
		

		char response;
		cout << "Do you want to know the price y/n : ";
		cin >> response;
		if (response == 'y')
		{
			cout << "Enter the Required Banana weight: "; // asking the user to input his required weight of mango to calculate the price
			cin >> Banana.weight;

			cout << "Banana cost is: " << Banana.cost * Banana.weight << " Pound" << endl;
		}

		else {                          // if the user don't want to know the price , this message will be printed out
			cout << "See you later";
		}
	}
			break;

	case '4': {
		cout << "Coconut shape is: " << Coconut.shape << endl;
		cout << "Coconut color is: " << Coconut.color << endl;       // Case 4 is Coconut and displaying its infromation as shape,color, and cost per Kg.
		cout << "Coconut cost/kg is: " << Coconut.cost << endl;

		char response;
		cout << "Do you want to know the price y/n : ";
		cin >> response;
		if (response == 'y')
		{
			cout << "Enter the Required Coconut weight: ";    // asking the user to input his required weight of mango to calculate the price
			cin >> Coconut.weight; 

			cout << "Coconut cost is: " << Coconut.cost * Coconut.weight << " Pound" << endl;
		}

		else {          // if the user don't want to know the price , this message will be printed out
			cout << "See you later";
		}
	}
			break;



	default:
		cout << "Good Luck";  // if the user made an input of diffrenet value of the cases this message will be printed out.
	}
	return 0;
}