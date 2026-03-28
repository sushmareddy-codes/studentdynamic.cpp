#include<iostream>
using namespace std;
class Node{
public:
   int data;
   Node* next;
   Node(int val){
        data=val;
        next=NULL;

   }
};
class Queue{
private:
    Node* Front;
    Node* Rear;
public:
    Queue(){
    Front=NULL;
    Rear=NULL;
    }
void enqueue(int val){
    Node* newNode=new Node(val);
    if(newNode==NULL){
    cout<<"Queue overflow\n";
    return;
   }
  if(Front==NULL&&Rear==NULL){
     Front=Rear=newNode;
  }
   Rear->next=newNode;
   Rear= Rear->next;
   cout<<"inserted successfully\n";
}
void dequeue(){
  if(Front==NULL){
  cout<<"queue underflow\n";
  return;
  }
  Node* temp=Front;
  Front=Front->next;
  if(Front==NULL){
  Rear=NULL;
  }
  cout<<"deleted element\n"<<temp->data;
  delete temp;
}
void display(){
if(Front==NULL){
cout<<"Queue is empty\n";
return;
}
cout<<"Queue elements:"<<"\n";
Node*temp=Front;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}
};
int main(){
   Queue q;
  int choice, value;
    while (true) {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice!\n";
        }
    }
    return 0;
}









