#include <bits/stdc++.h>
using namespace std;
struct Node {
   int data;
   struct Node* next;
};
void addNewNode(struct Node** head, int new_data) {
   struct Node* newNode = new Node;
   newNode->data = new_data;
   newNode->next = *head;
   *head = newNode;
}
void multiplyTwoLinkedLists(struct Node* firstHead, struct Node* secondHead
, struct Node** newLinkedListHead) {
   int _1 = 0, _2 = 0;
   while (firstHead || secondHead) {
      if (firstHead) {
         _1 = _1 * 10 + firstHead->data;
         firstHead = firstHead->next;
      }
      if (secondHead) {
         _2 = _2 * 10 + secondHead->data;
         secondHead = secondHead->next;
      }
   }
   int result = _1 * _2;
   while (result) {
      addNewNode(newLinkedListHead, result % 10);
      result /= 10;
   }
}
void printLinkedList(struct Node *node) {
   while(node != NULL) {
      cout << node->data << "->";
      node = node->next;
   }
   cout << "NULL" << endl;
}
int main(void) {
   struct Node* firstHead = NULL;
   struct Node* secondHead = NULL;

addNewNode(&firstHead, 1);
   addNewNode(&firstHead, 2);
   addNewNode(&firstHead, 3);
   printLinkedList(firstHead);
   addNewNode(&secondHead, 1);
   addNewNode(&secondHead, 2);
   printLinkedList(secondHead);
   struct Node* newLinkedListHead = NULL;
   multiplyTwoLinkedLists(firstHead, secondHead, &newLinkedListHead);
   printLinkedList(newLinkedListHead);
  return 0;
}
