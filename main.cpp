#include <iostream>
#include <string>


int main()
{
    double s, h;
    std::cin >> s >> h;

    if ((s > 0) & (h > 0) & (s < 100) & (h < 100))
    {
        std::cout << (s * h)/3 << std::endl;
    }
    else
    {
        std::cout << "S and h must be from 0 to 100" << std::endl;
    }
}
