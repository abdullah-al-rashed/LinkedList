#include<iostream>

using namespace std;

struct node{
    int data;
    node *next;
};

node* head = NULL;

bool isempty()
{
    if(head==NULL) {
        return true;
    }
    return false;
}

void insert_at_end(int value)
{
    node* new_node = new node;
    new_node->data = value;
    new_node->next = NULL;
    
    if(isempty()==true) {
        head = new_node;
    }
    else {
        node* current_node = head;
        while(current_node->next!= NULL) {
            current_node = current_node->next;
        }
        current_node->next = new_node;
    }
}

void search (node *head){
    int value;
    node *current_node;
    current_node = head;
    
    cout<<"Enter a value for search: ";
    cin>>value;
    
    while (current_node!= nullptr){
        
        if(current_node->data==value){
            cout<<value<<" is found"<<endl;
            return;
        }
        current_node = current_node->next;
    }
    
    cout<<"Not found"<<endl;
}

int main(){
    insert_at_end(2);
    insert_at_end(5);
    insert_at_end(3);
    search(head);
}
