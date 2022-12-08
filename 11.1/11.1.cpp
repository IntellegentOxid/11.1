#include <iostream>
using namespace std;
int main()
{
	char city;
	cout << "Enter the first letter of the city name: ";
	cin >> city;
	switch (city)
	{
	case 67:
		cout << "\nChernihiv\nPopulation: 0,282 million\nArea: 79 sq km\n";
		break;
	case 68:
		cout << "\nDnipro\nPopulation: 0,968 million\nArea: 409,7 sq km\n";
		break;
	case 75:
		cout << "\nKyiv\nPopulation: 2,966 million\nArea: 839 sq km\n";
		break;
	case 76:
		cout << "\nLviv\nPopulation: 0,717 million\nArea: 149 sq km\n";
		break;
	case 77:
		cout << "\nMariupol\nPopulation: 0,446 million\nArea: 166 sq km\n";
		break;
	case 79:
		cout << "\nOdesa\nPopulation: 1,010 million\nArea: 162,4 sq km\n";
		break;
	case 90:
		cout << "\nZhytomyr\nPopulation: 0,265 million\nArea: 65 sq km\n";
		break;
	default:
		cout << "\nThere is no such city or it is not entered in the database.\n";
		break;
	}
}