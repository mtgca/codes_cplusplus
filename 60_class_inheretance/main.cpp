#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    // Constructor
    Animal(string name, string species, int age) {
        cout << "Constructing an Animal object whose name is " << name <<endl;
        this->name = name;
        this->species = species;
        this->age = age;
    }

    // Getter methods
    string getName() {
        return name;
    }

    string getSpecies() {
        return species;
    }

    int getAge() {
        return age;
    }

    // Setter methods
    void setName(string name) {
        this->name = name;
    }

    void setSpecies(string species) {
        this->species = species;
    }

    void setAge(int age) {
        this->age = age;
    }

    // Other methods
    virtual void makeSound() {
        cout << "The " << species << " makes a sound.\n";
    }

    virtual void sleep() {
        cout << name << " the " << species << " is sleeping.\n";
    }

private:
    string name;
    string species;
    int age;
};

class Dog : public Animal {
public:
    Dog(string name, int age) : Animal(name, "Dog", age) {
        cout << "\tConstructing a Dog object whose name is "<< name <<endl;
    }

    void makeSound() {
        cout << getName() << " barks.\n";
    }
};

class Cat : public Animal {
public:
    Cat(string name, int age) : Animal(name, "Cat", age) {
        cout << "Constructing a Cat object"<<endl;
    }

    void makeSound() {
        cout << getName() << " meows.\n";
    }
};

int main() {
    // Create instances of Animal, Dog, and Cat classes
    Animal myAnimal("Leo", "Lion", 5);
    Dog myDog("Buddy", 3);
    Cat myCat("Whiskers", 2);

    // Call methods on the instances
    cout << myAnimal.getName() << " is a " << myAnimal.getSpecies() << " who is " << myAnimal.getAge() << " years old.\n";
    myAnimal.makeSound();
    myAnimal.sleep();

    cout << myDog.getName() << " is a " << myDog.getSpecies() << " who is " << myDog.getAge() << " years old.\n";
    myDog.makeSound();
    myDog.sleep();

    cout << myCat.getName() << " is a " << myCat.getSpecies() << " who is " << myCat.getAge() << " years old.\n";
    myCat.makeSound();
    myCat.sleep();

    return 0;
}

