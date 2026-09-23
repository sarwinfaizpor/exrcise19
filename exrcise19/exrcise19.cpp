#include <iostream>
int main()
{
	double newyork = 85;
	double denver = 88;
	double phoenix = 106;
	double rise = 0.02;
    newyork = newyork + (newyork * rise);
	denver = denver + (denver * rise);
	phoenix = phoenix + (phoenix * rise);
	std::cout << "New average high July for New York: " << newyork << "\n";
	std::cout << "New average high July for Denver: " << denver << "\n";
	std::cout << "New average high July for Phoenix: " << phoenix << "\n";
	return 0;
}