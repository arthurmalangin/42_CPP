#include "Serializer.hpp"

int main() {
    Data originalData = {911, "testName"};

    // serialize
    uintptr_t raw = Serializer::serialize(&originalData);
    std::cout << "Serialized value: " << raw << std::endl;

    // deserialize
    Data* deserializedData = Serializer::deserialize(raw);
    std::cout << "Deserialized data, value: " << deserializedData->value << ", name: " << deserializedData->name << std::endl;

    if (deserializedData == &originalData) {
        std::cout << "Success !" << std::endl;
    } else {
        std::cout << "Error not the same !" << std::endl;
    }

    return 0;
}
