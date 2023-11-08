#pragma once

#include <iostream>
#include <memory>

namespace containers {

template <class T, class Allocator = std::allocator<T>>
class vector final {
    using AllocatorTraits = std::allocator_traits<Allocator>;
private:
    size_t _size = 0;
    size_t _capacity = 0;
    T* _data;
    Allocator _allocator;

public:
    vector();
    vector(Allocator&);
    vector(const size_t);
    explicit vector(const size_t, const T& = T());
    vector(const std::initializer_list<T>&);
    vector(const vector<T, Allocator>&) noexcept;
    vector(vector<T, Allocator>&&) noexcept;
    vector<T, Allocator>& operator=(const vector<T, Allocator>&) noexcept;
    vector<T, Allocator>& operator=(vector<T, Allocator>&&) noexcept;

    virtual ~vector() noexcept;

    void reserve(const size_t);
    explicit void resize(const size_t, const T& = T());
    void shrink_to_fit();
    void clear();

    explicit void push_back(const T&);
    void pop_back() noexcept;

    template <class... Args>
    void emplace_back(const Args&...);

    size_t size() const noexcept;
    size_t capacity() const noexcept;

    T& operator[](const size_t) noexcept;
    T& at(const size_t);
    [[nodiscard]] T& front();
    [[nodiscard]] T& back();
    const T& operator[](const size_t) const noexcept;
    const T& at(const size_t) const;
    [[nodiscard]] const T& front() const;
    [[nodiscard]] const T& back() const;

    iterator begin() const;
    iterator end() const;

    bool empty() const noexcept;
    bool operator==(const vector<T, Allocator>&) const noexcept;
    bool operator!=(const vector<T, Allocator>&) const noexcept;

    class iterator final {
        private:
            T* _ptr;

        public:
            iterator() = delete;
            iterator(T*);
            iterator(const iterator&) noexcept;
            iterator(iterator&&) noexcept;
            iterator& operator=(const iterator&) noexcept;
            iterator& operator=(iterator&&) noexcept;

            virtual ~iterator() noexcept = default;

            T& operator*() noexcept;
            const T& operator*() const noexcept;

            iterator& operator+=(const int64_t);
            iterator& operator-=(const int64_t);
            iterator& operator++();
            iterator& operator--();
            iterator operator++(int);
            iterator operator--(int);
            [[nodiscard]] iterator operator+(const int64_t);
            [[nodiscard]] iterator operator-(const int64_t);

            bool operator==(const iterator&) const noexcept;
            bool operator!=(const iterator&) const noexcept;
    }; // class iterator
};

}; // namespace containers