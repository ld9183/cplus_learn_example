/***************************************************************************
 * 
 * Copyright (c) 2019 Sina.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file test_bitree.cc
 * @author root(liudong7@staff.sina.com.cn)
 * @date 2019/02/15 15:47:33
 * @version $Revision$
 * @brief 
 *  
 **/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

typedef struct _binode {
    char val;
    struct _binode *left;
    struct _binode *right;
} binode;

void add_tree(binode **p) {
    char ch;
    printf("please input char:");
    while ((ch = getchar()) == '\n') {
        continue;
    }

    if (ch == 27) {
        *p = NULL;
        return;
    }

    *p = (binode*)malloc(sizeof(binode));
    (*p)->val = ch;

    add_tree(& ((*p)->left));
    add_tree(& ((*p)->right));
}

void print_tree(binode *root) {
    if (root == NULL) return;
    printf("%c", root->val);
    print_tree(root->left);
    print_tree(root->right);
}

int main() {
    binode *root;
    add_tree(&root);
    printf("..........print tree begin....\n");
    print_tree(root);
    printf("\n..........print tree end....\n");
}











/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
