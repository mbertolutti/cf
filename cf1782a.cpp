// cf1782a

#include <algorithm>
#include <iostream>
#include <limits>
#include <cmath>
#include <queue>
#include <functional>

int solve()
{
    // cube
    int w;
    std::cin >> w;
    int d;
    std::cin >> d;
    int h;
    std::cin >> h;

    // laptop
    int a;
    std::cin >> a;
    int b;
    std::cin >> b;

    // projector
    int f;
    std::cin >> f;
    int g;
    std::cin >> g;

    // calculate shortest path
    // inner
    int x_i = std::abs(a - f);
    int y_i = std::abs(b - g);
    
    // outer bot
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq_min_heap;
    pq_min_heap.push(a);
    pq_min_heap.push(w - a);
    pq_min_heap.push(b);
    pq_min_heap.push(d - b);

    // outer top
    pq_min_heap.push(f);
    pq_min_heap.push(w - f);
    pq_min_heap.push(g);
    pq_min_heap.push(d - g);

    return (x_i + y_i + 2 * pq_min_heap.top() + h);
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        std::cout << solve() << "\n";
    }
}
