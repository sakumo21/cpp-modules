#include <iostream>
#include "Array.hpp" // Replace with your actual header filename
#include <string>
#include <cassert>

int main() {
    std::cout << "=== Default constructor test ===" << std::endl;
    Array<int> a;
    std::cout << "Size: " << a.size() << std::endl;

    std::cout << "\n=== Constructor with size ===" << std::endl;
    Array<int> b(5);
    std::cout << "Size: " << b.size() << std::endl;
    for (unsigned int i = 0; i < b.size(); i++) {
        b[i] = i * 10;
        std::cout << "b[" << i << "] = " << b[i] << std::endl;
    }

    std::cout << "\n=== Copy constructor ===" << std::endl;
    Array<int> c(b);
    for (unsigned int i = 0; i < c.size(); i++) {
        std::cout << "c[" << i << "] = " << c[i] << std::endl;
    }

    std::cout << "\n=== Modify original after copy ===" << std::endl;
    b[0] = 999;
    std::cout << "b[0] = " << b[0] << " (should be 999)" << std::endl;
    std::cout << "c[0] = " << c[0] << " (should be original value)" << std::endl;

    std::cout << "\n=== Assignment operator ===" << std::endl;
    Array<int> d;
    d = b;
    for (unsigned int i = 0; i < d.size(); i++) {
        std::cout << "d[" << i << "] = " << d[i] << std::endl;
    }

    std::cout << "\n=== Const access ===" << std::endl;
    const Array<int> e(b);
    std::cout << "e[1] = " << e[1] << std::endl;
    // e[1] = 123; // Uncommenting this should cause a compile-time error

    std::cout << "\n=== Out-of-bounds test ===" << std::endl;
    try {
        std::cout << b[100] << std::endl; // Should throw
    } catch (const std::exception& ex) {
        std::cout << "Caught exception: " << ex.what() << std::endl;
    }

    std::cout << "\n=== Array of std::string ===" << std::endl;
    Array<std::string> s(3);
    s[0] = "Hello";
    s[1] = "Array";
    s[2] = "Test";
    for (unsigned int i = 0; i < s.size(); i++) {
        std::cout << "s[" << i << "] = " << s[i] << std::endl;
    }

    std::cout << "\nAll tests completed.\n";
    return 0;
}
