#ifndef LINKED_LIST_H
#define LINKED_LIST_H


typedef struct Node Node;

struct Node
{
    int data;
    Node* next;
};

void Printlist(); //Done

void Push(int num); //Done
void Insert(int num, int position); //Done
void Append(int num);

void DeleteNode(int position); //Done
void pop(); //Done

void ReverseList(); //Done

void PrintRecursively(Node* head); //Done
void PrintReverseRecursively(Node* head); //Done
void ReverseListRecursively(Node* node); //Done

#endif