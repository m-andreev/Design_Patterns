#include <iostream>

// Abstract Product Classes
class Button {
public:
    virtual void render() = 0;
};

class Checkbox {
public:
    virtual void render() = 0;
};

class TextField {
public:
    virtual void render() = 0;
};

// Abstract Factory Interface
class GUIFactory {
public:
    virtual Button* createButton() = 0;
    virtual Checkbox* createCheckbox() = 0;
    virtual TextField* createTextField() = 0;
};

// Concrete Product Classes for Windows Theme
class WindowsButton : public Button {
public:
    void render() override {
        std::cout << "Render Windows button\n";
    }
};

class WindowsCheckbox : public Checkbox {
public:
    void render() override {
        std::cout << "Render Windows checkbox\n";
    }
};

class WindowsTextField : public TextField {
public:
    void render() override {
        std::cout << "Render Windows text field\n";
    }
};

// Concrete Factory for Windows Theme
class WindowsFactory : public GUIFactory {
public:
    Button* createButton() override {
        return new WindowsButton();
    }

    Checkbox* createCheckbox() override {
        return new WindowsCheckbox();
    }

    TextField* createTextField() override {
        return new WindowsTextField();
    }
};

// Concrete Product Classes for macOS Theme
class MacOSButton : public Button {
public:
    void render() override {
        std::cout << "Render macOS button\n";
    }
};

class MacOSCheckbox : public Checkbox {
public:
    void render() override {
        std::cout << "Render macOS checkbox\n";
    }
};

class MacOSTextField : public TextField {
public:
    void render() override {
        std::cout << "Render macOS text field\n";
    }
};

// Concrete Factory for macOS Theme
class MacOSFactory : public GUIFactory {
public:
    Button* createButton() override {
        return new MacOSButton();
    }

    Checkbox* createCheckbox() override {
        return new MacOSCheckbox();
    }

    TextField* createTextField() override {
        return new MacOSTextField();
    }
};

// Function to render GUI elements
void renderUI(GUIFactory* factory) {
    Button* button = factory->createButton();
    Checkbox* checkbox = factory->createCheckbox();
    TextField* textField = factory->createTextField();

    // Render GUI elements
    button->render();
    checkbox->render();
    textField->render();

    delete button;
    delete checkbox;
    delete textField;
}

int main() {
    // Create GUI elements for the Windows theme
    GUIFactory* windowsFactory = new WindowsFactory();
    std::cout << "Rendering Windows Theme:\n";
    renderUI(windowsFactory);

    // Create GUI elements for the macOS theme
    GUIFactory* macosFactory = new MacOSFactory();
    std::cout << "\nRendering macOS Theme:\n";
    renderUI(macosFactory);

    delete windowsFactory;
    delete macosFactory;

    return 0;
}
