# include <iostream>
# include <stdint.h>

struct Data {
    int value;
    std::string name;
};

class Serializer {
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

	private:
		Serializer();
		Serializer(const Serializer &obj);
		~Serializer();
		Serializer &operator=(const	Serializer &obj);

};