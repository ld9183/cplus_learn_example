/***************************************************************************
 * 
 * Copyright (c) 2018 Sina.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file test_vector_erase.cc
 * @author root(liudong7@staff.sina.com.cn)
 * @date 2018/12/04 14:27:04
 * @version $Revision$
 * @brief 
 *  
 **/


#include<iostream>
#include<vector>

int main() {
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(3);


    std::vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); ) {
        if (*it == 3) {
            it = vec.erase(it);
        } else {
            ++it;
        }
    }

    for (it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << std::endl;
    }
}


















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
