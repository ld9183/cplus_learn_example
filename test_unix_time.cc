/***************************************************************************
 * 
 * Copyright (c) 2018 Sina.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file test_unix_time.cc
 * @author root(liudong7@staff.sina.com.cn)
 * @date 2018/12/11 14:13:41
 * @version $Revision$
 * @brief 
 *  
 **/

#include<stdio.h>
#include<time.h>

int main() {
    time_t ts;
    struct tm *p;
    time(&ts);
    p = localtime(&ts);
    printf("%d-%d-%d %d:%d:%d\n", p->tm_year + 1900, p->tm_mon + 1, p->tm_mday, p->tm_hour, p->tm_min, p->tm_sec);
    return 0;
}



















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
