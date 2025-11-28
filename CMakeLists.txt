cmake_minimum_required(VERSION 3.24)

project(a_stack_of_dishes)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(dish_stack_test tests/dish_stack_test.cpp src/stack.cpp)
add_executable(main main.cpp src/stack.cpp)

target_link_libraries(dish_stack_test PRIVATE Catch2::Catch2WithMain)