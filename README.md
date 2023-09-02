# Singleton Method

The Singleton Pattern is a creational design pattern that ensures a class has only one instance and provides a global point of access to that instance. It is often used when exactly one object is needed to coordinate actions across the system.



In this example:

We create a Singleton class with a private constructor to prevent direct instantiation of the class.

We provide a public static member function getInstance() that returns the single instance of the Singleton class. This function uses a static variable instance to hold the single instance of the class. The instance is created the first time getInstance() is called, and subsequent calls return the same instance.

We also delete the copy constructor and assignment operator to prevent copying of the Singleton instance.

In the main() function, we access the Singleton instance using Singleton::getInstance().

We call the showMessage() function on the Singleton instance to demonstrate its usage.

The Singleton Pattern ensures that there's only one instance of the Singleton class throughout the program's lifetime. It's useful in situations where you want to maintain a single point of control or configuration, such as managing a configuration settings object or a resource manager.
