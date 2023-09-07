# Open/Closed Principle(OCP)

Robert C. Martin describes it:

<strong><em>"You should be able to extend a classes behavior, without modifying it."</em></strong>

which means you should be able to extend a class behavior, without modifying it.
Suppose developer A needs to release an update for a library or framework and developer B wants some modification or add some feature on that then developer B is allowed to extend the existing class created by developer A but developer B is not supposed to modify the class directly. Using this principle separates the existing code from the modified code so it provides better stability, maintainability and minimizes changes as in your code.

### Reference:
* [Uncle Bob Article](http://butunclebob.com/ArticleS.UncleBob.PrinciplesOfOod)
* [geeksforgeeks](https://www.geeksforgeeks.org/solid-principle-in-programming-understand-with-real-life-examples/)
