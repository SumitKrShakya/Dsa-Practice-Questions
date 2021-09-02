#include <bits/stdc++.h>
#include <fstream>

using namespace std;

struct node{
public :
    int data;
    node* next;
};

struct node *create_list(struct node *head);
void print_list(struct node *head);
void middle_node_using_2_pointer(struct node *head);

int main()
{
    srand(time(0));
    struct node *head=0;
    head = create_list(head);

    print_list(head);

    middle_node_using_2_pointer(head);



    return 0;
}

struct node *create_list(struct node *head)
{
    cout << " !!! Linked Lists !!!\n" << endl;
    cout << " LINKED List Created \n" << endl;

    ofstream input_file_build("linked_list_data_input_file.txt");
    for(int i=0;i<100;i++){
        input_file_build << rand()%99<<(i==99?"":"\n");
    }
    input_file_build.close();
    ifstream input_file("linked_list_data_input_file.txt");
    struct node *newnode,*temp;

    while(!input_file.eof()){
        newnode=(struct node*)malloc(sizeof(struct node));
        input_file >> newnode -> data ;
        newnode -> next = 0;
        if(head==0){
            head = temp = newnode ;
        }else{
            temp -> next = newnode ;
            temp = newnode ;
        }
    }

    input_file.close();
    return head;
}

void print_list(struct node *head){
    int nextline=0;
    struct node *temp = head;
    while(temp != 0){
        nextline++;
        cout<< temp -> data <<" ";
        if(temp -> data /10 == 0){
            cout<<" ";
        }
        temp = temp -> next ;
        if(nextline==10){
            cout<<"\n";
            nextline=0;
        }
    }
    cout<<"\n\n";
}

void middle_node_using_2_pointer(struct node *head){
    struct node *a,*b;
    a = b = head;

    while(!(b -> next == NULL)){
        b = b -> next;
        if(b -> next == NULL){
            break;
        }
        b = b -> next;
        a = a -> next;
    }

    cout <<"Middle node using 2 pointer slow and fast : "<< a -> data <<endl;
}
