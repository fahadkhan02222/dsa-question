#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* reverse(Node* head){
    Node* prev=NULL;
    while(head){
        Node* next=head->next;
        head->next=prev;
        prev=head;
        head=next;
    }
    return prev;
}
