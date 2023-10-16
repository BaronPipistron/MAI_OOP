#pragma once

#include "vector.hpp"
#include "../interfaces/figure.hpp"
#include <iostream>

namespace figures {

class FiguresVector final {
private:
    vector<Figure*> _vec;

public:
    FiguresVector() = default;
    FiguresVector(const FiguresVector&);
    FiguresVector(FiguresVector&&) noexcept;

    FiguresVector& operator=(const FiguresVector&);
    FiguresVector& operator=(FiguresVector&&) noexcept;

    virtual ~FiguresVector() = default;

    void print_geometric_center() const noexcept;
    void print_area() const noexcept;
    void print_perimeter() const noexcept;
    
    double calculate_total_area() const noexcept;

    void push_back(Figure*);
    void pop_back();
    void erase(size_t);
};

}; // namespace figures

