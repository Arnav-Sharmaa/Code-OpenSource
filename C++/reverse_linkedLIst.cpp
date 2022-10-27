#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node()
    {
        next = NULL;
    }
};

class LinkedList
{
public:
    Node *head = NULL;
    void insert(int num)
    {
        Node *temp = new Node;
        temp->value = num;
        temp->next = head;
        head = temp;
    }
    void display()
    {
        Node *iterator = new Node;
        iterator = head;
        cout << "Linked List : ";
        while (iterator->next != NULL)
        {
            cout << iterator->value << " ";
            iterator = iterator->next;
        }
        cout << iterator->value << " ";
        cout << endl;
    }

    void reverse()
    {
        cout << "reversing Linked List" << endl;
        Node *nextNode = new Node;
        Node *prevNode = new Node;
        prevNode = NULL;
        while (head->next != NULL)
        {
            nextNode = head->next;
            head->next = prevNode;
            prevNode = head;
            head = nextNode;
        }
        head->next = prevNode;
    }

    int mid()
    {
        Node *temp = new Node;
        Node *mid = new Node;
        int i = 0;
        temp = head;
        mid = head;
        while (temp->next != NULL)
        {
            if (i++ % 2 == 0)
            {
                mid = mid->next;
            }
            temp = temp->next;
        }
        return mid->value;
    }
};

int main()
{
    LinkedList L1;
    L1.insert(50);
    L1.insert(9);
    L1.insert(10);
    L1.insert(11);
    L1.insert(9);
    L1.insert(78);
    L1.insert(7);

    L1.display();
    L1.reverse();
    L1.display();
    cout << "Mid value = " << L1.mid() << endl;

    return 0;
}