#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

void clear_screen(){
    system("cls");
}

void show_menu() {
    clear_screen();
    printf(CYAN BOLD);
    printf("������������������������������������������������������������������������\n");
    printf("��" YELLOW BOLD "          ��������˵�            " CYAN "��\n");
    printf("������������������������������������������������������������������������\n");
    printf("��                                  ��\n");
    printf("��" WHITE "   1. " GREEN "����������                  " CYAN "��\n");
    printf("��" WHITE "   2. " GREEN "����˫������                " CYAN "��\n");
    printf("��" WHITE "   3. " GREEN "��żλ�ýڵ㽻������������" CYAN "��\n");
    printf("��" WHITE "   4. " GREEN "���������е㣨��������    " CYAN "��\n");
    printf("��" WHITE "   5. " GREEN "��������Ƿ��л�(�뿴Դ�룩 " CYAN "��\n");
    printf("��" WHITE "   6. " GREEN "��ת������������        " CYAN "��\n");
    printf("��" WHITE "   7. " GREEN "��ӡ��ǰ����                " CYAN "��\n");
    printf("��" WHITE "   0. " RED "�˳�����                    " CYAN "��\n");
    printf("��                                  ��\n");
    printf("������������������������������������������������������������������������\n" RESET);
    printf("\n"GREEN"��ܰ��ʾ����Ҫ���������˳������ٴ�(û�������r���s�ߨt���q��\n" );
    printf("\n"GREEN"          û��������ɻ�������ѡ5ֱ�����޻�(����Ӧ��û����)\n");
    printf("\n"YELLOW"ʦ�ֻ�Ҫʲô�����ҿ����ټ�(^��^ )\n");
    printf(WHITE BOLD "\n������ѡ��: " RESET);
}