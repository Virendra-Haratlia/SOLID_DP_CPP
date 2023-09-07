

#include <iostream>
#include <vector>
#include <memory>
class Developer
{
public:
    Developer(const std::string& name) :m_name{ name } {}
    std::string GetName() { return m_name; }
private:
    std::string m_name;
};
class Tester
{
public:
    Tester(const std::string& name) :m_name{ name } {}
    std::string GetName() { return m_name; }
private:
    std::string m_name;
};
class Designer
{
public:
    Designer(const std::string& name) :m_name{ name } {}
    std::string GetName() { return m_name; }
private:
    std::string m_name;
};
class Manager
{
public:
    void addDeveloper(std::shared_ptr<Developer>& dev) { m_DeveloperList.push_back(dev); }
    void addTester(std::shared_ptr<Tester>& tester) { m_TesterList.push_back(tester); }
    void addDesigner(std::shared_ptr<Designer>& designer) { m_DesignerList.push_back(designer); }
    void PrintMangedResource()
    {
        for (auto dev : m_DeveloperList)
            std::cout<<dev->GetName()<<std::endl;
        for (auto tester : m_TesterList)
            std::cout << tester->GetName() << std::endl;
        for (auto designer : m_DesignerList)
            std::cout << designer->GetName() << std::endl;
    }
public:
    std::vector<std::shared_ptr<Developer>> m_DeveloperList;
    std::vector<std::shared_ptr<Tester>>    m_TesterList;
    std::vector<std::shared_ptr<Designer>>  m_DesignerList;
};
int main()
{
    std::shared_ptr<Manager> manager = std::make_shared<Manager>();
    std::shared_ptr<Developer> dev1 = std::make_shared<Developer>("Developer-1");
    manager->addDeveloper(dev1);
    std::shared_ptr<Tester> tester1 = std::make_shared<Tester>("Tester-1");
    manager->addTester(tester1);
    std::shared_ptr<Designer> designer1 = std::make_shared<Designer>("Designer-1");
    manager->addDesigner(designer1);
    std::shared_ptr<Developer> dev2 = std::make_shared<Developer>("Developer-2");
    manager->addDeveloper(dev2);
    std::shared_ptr<Tester> tester2 = std::make_shared<Tester>("Tester-2");
    manager->addTester(tester1);
    std::shared_ptr<Designer> designer2 = std::make_shared<Designer>("Designer-2");
    manager->addDesigner(designer2);
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
