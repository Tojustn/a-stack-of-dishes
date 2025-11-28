#pragma once
#include "dish.hpp"

class Stack{
    private:
        static const int INITIAL_SIZE = 0;
        int current_size{0};
        Dish* data = new Dish[INITIAL_SIZE];
    public:
        Stack(){};
        ~Stack();
        void push(Dish item);
        Dish pop();
        Dish peek();
        int size();
        void resize();
};