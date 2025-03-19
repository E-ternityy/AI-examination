#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// ������ڵ�
typedef struct ListNode {
    int data;
    struct ListNode* next;
} ListNode;

// ˫������ڵ�
typedef struct DListNode {
    int data;
    struct DListNode* prev;
    struct DListNode* next;
} DListNode;


// ���������
ListNode* create_node(int data); // ����
void insert1(ListNode** head, int data); // β�����
void print_list(ListNode* head); // ��ӡ
ListNode* odd_even_swap(ListNode* head); // ��żת��
ListNode* find_middle(ListNode* head); // ���е�
int is_cycle(ListNode* head); // �жϻ�
ListNode* reverse_list1(ListNode* head); // �ǵݹ鷴ת
ListNode* reverse_list2(ListNode* head); // �ݹ鷴ת

// ˫�������
DListNode* create_dlistnode(int data); // ������˫��
void insert2(DListNode** head, int data); // β����루˫��
void print_dlist(DListNode* head); // ��ӡ
#endif