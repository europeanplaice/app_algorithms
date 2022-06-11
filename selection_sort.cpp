#include <iostream>
#include <vector>

int find_smallest(std::vector<int> v)
{
    int smallest = v[0];
    int smallest_index = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < smallest)
        {
            smallest = v[i];
            smallest_index = i;
        }
    }
    return smallest_index;
}

std::vector<int> selection_sort(std::vector<int> v)
{
    std::vector<int> nv;
    for (int i = 0; v.size(); ++i)
    {
        int smallest_index = find_smallest(v);
        nv.push_back(v[smallest_index]);
        v.erase(v.begin() + smallest_index);
    }
    return nv;
}

int main()
{
    std::vector<int> v = {5, 3, 6, 2, 10};
    std::vector<int> sorted = selection_sort(v);
    for (const auto& elem: sorted)
    {
        std::cout << elem << std::endl;
    }
}
