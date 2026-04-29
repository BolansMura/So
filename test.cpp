#include <iostream>
#include <cassert>

int add(int a, int b) {
    return a + b;
}

int main() {
    assert(add(2, 2) == 4);
    assert(add(-1, 1) == 0);
    assert(add(0, 0) == 0);
    
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
