#include <iostream>
using namespace std;

struct Node{
    float data;
    Node *next;
};
Node* createNode (float x){
    Node *p = new Node;
    p->data = x;
    p->next = NULL;
    return p;
}
struct LinkedList{
    Node *head;
    Node *tail;
};
void init(LinkedList &lst){
    lst.head = NULL;
    lst.tail = NULL;
}
void insertTail(LinkedList &lst, float x){
    Node *p = createNode(x);
    if(lst.head == NULL){
        lst.head = lst.tail = p;
    }
    else{
        lst.tail -> next = p;
        lst.tail = p;
    }
}
Node* min (LinkedList lst){
    // if(lst.head == NULL){
    //     return NULL;
    // }
    Node *ans = lst.head;
    Node *cur = lst.head;
    while(cur != NULL){
        if(cur-> data < 5.0){
            ans = cur;
            cout << ans->data << endl;
        }
        cur = cur->next;
    }
   return ans;
}
void removeAll(LinkedList &lst){
    while(lst.head != NULL){
        Node* cur = lst.head;
        lst.head = lst.head->next;
        delete cur;
    }
    lst.tail = NULL;
}
int main(){
    LinkedList list;
    init(list);

    while(1<2){
        float x;
        cin >> x;
        if(x == -1){
            break;
        }
        insertTail(list, x);
    }
    Node* ans = min(list);
    return 0;
}
