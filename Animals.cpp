#include "Animals.hpp"

using std::string;
using std::ostringstream;

Dog::Dog(string name, string sound, string eats)
    : Animal(sound, eats), name(name) {}

string Dog::speak() const {
    ostringstream out;
    out << '\t' << name << " says " << get_sound() << '\n';
    return out.str();
}

string Dog::feed() const {
    ostringstream out;
    out << '\t' << name << " eats " << get_eats() << '\n';
    return out.str();
}

string Dog::special() const {
    return "\tI fetch balls\n";
}

Cat::Cat(string name, string sound, string eats)
    : Animal(sound, eats), name(name) {}

string Cat::speak() const {
    ostringstream out;
    out << '\t' << name << " says " << get_sound() << '\n';
    return out.str();
}

string Cat::feed() const {
    ostringstream out;
    out << '\t' << name << " eats " << get_eats() << '\n';
    return out.str();
}

string Cat::special() const {
    return "\tI chase mice\n";
}

Cow::Cow(string name, string sound, string eats)
    : Animal(sound, eats), name(name) {}

string Cow::speak() const {
    ostringstream out;
    out << '\t' << name << " says " << get_sound() << '\n';
    return out.str();
}

string Cow::feed() const {
    ostringstream out;
    out << '\t' << name << " eats " << get_eats() << '\n';
    return out.str();
}

string Cow::special() const {
    return "\tHere's some yummy milk\n";
}

Spider::Spider(string name, string sound, string eats)
    : Animal(sound, eats), name(name) {}

string Spider::speak() const {
    ostringstream out;
    out << '\t' << name << " says " << get_sound() << '\n';
    return out.str();
}

string Spider::feed() const {
    ostringstream out;
    out << '\t' << name << " eats " << get_eats() << '\n';
    return out.str();
}

string Spider::special() const {
    return "\tI'm a web developer\n";
}
