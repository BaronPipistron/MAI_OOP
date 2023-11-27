#include <iostream>
#include <utility>
#include <tuple>

template <class...Args>
void print(Args&&... args) {
    auto tuple = std::make_tuple(std::forward<Args>(args)...);
    auto x = std::get<0>(tuple);
    auto y = std::get<1>(tuple);
    auto z = std::get<2>(tuple);

    std::cout << "x: " << x << ", y: " << y << ", z: " << z << std::endl;
}

int main () {
    print(1, 2, 3, 4);
}