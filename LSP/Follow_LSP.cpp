#include <iostream>
#include <memory>

class IFruit
{
public:
    virtual std::string GetColor() = 0;
    virtual ~IFruit() = default;
};
class Apple:public IFruit
{
public:
    std::string GetColor() override
    {
        return "Red";
    }
    
};
class Orange : public IFruit
{
public:
    std::string GetColor() override
    {
        return "Orange";
    }
};
void showFruitColor(std::shared_ptr<IFruit> fruit)
{
    std::cout << "Fruit Color is:" << fruit->GetColor() << std::endl;
}
int main()
{
    std::shared_ptr<IFruit> fruit1 = std::make_shared<Orange>();
    showFruitColor(fruit1);
    std::shared_ptr<IFruit> fruit2 = std::make_shared<Apple>();
    showFruitColor(fruit2);
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
