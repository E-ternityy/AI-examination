#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

// ������
ListNode* create_node(int data){
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
// ������β�巨
void insert1(ListNode** head, int data){
    ListNode* newNode = create_node(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    ListNode* current = *head;
    while (current->next != NULL){
        current = current->next;
    }
    current->next = newNode;
}

// ��ӡ������
void print_list(ListNode* head){
    ListNode* current = head;
    // ���������ӡ
    while (current != NULL){
        printf("%d", current->data);
        if (current->next != NULL){
            printf(" -> ");
        }
        current = current->next;
    }
    printf("\n");
}

// ��żת��������������
ListNode* odd_even_swap(ListNode* head){
    if (head == NULL || head->next == NULL) {
        return head;
    }

    ListNode* newHead = head->next; // ��ͷ�ڵ�Ϊ�ڶ����ڵ�

    ListNode* prev = head; // ��һ���ڵ�
    ListNode* curr = head->next; // �ڶ����ڵ�

    while (curr != NULL) {
        // ��һ�Եĵ�һ���ڵ�
        ListNode* next = curr->next; 

        curr->next = prev; // ���ӷ�ת
        // ��һ���Ƿ��������ڵ�
        if (next != NULL && next->next != NULL) {
            // ����ָ��
            prev->next = next->next;
            prev = next;
            curr = next->next;
        }
        else {
            // ����βָ��
            prev->next = next;
            break;
        }
    }

    return newHead;
}

// ����ָ�뷨�����ڵ���Ϊż���������м������ĵ�һ���ڵ�ֵ��
ListNode* find_middle(ListNode* head){
    if (head == NULL) return NULL;

    ListNode* slow = head;
    ListNode* fast = head;
    // ��ָ����һ������ָ������������������ָ��ָ��Ŀ��ڵ㣩
    while (fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int is_cycle(ListNode* head){
    if (head == NULL) return 0;

    ListNode* slow = head;
    ListNode* fast = head;
    // ����ָ���жϣ����ɻ�������ָ��һ����������
    while (fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return 1;
        }
    }

    return 0;
}
// �ǵݹ鷴ת
ListNode* reverse_list1(ListNode* head){
    ListNode* prev = NULL;
    ListNode* current = head;
    ListNode* next = NULL;

    while (current != NULL){
        next = current->next; // nextָ����һ���ڵ�
        current->next = prev; // ��ǰ��һ���ڵ�ָ��prev
        prev = current; // prevָ��ǰ�ڵ�
        current = next; // ���µ�ǰ�ڵ�
    }

    return prev;
}

// �ݹ鷴ת
ListNode* reverse_list2(ListNode* head){
    if (head == NULL || head->next == NULL){
        return head;
    }
    ListNode* rest = reverse_list2(head->next); // �ݹ鷴ת������
    head->next->next = head; // ��ת��ǰ�ڵ�������������
    head->next = NULL; // �Ͽ�����

    return rest;
}
// ˫��������
DListNode* create_dlistnode(int data){
    DListNode* newNode = (DListNode*)malloc(sizeof(DListNode));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// ˫������β�巨
void insert2(DListNode** head, int data){
    DListNode* newNode = create_dlistnode(data);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    DListNode* current = *head;
    while (current->next != NULL){
        current = current->next;
    }

    current->next = newNode;
    newNode->prev = current;
}
// ˫�������ӡ
void print_dlist(DListNode* head){
    DListNode* current = head;
    // ���������ӡ
    while (current != NULL){
        printf("%d", current->data);
        if (current->next != NULL){
            printf(" <-> ");
        }
        current = current->next;
    }
    printf("\n");
}