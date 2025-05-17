#include "Animal.hpp"

using std::string;
using std::ostringstream;
using std::endl;

Animal::Animal( string sound, string eats ) : sound(sound), eats(eats) {}

Animal::~Animal() {}

string Animal::get_sound() const { return sound; }
string Animal::get_eats() const { return eats; }

