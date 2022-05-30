#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
	int pages;
public:
	Book()
	{
		pages = 250;
		cout << "The name of the book is compound effect " << endl;
		cout << "no of pages : " << pages;
	}
};







int main()
{
    Book b;
	return 0;

}