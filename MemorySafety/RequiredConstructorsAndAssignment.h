#pragma once
#include <iostream>

// Forces all child classes to implement their own copy constructor and move constructor
class RequiredConstructorsAndAssignment
{
public:
    RequiredConstructorsAndAssignment() = default;

    RequiredConstructorsAndAssignment(const RequiredConstructorsAndAssignment&) = delete;
    RequiredConstructorsAndAssignment(const RequiredConstructorsAndAssignment&&) = delete;
    RequiredConstructorsAndAssignment& operator= (const RequiredConstructorsAndAssignment&) = delete;
    RequiredConstructorsAndAssignment& operator= (const RequiredConstructorsAndAssignment&&) = delete;
};

class Child : public RequiredConstructorsAndAssignment
{
public:
    Child() = default;

    Child(const Child&)
    {
        std::cout << "Inside the copy constructor\n";
    }

    Child(const Child&&)
    {
        std::cout << "Inside the move constructor\n";
    }

    Child& operator= (const Child&)
    {
        std::cout << "Inside the copy assignment operator\n";
        return *this;
    }

    Child& operator= (const Child&&)
    {
        std::cout << "Inside the move assignment operator\n";
        return *this;
    }
};