#include <iostream>
using namespace std;

bool isprime (int lownum){
    bool flag = true;
    if (lownum < 2){
        flag = false;
    }   
    else {for (int i=2; i < lownum; i++){
        if (lownum % i ==0){
            flag = false;
            break;
        }
    }}
    return flag;
}

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

int countPrime (LinkedList lst){
    // if(lst.head == NULL){
    //     return NULL;
    // }
    Node *ans = lst.head;
    Node *cur = lst.head;
    int count = 0;
    while(cur != NULL){
        if(isprime(cur-> data)){
            count ++;
        }
        cur = cur->next;
    }
   return count;
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
    int ans = countPrime(list);
    cout << ans;
    return 0;
}