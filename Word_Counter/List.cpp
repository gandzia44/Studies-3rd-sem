#include <cstdlib>
#include <iostream>
#include "List.h"

using namespace std;

List::List() {
	head = NULL;
	curr = NULL;
	temp = NULL;
}

void List::AddNode(string data) {
	nodePtr new_word = new node;
	new_word->next = NULL;
	new_word->word = data;
	if (head != NULL) {
		curr = head;
		while (curr->next != NULL) {
			curr = curr->next;
		}
			curr->next = new_word;
	}
	else {
		head = new_word;
	}
}
void List::AddNodeWithCount(string data) {
	string temp = data;
	for (nodePtr new_word, curr = head; curr != NULL; curr = curr->next) {
		if (temp == curr->word) {
			curr->count++;
			return;
		}
	}
		AddNode(temp);
}
void List::PrintList() {
	curr = head;
	while (curr != NULL)
	{
		cout << "\"" << curr->word << "\"" << " " << curr->count << endl;
		curr = curr->next;
	}
}
void List::DeleteNodes() {
	temp = head;
	curr = head;
	while (curr != NULL) {
		temp = curr->next;
		free(curr);
		curr = temp;
	}
}