
#include "test_cpp.h"
#include <iostream>
#include <thread>
#include <vector>

int main() {
    std::vector<std::thread> v;
    for (int i=0; i<4; i++){
        v.emplace_back([](int ind){
            std::cout << A(ind).foo();
        }, i);
    }

    for (auto& t : v) {
        t.join();
    }

    std::cout << "done" << std::endl;

    return 0;
}
