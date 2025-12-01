#include "stack.hpp"
#include <iostream>

Stack::~Stack() {
    delete[] data;
}

void Stack::push(Dish item) {

    resize();
    data[current_size] = item;
    current_size++;
}

Dish Stack::pop() {
    if (current_size == 0) {
        return Dish("Empty");
    }
    current_size--;
    Dish item = data[current_size];
    data[current_size] = Dish("Empty");
    return item;
}

Dish Stack::peek() {
    if (current_size == 0) {
        return Dish("Empty");
    }
    return data[current_size - 1];
}

int Stack::size() {
    return current_size;
}


void Stack::resize() {
    int new_capacity = current_size + 1;
    Dish* new_data = new Dish[new_capacity];

    for (int i = 0; i < current_size; i++) {
        new_data[i] = data[i];
    }

    delete[] data;
    data = new_data;
}
