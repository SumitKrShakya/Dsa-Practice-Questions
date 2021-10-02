#include <bits/stdc++.h>

using namespace std;

class node {
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }

};

void insertAtHead(node *&head,int data){
    if(head == NULL){
        head = new node(data);
        return;
    }
    node *n = new node(data);
    n->next = head;
    head = n;
    return;
}

void insertAtEnd(node *tail,int data){



    return;
}



void printlinklist(node *head){
    while(head !=NULL){
        cout<<" -> "<< head->data;
        head = head -> next;
    }
    cout<<endl;
    
    return;
}

void reverseeeee(node*&rhead,node*head){

    while(head!=NULL){
        if(head == NULL){
            rhead = new node(head->data);
            return;
        }

    node *n = new node(head->data);
    n->next = rhead;
    rhead = n;

    head=head->next;
    }
}



int main() {
    node *head = NULL;
    
    for(int i=20;i>0;i-=4){
        insertAtHead(head,i);
    }
    
    // while(head!=NULL){
    //     cout<<head->data<<" ";
    //     head=head->next;
    // }

    // node *rhead = NULL;
    // reverseeeee(rhead,head);



    printlinklist(head);

    // printlinklist(rhead);
    node*head1=head;
    cout<<"head        "<<head<<endl;
    cout<<"head1       "<<head1<<endl;
    cout<<"&head       "<<&head<<endl;
    cout<<"&head1      "<<&head1<<endl;
    cout<<"head->data  "<<head->data<<endl;
    cout<<"head1->data "<<head1->data<<endl;
    cout<<"&head->data "<<&head->data<<endl;
    cout<<"&head1->data"<<&head1->data<<endl;
    cout<<"\n\n";
    int i=10;
    int *first = &i;
    int *second = first;
    cout<<first<<endl;
    cout<<second<<endl;
    cout<<&first<<endl;
    cout<<&second<<endl;
    cout<<*first<<endl;
    cout<<*second<<endl;
    
    // cout<<head;


}

// #include <bits/stdc++.h>

// using namespace std;

// class node{
//   public:
//     int data;
//     node *next;
    
//     node(int d){
//         data = d;
//         next = NULL;
//     }
// };

// void insertAtHead(node *&head,int d){
//     if(head==NULL){
//         head = new node(d);
//         return;
//     }
//     node *n = new node(d);
//     n -> next = head;
//     head = n;
    
//     return;
// }

// void insertAtMid(node *head,int i,int d){


//     return;
// }



// void print(node *head){
//     cout<<"Requested linklist is";
//     while(head!=NULL){
//         cout<<" -> "<<head->data;
//         head = head -> next;
//     }
//     cout<<endl;
//     return;
// }

// void Rprint(node *head){
//     if(head==NULL){
//         return;
//     }

//     Rprint(head->next);
//     cout<<"-> "<<head->data<<" ";
//     return;
// }


// int main()
// {
//     node *head=NULL;
//     for(int i=0;i<10;i+=2){
//         insertAtHead(head,i);
//     }
//     print(head);
//     cout<<"Reverse linklist is   ";
//     Rprint(head);
//     cout<<endl;
//     insertAtMid(head,2,3);

//     return 0;
// }
