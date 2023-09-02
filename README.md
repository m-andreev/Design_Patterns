# Design_Patterns
Design Patterns Practice

Factory Method

The Factory Pattern is a creational design pattern that provides an interface for creating objects in a super class, but it allows subclasses to alter the type of objects that will be created. In other words, it abstracts the process of object creation and allows you to create objects without specifying the exact class of object that will be created until runtime.

The Factory Pattern is particularly useful in scenarios where you want to encapsulate object creation to promote loose coupling between client code and the classes being instantiated. It's commonly used when you have a family of related classes and you want to abstract the instantiation process.



In this example:

We define an abstract Pizza class with methods for preparing, baking, cutting, and boxing a pizza.

We create two concrete pizza classes, CheesePizza and PepperoniPizza, which inherit from Pizza.

We define an abstract PizzaFactory class with a method createPizza(). Concrete pizza factories, such as CheesePizzaFactory and PepperoniPizzaFactory, inherit from this class and implement the createPizza() method to create specific pizza types.

In the main() function, we demonstrate how the Factory Pattern works. We choose a pizza factory (in this case, CheesePizzaFactory) and use it to create a pizza object. The client code doesn't need to know the exact pizza class being created; it relies on the factory to provide the appropriate pizza type.

This pattern decouples the client code from the concrete pizza classes, making it easy to add new pizza types without modifying existing code.
