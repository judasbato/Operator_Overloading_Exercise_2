# Operator Overloading Exercise 2

A C++ project demonstrating operator overloading with a custom string class, `Mystring`. This class implements various constructors, destructors, and overloaded operators to work with strings, providing an example of effective memory management and class design in C++.

## Table of Contents
1. [Introduction](#introduction)
2. [Features](#features)
3. [Getting Started](#getting-started)
4. [Usage](#usage)
5. [Operator Overloads](#operator-overloads)
6. [Examples](#examples)

## Introduction
This project showcases operator overloading in C++ by implementing a custom string class, `Mystring`. The class provides methods to handle memory management and overloads common operators such as `==`, `+`, `-`, and others. It's designed as a learning exercise for C++ class design, operator overloading, and managing dynamic memory.

## Features
- **Custom String Implementation**: The `Mystring` class manages C-style strings using dynamic memory allocation.
- **Operator Overloading**: Implements various operators for string manipulation, comparison, concatenation, and more.
- **Memory Management**: Demonstrates deep copy semantics, move semantics, and memory cleanup in destructors.

## Getting Started
### Prerequisites
- C++ compiler (GCC, Clang, or MSVC)
- Basic knowledge of C++ and object-oriented programming

### Installation
Clone this repository and compile the project:
```bash
git clone https://github.com/yourusername/mystring-project.git
cd mystring-project
g++ main.cpp Mystring.cpp -o MystringApp
```

## Usage
Run the compiled program.
```bash
./MystringApp
```

## Operator Overloads
Here are the overloaded operators in `Mystring`:
- **Equality `==` and Inequality `!=`**: Compares two `Mystring` objects.
- **Comparison `<`, `>`, `<=`, `>=`**: Check lexicographical ordering of strings.
- **Concatenation `+` and `+=`**: Concatenates string.
- **Repeat `*` and `*=`**: Repeats the string a specified number of times.
- **Lowercase `-`**: Converts the string to lowercase.
- **Increment `++` (pre and post)**: Converts the string to uppercase.

## Examples
```cpp
#include <iostream>
#include "Mystring.h"

int main() {
  Mystring a{"hello"};
  Mystring b{"world"};

  // Concatenation
  Mystring c = a + " " + b; // hello world
  std::cout << c << std::endl;

  // Repeat
  Mystring d = b * 3; // "worldworldworld";
  std::cout << d << std::endl;

  // Increment (uppercase)
  ++a;
  std::cout << a << std::endl; // "HELLO"

  return 0;
}
```
