#include <iostream>
#include <vector>

int binary_search(std::vector<int> v, int item)
{
    int low = 0;
    int high = v.size()-1;

    while(low <= high)
    {
        int mid = (low + high) / 2;
        int guess = v[mid];
        if (guess == item)
            return mid;
        if (guess > item)
            high = mid - 1;
        else 
            low = mid + 1;
    }
    return -1;
}

int main()
{
    std::vector<int> myvector = {1, 3, 5, 7, 9};
    std::cout << binary_search(myvector, 3) << std::endl;
    std::cout << binary_search(myvector, 5) << std::endl;
}
