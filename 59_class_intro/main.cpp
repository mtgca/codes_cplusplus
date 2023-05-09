#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    // Constructor: Initialize
    Animal(string name, string species, int age) {
        cout << "Constructing an Animal object"<<endl;
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
    void makeSound() {
        cout << "The " << species << " makes a sound.\n";
    }

    void sleep() {
        cout << name << " the " << species << " is sleeping.\n";
    }

private:
    string name;
    string species;
    int age;
};

int main() {
    // Create an instance of the Animal class
    Animal myAnimal("Leo", "Lion", 5);

    // Call methods on the instance
    cout << myAnimal.getName() << " is a " << myAnimal.getSpecies() << " who is " << myAnimal.getAge() << " years old.\n";
    myAnimal.makeSound();
    myAnimal.sleep();
    
    //cout << myAnimal.name;
    return 0;
}

