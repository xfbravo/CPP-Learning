#include <iostream>
using namespace std;

typedef class Node
{
public:
    int data;
    Node *next;
    Node(int val) : data(val), next(NULL) {}
} *LinkNode;
void insertNode(LinkNode head, int val, int pos)
{
    Node *newNode = new Node(val);
    if (pos == 0)
    {
        newNode->next = head->next;
        head->next = newNode;
        return;
    }
    Node *current = head;
    // 找到插入位置的前一个节点
    for (int i = 0; i < pos; i++)
    {
        current = current->next;
        if (current == NULL)
        {
            cout << "Position out of bounds" << endl;
            return;
        }
    }
    // 如果当前节点的下一个节点为空，说明要插入的位置在链表的末尾
    if (current->next == NULL)
    {
        current->next = newNode;
    }
    else // 如果当前节点的下一个节点不为空，说明要插入的位置在链表的中间
    {
        newNode->next = current->next;
        current->next = newNode;
    }
}

void deleteNodeByPos(LinkNode head, int pos)
{
    Node *current = head;
    // current初始化指向头节点，current->next表示要删除的节点
    for (int i = 0; i < pos; i++)
    {
        current = current->next;
        if (current->next == NULL)
        { // 如果当前节点的下一个节点为空，说明要删除的节点不存在
            cout << "Position out of bounds" << endl;
            return;
        }
    }
    // current移动玩之后，current->next就是要删除的节点
    Node *temp = current->next;
    if (temp->next == NULL)
    {
        current->next = NULL;
    }
    else
    {
        current->next = temp->next;
    }
    delete temp; // 释放内存
}

void clearNodelist(LinkNode head)
{
    LinkNode current = head;
    while (current != NULL)
    {
        Node *temp = current;
        current = current->next;
        delete temp;
    }
}

int main()
{
    LinkNode head = new Node(0); // Dummy head node
    LinkNode first = new Node(1);
    LinkNode second = new Node(2);
    LinkNode third = new Node(3);
    head->next = first;
    first->next = second;
    second->next = third;
    insertNode(head, 4, 2);   // Insert 4 at position 2
    insertNode(head, 5, 0);   // Insert 5 at position 0
    deleteNodeByPos(head, 4); // Delete node at position 2
    // head->5->1->2->4->NULL
    Node *current = head->next;
    while (current->next != NULL)
    {
        cout << current->data << "->";
        current = current->next;
    }
    cout << current->data << endl;
    return 0;
}