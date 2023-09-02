#include <iostream>

class Singleton {
public:
    // Function to get the instance of the Singleton class
    static Singleton& getInstance() {
        static Singleton instance; // This line creates a single instance
        return instance;
    }

    // Other public member functions
    void showMessage() {
        std::cout << "Hello from the Singleton!" << std::endl;
    }

private:
    // Private constructor to prevent direct instantiation
    Singleton() {}
    // Private copy constructor and assignment operator to prevent copying
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};

int main() {
    // Access the Singleton instance
    Singleton& singleton = Singleton::getInstance();

    // Use the Singleton
    singleton.showMessage();

    return 0;
}