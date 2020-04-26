#include <iostream>

class Person {
  public:
    virtual void say_something() = 0;
};

class Employee : public Person {
  public:
    void say_something() {
        std::cout << "Hello World!" << std::endl;
    }
};

class Manager {
    Person& employee;

  public:
    Manager(Person& employee_candidate)
        : employee(employee_candidate) {}

    void make_employee_say_something() {
        employee.say_something();
    }

    Employee get_employee() {
        return dynamic_cast<Employee&>(employee);
    }
};

int main(void) {
    Manager manager = Manager(*(new Employee()));
    manager.make_employee_say_something();
    Employee borrowed_employee = manager.get_employee();
    borrowed_employee.say_something();
    return 0;
}
