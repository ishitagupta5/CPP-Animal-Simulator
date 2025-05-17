#ifndef ANIMALS_HPP
#define ANIMALS_HPP

#include <string>
#include <iostream>
#include <sstream>

#include "Animal.hpp"

class Dog : public Animal 
{
private:
	std::string name;
public:
	Dog(std::string name,  std::string sound, std::string eats );

	std::string speak() const;
	std::string feed() const;

	std::string special() const;
};

class Cat: public Animal 
{
private:
	std::string name;
public:
	Cat(std::string name,  std::string sound, std::string eats );


	std::string speak() const;
	std::string feed() const;

	std::string special() const ;

};

class Cow: public Animal 
{
private:
	std::string name;
public:
	Cow(std::string name,  std::string sound, std::string eats );


	std::string speak() const;
	std::string feed() const;

	std::string special() const;

};

class Spider: public Animal 
{
private:
	std::string name;
public:
	Spider(std::string name,  std::string sound, std::string eats );


	std::string speak() const;
	std::string feed() const;

	std::string special() const;

};
#endif
