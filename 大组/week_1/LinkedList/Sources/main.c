#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "LinkedList.h"
#include "menu.h"

int main() {
    ListNode* shead = NULL;    // ��������ͷָ��
    DListNode* dhead = NULL;   // ˫������ͷָ��
    int choice;

    while (1) {
        show_menu();
        scanf("%d", &choice);

        switch (choice){
        case 1:{ 
            // ����������
            if (shead != NULL){
                printf("\n���е������r(�s_�t)�q\n");
                break;
            }
            printf("\n����Ԫ�ظ���: ");
            int n, val;
            scanf("%d", &n);
            printf("��������%d������:\n", n);
            for (int i = 0; i < n; i++) {
                scanf("%d", &val);
                insert1(&shead, val);
            }
            printf("\n���������ɹ����c( ^��^ �g )\n");
            break;
        }
        case 2:{
            // ����˫����
            if (dhead != NULL){
                printf("\n����˫�������r(�s_�t)�q\n");
                break;
            }
            printf("\n����Ԫ�ظ���: ");
            int n, val;
            scanf("%d", &n);
            printf("��������%d������:\n", n);
            for (int i = 0; i < n; i++) {
                scanf("%d", &val);
                insert2(&dhead, val);
            }
            printf("\n˫���������ɹ����c( ^��^ �g )\n");
            break;
        }
        case 3:
            // ��żת��
            shead = odd_even_swap(shead);
            printf("\n����������ż�������c( ^��^ �g )\n");
            break;
        case 4:
            // �е��ѯ
            ListNode* middle = find_middle(shead);
            if (middle){
                printf("\n�������е�ֵΪ: %d\n", middle->data);
            }else{
            }
            break;
        case 5:
            // �ж����޻�
            if (shead != NULL){
                printf("\n������%s��\n", is_cycle(shead) ? "��" : "û��");
            }else{
                printf("\n�޵������r(�s_�t)�q\n");
            }
            break;
        case 6:
            // ��ת����
            if (shead != NULL){
                int x;
                printf("\n����1���÷ǵݹ鷴ת������2���õݹ鷴ת\n");
                printf("����������(����1/2�������ַ���):\n");
                scanf("%d", &x);
                if (x == 1){
                    shead = reverse_list1(shead);
                    printf("\n��ת�ɹ��c( ^��^ �g )");
                }
                else if(x == 2){
                    shead = reverse_list2(shead);
                    printf("\n��ת�ɹ��c( ^��^ �g )");
                }
            }else{
                printf("\n�޵������r(�s_�t)�q\n");
            }
            break;
        case 7:
            // ��ʾ����
            if (shead == NULL && dhead == NULL){
                printf("������r(�s_�t)�q");
            }
            if (shead != NULL){
                printf("\n��ǰ��������: ");
                print_list(shead);
            }
            if (dhead != NULL){
                printf("\n��ǰ˫������: ");
                print_dlist(dhead);
            }
            break;
        case 0:
            return 0;
        default:
            printf("\n��Ч�������ԣ��r(�s_�t)�q\n");
        }

        printf("\n���س�������...");
        getchar(); // ����������
        getchar();
    }

    return 0;
}