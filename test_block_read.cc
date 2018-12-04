/***************************************************************************
 * 
 * Copyright (c) 2018 Sina.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file test_block_read.cc
 * @author root(liudong7@staff.sina.com.cn)
 * @date 2018/12/04 15:13:24
 * @version $Revision$
 * @brief 
 *  
 **/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
#include<iostream>


int main() {
    int fd = STDIN_FILENO;
    char buf[1024];

    while(true) {
        int ret = read(fd, buf, sizeof(buf));
        if (ret < 0) {
            std::cout << "read fail, error:" << strerror(errno) << std::endl;
            continue;
        } else if (ret == 0) {
            std::cout << "read eof" << std::endl;
            continue;
        } else {
            buf[ret] = '\0';
            std::cout << "input:" << buf << std::endl;
        }
    }
}



















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
