#include <iostream>

// an example to print some of the ASCII characters
// line 9 gives the range of characters based on what the character is

int main()
{
    std::cout << "Printable ASCII [32..126]:\n";
    for (char c{' '}; c <= '~'; ++c)
        std::cout << c << ((c + 1) % 32 ? ' ' : '\n');
    std::cout << '\n';

    std::cout << std::endl << std::endl;
}