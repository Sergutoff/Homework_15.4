#include <iostream>

void func_for(int a, const int N)
{
    for (int x = a; x <= N; x += 2)
    {
        std::cout << x << "\n";
    }
}

int main()
{
    const int N = 10;
    int a = 0;

    func_for(a, N);
    std::cout << "Enter '0' to output even num., or enter '1' to output odd num.: ";
    std::cin >> a;
    func_for(a, N);

    return 0;
}
