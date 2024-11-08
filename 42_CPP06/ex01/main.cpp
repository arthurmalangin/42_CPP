#include "Serializer.hpp"

int main() {
    Data originalData = {911, "testName"};

    // serialize
    uintptr_t raw = Serializer::serialize(&originalData);
    std::cout << "\033[103mSerialized value: " << raw << "\033[0m" << std::endl;

    // deserialize
    Data* deserializedData = Serializer::deserialize(raw);
    std::cout << "Deserialized data, value: " << deserializedData->value << ", name: " << deserializedData->name << std::endl;

    if (deserializedData == &originalData) {
        std::cout << "\033[102mSuccess !\033[0m" << std::endl;
    } else {
        std::cout << "\033[101mError not the same !\033[0m" << std::endl;
    }

    return 0;
}
