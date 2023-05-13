#include "baillie_test.hpp"
#include <functional>
#include <string>

int main()
{
    int k = 0;
    for (long long i = 45007; i < 50000; i++)
    {
        auto res = baillieTest(i);
        if (res == 1)
        {
            // std::cout << "Is prime " << i;
            std::cout << "Number: " << i << " " << (res == 1 ? "Is prime" : "Isn't prime") << "\n";
            k++;
        }
    }
    if (k == 0)
        std::cout << "gg";
}