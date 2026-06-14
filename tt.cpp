#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
void processVector(vector<T>& v)
{
    sort(v.begin(), v.end());

    cout << "Вектор після сортування: ";

    for (const auto& x : v)
        cout << x << " ";

    cout << endl;
}

int main()
{
    vector<int> v = {8, 3, 10, 1, 5};

    processVector(v);

    return 0;
}