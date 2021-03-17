#include <iostream>
#include <string>
#include "List.h"
#include <fstream>

using namespace std;

int main() {
	List book;
	string t_word;
	cout << "Starting...\n";
	ifstream bookFile("book.txt");
	if (!bookFile)
	{
		cout << "Can't open file with book.";
		exit(1);
	}
	while (bookFile >> t_word)
	{
		book.AddNodeWithCount(t_word);
	}
	book.PrintList();
	book.DeleteNodes();
	cout << "Finished" << endl;
}