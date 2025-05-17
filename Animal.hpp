#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include <sstream>

class Animal
{
private:
	std::string sound;
	std::string eats;
public:
	Animal( std::string sound, std::string eats );

	std::string get_sound() const;
	std::string get_eats() const;

	virtual std::string speak() const = 0;
	virtual std::string feed() const = 0;

	virtual std::string special() const = 0;

	virtual ~Animal();
};

#endif
