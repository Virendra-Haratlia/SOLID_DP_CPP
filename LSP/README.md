# Liskov’s Substitution Principle (LSP)

Robert C. Martin describes it:

<strong><em>"Derived classes must be substitutable for their base classes."</em></strong>

This principle ensures that any class that is the child of a parent class should be usable in place of its parent without any unexpected behavior.
One of the classic examples of this principle is a rectangle having four sides. A rectangle’s height can be any value and width can be any value. A square is a rectangle with equal width and height. So we can say that we can extend the properties of the rectangle class into square class. In order to do that you need to swap the child (square) class with parent (rectangle) class to fit the definition of a square having four equal sides but a derived class does not affect the behavior of the parent class so if you will do that it will violate the Liskov Substitution Principle.

### In Our Code Example(Violation_LSP.cpp) 
the square class is not a subtype of the rectangle class because it has equal sides. So, only one property is needed instead of two properties, height, and width. It creates confusion for the users of the class and might give the wrong result.

### Reference:
* [Uncle Bob Article](http://butunclebob.com/ArticleS.UncleBob.PrinciplesOfOod)
* [geeksforgeeks](https://www.geeksforgeeks.org/solid-principle-in-programming-understand-with-real-life-examples/)

