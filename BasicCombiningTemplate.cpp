/*
 * =====================================================================================
 *
 *       Filename:  BasicCombiningTemplate.cpp
 *
 *    Description:  Basic Combining Template
 *
 *        Created:  26/07/2020
 *
 *         Author:  Maikol Guzmán mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */
#include <iostream>  // allows program to output data to the screen

template<typename T>
struct MyStruct
{
    T data;
};

template<typename U>
auto make_struct(U u)
{
    return MyStruct<U>{ u };
}

// function main begins program execution
int main(int argc, const char *argv[]) {
    std::cout << "Welcome to the UNA!" << std::endl;  // display message

    auto f = make_struct(5);
    std::cout << f.data << '\n';

    return 0;  // indicate that program ended successfully
}  // end function main
