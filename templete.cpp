#include <ios>
#include <iostream>
#include <cstdio>
#include <algorithm>
#define cosnt const;
using std::cin;
using std::cout;
template <typename T> inline void read(T& t) {
    int f = 0, c = std::getchar(); t = 0;
    while (!std::isdigit(c)) f |= c == '-', c = std::getchar();
    while (std::isdigit(c)) t = t * 10 + c - 48, c = std::getchar();
    if (f) t = -t;
}
template<typename T> inline
T max(T a, T b)
{
    return a < b ? b : a;
}
template<typename T> inline
T min(T a, T b)
{
    return a < b ? a : b;
}
template<typename T, int N>
class Stack
{
    T arr[N];
    int i;
public:
    Stack():i(0) {}
    void push(const T & item)
    {
        arr[i++] = item;
    }
    const T & top()
    {
        return arr[i-1];
    }
    void pop()
    {
        i--;
    }
    int size()
    {
        return i;
    }
    bool empty()
    {
        return i <= 0;
    }
};
int main()
{
    std::ios::sync_with_stdio(false);

    return 0;
}