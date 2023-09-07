
#include <iostream>
#include <vector>
#include <memory>
class Employee
{
public:
    Employee(const std::string& name, const std::string& type) :m_name{ name }, m_type{ type }{}
    virtual std::string GetName() { return m_name; }
    virtual std::string GetType() { return m_type; }
protected:
    std::string m_name;
    std::string m_type;
};
class Developer:public Employee
{
public:
    Developer(const std::string& name, const std::string& type) :Employee( name , type) {}
};
class Tester :public Employee
{
public:
    Tester(const std::string& name, const std::string& type) :Employee(name, type) {}
};
class Designer :public Employee
{
public:
    Designer(const std::string& name, const std::string& type) :Employee(name, type) {}
};
class Manager
{
public:
    void addEmployee(std::shared_ptr<Employee>& emp) { m_EmployeeList.push_back(emp); }
    void PrintMangedResource()
    {
        for (auto emp : m_EmployeeList)
            std::cout<< emp->GetType()<<":" << emp->GetName() << std::endl;
    }
public:
    std::vector<std::shared_ptr<Employee>> m_EmployeeList;
};
int main()
{
    std::shared_ptr<Manager> manager = std::make_shared<Manager>();
    std::shared_ptr<Employee> dev1 = std::make_shared<Developer>("Developer-1","Developer");
    manager->addEmployee(dev1);
    std::shared_ptr<Employee> tester1 = std::make_shared<Tester>("Tester-1","Tester");
    manager->addEmployee(tester1);
    std::shared_ptr<Employee> designer1 = std::make_shared<Designer>("Designer-1","Designer");
    manager->addEmployee(designer1);
    std::shared_ptr<Employee> dev2 = std::make_shared<Developer>("Developer-2","Developer");
    manager->addEmployee(dev2);
    std::shared_ptr<Employee> tester2 = std::make_shared<Tester>("Tester-2", "Tester");
    manager->addEmployee(tester1);
    std::shared_ptr<Employee> designer2 = std::make_shared<Designer>("Designer-2", "Designer");
    manager->addEmployee(designer2);
    manager->PrintMangedResource();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
