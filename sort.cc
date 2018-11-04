// sort.cc - demonstrates generic sorting algorithms
#include <iostream>
#include <string>

// swap values
template <typename T>
void swap(T& t, T& u)
{
    T tmp = t;
    t = u;
    u = tmp;
}

// generic sort algorithm; using bubble sort
template <typename T>
void sort(T* arr, size_t n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - (i + 1); j++) {
            // Note that your class should implement `operator<` !
            if (!(arr[j] < arr[j+1]))
                swap(arr[j], arr[j+1]);
        }
    }
}

// main function
int main()
{
    int* ns = new int[10]{ 4, 5, 1, 8, 3, 2, 7, 0, 5, 9 };
    sort(ns, 10);

    std::string* ss = new std::string[10]{
        "Google",
        "Amazon",
        "Intel",
        "IBM",
        "Cisco",
        "Microsoft",
        "Apple",
        "SAP",
        "Facebook",
        "Netflix"
    };
    sort(ss, 10);

    for (int i = 0; i < 10; i++) {
        std::cout << ns[i] << ' ';
    }
    std::cout << '\n';

    for (int i = 0; i < 10; i++) {
        std::cout << ss[i] << ' ';
    }
    std::cout << '\n';
}