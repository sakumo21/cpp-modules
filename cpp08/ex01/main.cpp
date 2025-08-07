#include "Span.hpp"

int main()
{
    try
    {
        srand(time(0));
        Span span(1000);
        
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}