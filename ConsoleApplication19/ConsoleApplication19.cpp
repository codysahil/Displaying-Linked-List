#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};
int main()
{
	int Arr[] = { 3,5,7,10,15 };
	Node* head = new Node;
	Node* temp;
	Node* last;

	head->data = Arr[0];
	head->next = nullptr;
	last = head;

	for (int i = 1; i < sizeof(Arr) / sizeof(Arr[0]); i++) {
		temp = new Node;
		temp->data = Arr[i];
		temp->next = nullptr;
		last->next = temp;
		last = temp;
	}

	while (head != nullptr) {
		cout << head->data << " -> " << flush;
		head = head->next;
	}
	return 0;
}
