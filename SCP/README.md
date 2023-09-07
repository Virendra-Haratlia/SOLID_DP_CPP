# Single Responsibility Principle (SRP)

Robert C. Martin describes it:

<strong><em>"A class should have one, and only one, reason to change."</em></strong>

which means every class should have a single responsibility or single job or single purpose. Take the example of developing software. The task is divided into different members doing different things as front-end designers do design, the tester does testing and backend developer takes care of backend development part then we can say that everyone has a single job or responsibility.
Most of the time it happens that when programmers have to add features or new behavior they implement everything into the existing class which is completely wrong. It makes their code lengthy, complex and consumes time when later something needs to be modified. Use layers in your application and break God classes into smaller classes or modules.

### Before SRP 
![image](https://github.com/Virendra-Haratlia/SOLID_DP_CPP/assets/141754196/ef520383-b28f-4759-9bdc-6ae6030cf9c4)

### After SRP

![image](https://github.com/Virendra-Haratlia/SOLID_DP_CPP/assets/141754196/28e9c149-91e0-464b-a9d8-2d7b1989630d)

### Reference:
* [Uncle Bob Article](http://butunclebob.com/ArticleS.UncleBob.PrinciplesOfOod)
* [geeksforgeeks](https://www.geeksforgeeks.org/solid-principle-in-programming-understand-with-real-life-examples/)
