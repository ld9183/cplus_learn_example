/***************************************************************************
 * 
 * Copyright (c) 2019 Sina.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file test_list.cc
 * @author root(liudong7@staff.sina.com.cn)
 * @date 2019/02/13 14:44:05
 * @version $Revision$
 * @brief 
 *  
 **/
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct _list_node {
    int val;
    struct _list_node *next;
} list_node;

list_node* push_front(list_node *head, int value) {
    list_node *ln = (list_node*)malloc(sizeof(list_node));
    ln->val = value;
    ln->next = head;

    return ln;
}

void print_list(list_node *head) {
    if (head == NULL) return;
    list_node *p = head;
    printf("....print list....\n");
    while (p != NULL) {
        printf("node val=%d\n", p->val);
        p = p->next;
    }
}

list_node* make_list() {
    list_node *head = NULL;
    head = push_front(head, 10);
    head = push_front(head, 9);
    head = push_front(head, 8);

    return head;

}

list_node* reverse(list_node *head) {
    list_node *pre = NULL;
    list_node *p = head;

    if (head == NULL) return NULL;

    while (p != NULL) {
        list_node *tmp = p->next;
        p->next = pre;

        pre = p;
        p = tmp;
    }

    return pre;
}
int main() {
    list_node *head = make_list();

    print_list(head);
    head = reverse(head);
    print_list(head);
}




/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
