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
}

int main(){
    vector<int> arr = {1,23,4,5,6};
    Node* y = new Node(arr[0],nullptr);
    cout<<y<<endl;
    cout<<y->data;
    return 0;
}