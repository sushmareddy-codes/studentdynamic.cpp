#include<iostream>
using namespace std;
#define SIZE 5
class CQueue{
    private:
           int arr[SIZE];
           int Front,Rear;
    public:
    CQueue(){
        Front=-1;
        Rear=-1;
    }
    void enqueue(int val){
        if((Rear+1)%SIZE==Front){
            cout<<"Queue overflow\n";
            return;
        }
        if(Front==-1){
            Front=0;
        }
        Rear=(Rear+1)%SIZE;
        arr[Rear]=val;
        cout<<val<<"inserted successfully\n";
    }
    void dequeue(){
        if(Front==-1){
            cout<<"Queue underflow\n";
            return;
        }
        cout<<"deleted element:"<<arr[Front];
        if(Front==Rear){
            Front=Rear=-1;
        }
        Front=(Front+1)%SIZE;
    }
    void display(){
        if(Front==-1){
            cout<<"Queue underflow\n";
            return;
        }
        cout<<"Queue elements:";
        int i=Front;
        while(true){
            cout<<arr[i]<<" ";
            if(i==Rear)
            break;
            i=(i+1)%SIZE;
        }
        cout<<endl;
    }
};
int main(){
   CQueue q;
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
