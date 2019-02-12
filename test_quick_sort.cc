/***************************************************************************
 * 
 * Copyright (c) 2019 Sina.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file test_quick_sort.cc
 * @author root(liudong7@staff.sina.com.cn)
 * @date 2019/02/12 10:21:05
 * @version $Revision$
 * @brief 
 *  
 **/
#include <iostream>
#include <vector>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
typedef std::vector<int>::size_type vec_size_t;
void print_vec_data(std::vector<int> &data) {
    std::vector<int>::iterator it;
    for (it = data.begin(); it < data.end(); ++it) {
        std::cout << *it << std::endl;
    }
}
void quick_sort_data(std::vector<int> &data, vec_size_t start, vec_size_t end) {
    if (start >= end) return;

    int pivot_value = data[start];
    vec_size_t head_idx = start, tail_idx = end;
    int tmp;

    while (head_idx < tail_idx) {
        while (head_idx < tail_idx) {
            if (data[tail_idx] < pivot_value) {
                data[head_idx++] = data[tail_idx];
                break;
            } else {
                tail_idx--;
                continue;
            }
        }

        while (head_idx < tail_idx) {
            if (data[head_idx] > pivot_value) {
                data[tail_idx--] = data[head_idx];
                break;
            } else {
                head_idx++;
                continue;
            }
        }
    }
    vec_size_t pivot_idx = head_idx;
    data[pivot_idx] = pivot_value;
    std::cout << "...........(" << start << ":"  << end << ").."<< pivot_idx << ".............." << std::endl;
    print_vec_data(data);
    quick_sort_data(data, start, pivot_idx == 0 ? 0 : pivot_idx - 1);
    quick_sort_data(data, pivot_idx + 1, end);

    return;
}

void gen_random_data(std::vector<int> &data) {
    srand(time(NULL));
    for (int i = 0; i < 10; ++i) {
        //std::cout << rand() << std::endl;
        data.push_back(rand() % 4096);
    }
}


int main() {
    std::vector<int> data;

    gen_random_data(data);
    std::cout << ".......sort data:" << std::endl;
    print_vec_data(data);

    vec_size_t sz = data.size();
    quick_sort_data(data, 0, sz == 0 ? 0 : sz - 1);

    std::cout << ".......result:" << std::endl;
    print_vec_data(data);
    return 0;
}




/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
