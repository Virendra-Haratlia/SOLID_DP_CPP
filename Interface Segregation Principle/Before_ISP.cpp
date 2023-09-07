#include <iostream>
class Object
{
public:
    virtual void draw() = 0;
    virtual void serialize() = 0;
    virtual ~Object() = default;
};
class Rectangle :public Object
{
public:
    void draw() override { std::cout << "Rectangle::draw done" << std::endl; };
    void serialize() override { std::cout << "Rectangle::not serialize Object" << std::endl; }
};
class File :public Object
{
public:
    void draw() override { std::cout << "File::not drawing Object" << std::endl; };
    void serialize() override { std::cout << "File::serialize done" << std::endl; }
};

void ProcessObject(std::shared_ptr<Object>& obj)
{
    obj->draw();
    obj->serialize();
}
int main()
{
    std::shared_ptr<Object> Obj1 = std::make_shared<Rectangle>();
    std::shared_ptr<Object> Obj2 = std::make_shared<File>();
    ProcessObject(Obj1);
    ProcessObject(Obj2);
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
