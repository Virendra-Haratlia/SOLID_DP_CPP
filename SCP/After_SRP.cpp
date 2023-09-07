#include <iostream>
#include <memory>
class DrawStrategy
{
public:
    virtual void draw() = 0;
    virtual ~DrawStrategy() = default;
};
class RectangleDrawStrategy :public DrawStrategy
{
public:
    void draw() override { std::cout << "RectangleDrawStrategy::draw" << std::endl; }
};
class Shape
{
public:
    virtual void draw() = 0;
    virtual ~Shape() = default;
};
class Rectangle :public Shape
{
public:
    Rectangle(std::shared_ptr<RectangleDrawStrategy>& pDrawStrategy) :m_DrawStrategy{ pDrawStrategy } {}
    void draw() override { m_DrawStrategy->draw(); }
private:
    std::shared_ptr<RectangleDrawStrategy> m_DrawStrategy;
};

int main()
{
    std::shared_ptr<RectangleDrawStrategy> drawStrategy = std::make_shared<RectangleDrawStrategy>();
    std::shared_ptr<Rectangle> rect = std::make_shared<Rectangle>(drawStrategy);
    rect->draw();
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

