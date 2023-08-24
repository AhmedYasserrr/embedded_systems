#include <stdio.h>
#include <stdlib.h>
#include "Linked_list.h"

Node* head = NULL;

int main(){
    Push(5);
    Push(6);
    Push(7);
    Push(8);
    Push(9);
    Printlist();
    pop();
    Printlist();
    DeleteNode(2);
    Printlist();
    Insert(100, 4);
    Printlist();
    return 0;
}

void Printlist(){
    Node* hd = head;
    while(hd != NULL){
        printf("%d ", hd -> data);
        hd = hd -> next;
    }
    printf("\n");
}

void Push(int num){
    Node* node = (Node*) malloc(sizeof(Node));
    node -> data = num;
    node -> next = head;
    head = node;
}

void Insert(int num, int position){
    if(position == 0){
        Push(num);
    }
    else{
        int i;
        position -= 1;
        Node* hd = head;
        for(i = 0; i < position; i++){
            if(hd -> next == NULL){
                return;
            }else {}
            hd = hd -> next;
        }

        Node* node = (Node*) malloc(sizeof(Node));
        node -> data = num;
        node -> next = hd -> next;
        hd -> next = node;
    }

}

void Append(int num){
    
    
}

void PrintRecursively(Node* hd){
    printf("%d ", hd -> data);
    if(hd -> next != NULL){
        PrintRecursively(hd -> next);
    }
    else{
        printf("\n");
        return;
    }
}

void PrintReverseRecursively(Node* hd){
    if(hd -> next != NULL){
        PrintReverseRecursively(hd -> next);
    }
    else {}

    printf("%d ", hd -> data);
    if(hd == head)
        printf("\n");
}

void pop(){
    head = head -> next;
}

void DeleteNode(int position){
    if(position == 0){
        pop();
    }
    else{
        int i;
        position--;
        Node* node = head;
        for(i = 0; i < position; i++){
            if(node -> next == NULL){
                return;
            }else {}
            node = node -> next;
        }

        if(node -> next == NULL || (node -> next) -> next == NULL){
                return;
            }else {}
        node -> next = (node -> next) -> next;
    }

}