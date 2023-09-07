# Liskov’s Substitution Principle (LSP)

Robert C. Martin describes it:

<strong><em>"Derived classes must be substitutable for their base classes."</em></strong>

This principle ensures that any class that is the child of a parent class should be usable in place of its parent without any unexpected behavior.
One of the classic examples of this principle is a rectangle having four sides. A rectangle’s height can be any value and width can be any value. A square is a rectangle with equal width and height. So we can say that we can extend the properties of the rectangle class into square class. In order to do that you need to swap the child (square) class with parent (rectangle) class to fit the definition of a square having four equal sides but a derived class does not affect the behavior of the parent class so if you will do that it will violate the Liskov Substitution Principle.

### before LSP
![image](https://github.com/Virendra-Haratlia/SOLID_DP_CPP/assets/141754196/d79ca442-ae97-419d-92c8-0a185968cd5c)

### After LSP
![image](https://github.com/Virendra-Haratlia/SOLID_DP_CPP/assets/141754196/c94b516f-7c47-4aee-8f92-543691683dbd)

### Reference:
* [Uncle Bob Article](http://butunclebob.com/ArticleS.UncleBob.PrinciplesOfOod)
* [geeksforgeeks](https://www.geeksforgeeks.org/solid-principle-in-programming-understand-with-real-life-examples/)

