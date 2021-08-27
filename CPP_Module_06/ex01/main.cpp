#include <iostream>

struct Data{
    int ID;
    std::string Name;
};

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main(){
    Data dat = {
        .ID = 98,
        .Name = "42Lisboa"
    };

void *aux = static_cast<void*>(&dat);
uintptr_t original;
Data* copy;
original = serialize(&dat);
copy= deserialize(original);
std::cout<<"Original: "<<aux<<"\nSerialized into uintptr: "<<&original<<"\nDeserialized: "<<copy<<std::endl;
std::cout << copy->ID << "\nNA " <<copy->Name<<std::endl;

}