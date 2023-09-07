// Example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <memory>
class Rectangle 
{
public:
    virtual void setHeight(const unsigned int height) { m_Height = height; }
    virtual void setWidth(const unsigned int width) { m_Width = width; }
    unsigned int getHeight()const { return m_Height; }
    unsigned int getWidth() const { return m_Width; }
    virtual ~Rectangle() = default;
protected:
    unsigned int m_Height;
    unsigned int m_Width;
};
class Square :public Rectangle
{
public:
    void setHeight(const unsigned int height) override { m_Height = height; m_Width = height;}
    void setWidth(const unsigned int width) override { m_Height = width; m_Width = width; }
};
unsigned int CalculateArea(const std::shared_ptr<Rectangle> rect)  { return (rect->getHeight() * rect->getWidth()); }
int main()
{
    std::shared_ptr<Rectangle> squr1 = std::make_shared<Square>();
    squr1->setHeight(7);
    squr1->setWidth(9);
    CalculateArea(squr1);
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

