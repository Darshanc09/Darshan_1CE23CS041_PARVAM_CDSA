
#include <stdio.h>
#include <stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
struct Node* newNode(int key)
{
	struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
	temp->data = key;
	temp->next = NULL;
	return temp;
}
int reverse(int number)
{
	int new_num = 0, rem;

	while (number != 0) {
		rem = number % 10;
		new_num = new_num * 10 + rem;
		number = number / 10;
	}

	return new_num;
}

void reverseIndividualData(struct Node* node)
{

	if (node == NULL)
		return;

	while (node != NULL) {

		

		node->data = reverse(node->data);

		
		node = node->next;
	}
}
void printList(struct Node* node)
{
	while (node != NULL) {
		printf("%d ", node->data);
		node = node->next;
	}
}
int main()
{
	struct Node* head = NULL;
	head = newNode(56);
	head->next = newNode(87);
	head->next->next = newNode(12);
	head->next->next->next = newNode(49);
	head->next->next->next->next = newNode(35);

	printf(
		"\nList before reversing individual data item \n");
	printList(head);

	reverseIndividualData(head);

	printf("\nList after reversing individual data item\n");
	printList(head);

	return 0;
}
