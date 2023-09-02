#include <iostream>
#include <string>

// Abstract Product
class Pizza {
public:
    virtual void prepare() const = 0;
    virtual void bake() const = 0;
    virtual void cut() const = 0;
    virtual void box() const = 0;
};

// Concrete Products
class CheesePizza : public Pizza {
public:
    void prepare() const override {
        std::cout << "Preparing a cheese pizza." << std::endl;
    }

    void bake() const override {
        std::cout << "Baking the cheese pizza." << std::endl;
    }

    void cut() const override {
        std::cout << "Cutting the cheese pizza." << std::endl;
    }

    void box() const override {
        std::cout << "Boxing the cheese pizza." << std::endl;
    }
};

class PepperoniPizza : public Pizza {
public:
    void prepare() const override {
        std::cout << "Preparing a pepperoni pizza." << std::endl;
    }

    void bake() const override {
        std::cout << "Baking the pepperoni pizza." << std::endl;
    }

    void cut() const override {
        std::cout << "Cutting the pepperoni pizza." << std::endl;
    }

    void box() const override {
        std::cout << "Boxing the pepperoni pizza." << std::endl;
    }
};

// Abstract Factory
class PizzaFactory {
public:
    virtual Pizza* createPizza() const = 0;
};

// Concrete Factories
class CheesePizzaFactory : public PizzaFactory {
public:
    Pizza* createPizza() const override {
        return new CheesePizza();
    }
};

class PepperoniPizzaFactory : public PizzaFactory {
public:
    Pizza* createPizza() const override {
        return new PepperoniPizza();
    }
};

int main() {
    // Client code
    PizzaFactory* pizzaFactory = new CheesePizzaFactory();
    Pizza* pizza = pizzaFactory->createPizza(); /// Cheese Pizza

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    delete pizza;
    delete pizzaFactory;

    return 0;
}