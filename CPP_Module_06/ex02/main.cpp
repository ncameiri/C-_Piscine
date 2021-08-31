#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
//https://en.cppreference.com/w/cpp/language/dynamic_cast
Base* generate(void) {
    Base* base;
    int random;
    random = (rand() % 3);
	if (random == 0)
    {
		std::cout << "Generate returns A Element" << std::endl;
		base = new A();
	}
    else if (random == 1)
    {
		std::cout << "Generate returns B Element" << std::endl;
		base = new B();
	}
    else
    {
		std::cout << "Generate returns C Element" << std::endl;
		base = new C();
	}
	return base;
}

void identify(Base* p) {
	if (!p) 
		return;
    if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p) {
	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
    catch (std::exception& err)
    {}

	try {
		B& b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
    catch (std::exception& err) 
    {}

	try {
		C& c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
    catch (std::exception& err)
    {}
}

int main(){
    srand(time(0));
    Base *base;
    for(int i=0;i<5;i++)
    {
        base = generate();
        std::cout<<"identify Base: ";
		identify(base);
        std::cout<<"identify *Base: ";
		identify(*base);
        std::cout<<"\n\n";
		
		delete base;
    }
}