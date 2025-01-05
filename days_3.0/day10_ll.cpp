// converting array to linkedlist
#include<iostream>
#include<vector>
using namespace std;
class Node{
    public: 
        int data;
        Node* next;
    public:
    Node(int data1, Node* next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node* convertarr2ll(vector<int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 0; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover=mover->next;
    }
    return head;
    
}

int main(){
    vector<int> arr = {56,23,4,5,6};
    Node* head = convertarr2ll(arr);
    cout<<head->data<<endl;
    return 0;
}