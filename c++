#include <iostream>
using namespace std;
int main()
{
//declare named constant and variables
int smallPizza = 0;
int mediumPizza = 0;
int largePizza = 0;
int familyPizza = 0;
int totalPizza = 0;
int smallResult = (totalPizza/smallPizza) * 100;
//enter input item
cout << "Number of Small Pizzas: ";
cin >> smallPizza;
cout << "Number of Medium Pizzas: ";
cin >> mediumPizza;
cout << "Number of Large Pizzas: ";
cin >> largePizza;
cout << "Number of Family Pizzas: ";
cin >> familyPizza;
//calculate and display the total pizzas
//subtotal, sales tax, and total cost
totalPizza = smallPizza + mediumPizza + largePizza + familyPizza;
cout << "Total Pizzas: "
<< totalPizza;
cout << "Small Pizza: % "
<< smallResult << endl;
return 0;
} //end of main function
