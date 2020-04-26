#include <iostream>

class SaySomething {
  public:
    virtual void say_something() = 0;
};

class SayHello : public SaySomething {
  public:
    void say_something() {
        std::cout << "Hello World!" << std::endl;
    }
};

int main(void) {
    SaySomething *something = new SayHello();
    something->say_something();
    return 0;
}
