# Interface Segregation Principle (ISP)

Robert C. Martin describes it:

<strong><em>"Make fine grained interfaces that are client specific."</em></strong>

This principle is the first principle that applies to Interfaces instead of classes in SOLID and it is similar to the single responsibility principle. It states that “do not force any client to implement an interface which is irrelevant to them“. Here your main goal is to focus on avoiding fat interface and give preference to many small client-specific interfaces. You should prefer many client interfaces rather than one general interface and each interface should have a specific responsibility.

### Before Applying Interface Segregation Principle (ISP)
![image](https://github.com/Virendra-Haratlia/SOLID_DP_CPP/assets/141754196/6fd69e9f-bb02-470a-9aee-574d7bc8fa24)

### After Applying Interface Segregation Principle (ISP)
![image](https://github.com/Virendra-Haratlia/SOLID_DP_CPP/assets/141754196/7ff591db-34d6-47e4-9fd5-38375d3b5e83)

### Reference:
* [Uncle Bob Article](http://butunclebob.com/ArticleS.UncleBob.PrinciplesOfOod)
* [geeksforgeeks](https://www.geeksforgeeks.org/solid-principle-in-programming-understand-with-real-life-examples/)
