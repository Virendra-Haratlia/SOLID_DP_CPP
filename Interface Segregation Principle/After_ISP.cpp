

#include <iostream>
class DrawableObject
{
public:
    virtual void draw() = 0;
    virtual ~DrawableObject() = default;
};
class SerializableObject
{
public:
    virtual void serialize() = 0;
    virtual ~SerializableObject() = default;
};
class Rectangle :public DrawableObject
{
public:
    void draw() override { std::cout << "Rectangle::draw done" << std::endl; };
};
class File :public SerializableObject
{
public:
    void serialize() override { std::cout << "File::serialize done" << std::endl; }
};

void ProcessDrawableObject(std::shared_ptr<DrawableObject>& obj)
{
    obj->draw();
}
void ProcessSerializableObject(std::shared_ptr<SerializableObject>& obj)
{
    obj->serialize();
}
int main()
{
    std::shared_ptr<DrawableObject> Obj1 = std::make_shared<Rectangle>();
    std::shared_ptr<SerializableObject> Obj2 = std::make_shared<File>();
    ProcessDrawableObject(Obj1);
    ProcessSerializableObject(Obj2);
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
