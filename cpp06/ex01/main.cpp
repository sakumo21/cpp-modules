#include "Serializer.hpp"

int main()
{
    Data data;
    data.i = 42;
    data.str = "Hello, World!";
    std::cout << "Original Data: " << data.i << ", " << data.str << std::endl;
    uintptr_t raw = Serializer::serialize(&data);
    std::cout << "Serialized Data: " << raw << std::endl;
    Data* deserializedData = Serializer::deserialize(raw);
    std::cout << "Deserialized Data: " << deserializedData->i << ", " << deserializedData->str << std::endl;
    return 0;
}