#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class List{
private:
	typedef struct node {
		int count = 1;
		string word;
		node *next;
	}* nodePtr;
	nodePtr head;
	nodePtr curr;
	nodePtr temp;
public:
		List();
		void AddNode(string data);
		void DeleteNodes();
		void PrintList();
		void AddNodeWithCount(string data);
};
