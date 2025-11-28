#include <iostream>
#include "src/stack.hpp"
#include "src/dish.hpp"

int main() {
  Stack stack;
  Dish one_dish = Dish("A dish with one fish pattern on it");
  Dish two_dish = Dish("A dish with two fish patterns on it");
  Dish red_dish = Dish("A dish with a red fish pattern on it");
  Dish blue_dish = Dish("A dish with a blue fish pattern on it");
  
  // The variable stack_size should equal zero.
  int stack_size = stack.size();
  
  stack.push(one_dish);
  stack.push(two_dish);
  stack.push(red_dish);
  stack.push(blue_dish);
  
  // The variable size_after_pushes should equal four.
  int size_after_pushes = stack.size();
  
  // The variable peeked_dish should have a description of "A dish with a blue fish pattern on it"
  Dish peeked_dish = stack.peek();
  
  // The variable popped_dish should have a description of "A dish with a blue fish pattern on it"
  Dish popped_dish = stack.pop();
  
  // The variable another_popped_dish should have a description of "A dish with a red fish pattern on it"
  Dish another_popped_dish = stack.pop();
  
  // The variable final_size should equal two.
  int final_size = stack.size();


  std::cout << "Stack size: " << stack_size << std::endl;
  std::cout << "Size after pushes: " << size_after_pushes << std::endl;
  std::cout << "Peeked dish description: " << peeked_dish.get_description() << std::endl;
  std::cout << "Popped dish description: " << popped_dish.get_description() << std::endl;
  std::cout << "Another popped dish description: " << another_popped_dish.get_description() << std::endl;
  std::cout << "Final size: " << final_size << std::endl;

  return 0;
}
