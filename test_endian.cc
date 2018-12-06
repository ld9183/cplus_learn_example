/***************************************************************************
 * 
 * Copyright (c) 2018 Sina.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file test_endian.cc
 * @author root(liudong7@staff.sina.com.cn)
 * @date 2018/12/06 14:33:41
 * @version $Revision$
 * @brief 
 *  
 **/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main() {
    int num = 0x01020304;

    unsigned char *p = NULL;

    p = (unsigned char*)(&num);

    for (int i = 0; i < 4; ++i) {
        printf("addr=%p i=%d, val=%d\n", p + i, i, *(p+i));
    }

}



















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
