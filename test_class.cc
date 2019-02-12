/***************************************************************************
 * 
 * Copyright (c) 2019 Sina.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file test_class.cc
 * @author root(liudong7@staff.sina.com.cn)
 * @date 2019/01/30 18:43:16
 * @version $Revision$
 * @brief 
 *  
 **/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <iostream>

class person_t {
    public:
        person_t():_id(count++) {};
        explicit person_t(const std::string& wname):_id(count++),_name(wname) {}
        person_t& operator=(const person_t& other_worker) {
            _name = other_worker._name;
            return *this;
        }
        virtual ~person_t() {
            std::cout << "destructor person_t:" << _name << std::endl;
        }

        virtual void info() {
            std::cout << "this is person" << std::endl;
        }
        
        void print_info() {
            std::cout << "person:" << std::endl;
            std::cout << "_id:" << _id << std::endl;
            std::cout << "_name:" << _name << std::endl;
            std::cout << "count:" << count << std::endl;
        }
    private:
        person_t(const person_t& other_worker);
        const uint64_t _id; // object const member
        std::string _name;  // object member
        static uint64_t count;  // class member
};

class worker_t: public person_t {
    public:
        worker_t():person_t(),_wage(0), _level(0) {}
        explicit worker_t(const std::string &name):person_t(name),_wage(0), _level(0) {}

        virtual ~worker_t() {
            std::cout << "destructor worker_t" << std::endl;
        }
        virtual void info() {
            std::cout << "this is worker" << std::endl;
        }
        void print_info() {
            std::cout << "worker:" << std::endl;
            person_t::print_info();
            std::cout << "_level:" << _level << std::endl;
            std::cout << "_wage:" << _wage << std::endl;
        }
    private:
        std::string _company;
        uint32_t _wage;
        uint32_t _level;
};

uint64_t person_t::count = 100;

int main() {
    person_t p1("liudong");
    p1.print_info();
    person_t p2("liuyang");
    p2.print_info();
    //person_t p3;
    //p3 = p2;
    //p3.print_info();

    worker_t w1("liuli");
    w1.print_info();

    person_t *ptr1 = new worker_t("ptr1");
    ptr1->info();
    delete ptr1;

    person_t *ptr2 = new person_t("ptr2");
    ptr2->info();
    delete ptr2;
}





/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
