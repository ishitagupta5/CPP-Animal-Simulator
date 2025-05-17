#include "Animals.hpp"
#include "Animal.hpp"

#include <fstream>
#include <string>

using std::string;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::getline;

const int MAX_ANIMALS = 100;

int main( int argc, char* argv[] )
{
	if ( argc != 3 )
	{
		std::cerr << "Usage: homeowrk9 <input> <output>" << endl;
		exit(1);
	}

	ifstream in(argv[1]);

	string type, name, sound, eats;

	Animal* animals[MAX_ANIMALS];
	int animal_count = 0;
	
	in >> type;
	while( in )
	{
		in >> name >> sound;
		in.ignore();
		getline(in, eats);
		if ( type == "dog" )
		{
			Dog *dog = new Dog(name, sound, eats );
			animals[animal_count] = dog;
			animal_count++;
		}
		else if ( type == "cat" )
		{
			Cat *cat = new Cat(name, sound, eats );
			animals[animal_count] = cat;
			animal_count++;
		}
		else if ( type == "cow" )
		{
			Cow *cow = new Cow(name, sound, eats );
			animals[animal_count] = cow;
			animal_count++;
		}
		else if ( type == "spider" )
		{
			Spider *spider = new Spider(name, sound, eats );
			animals[animal_count] = spider;
			animal_count++;
		}
		else
		{
			std::cerr << "Yikes! What is this? " << type << endl;
		}

		in >> type;
	}

	in.close();
	ofstream out(argv[2]);

	out << "There are " << animal_count << " animals" << endl;
	for ( int i=0; i<animal_count; i++ )
	{
		if (typeid(*animals[i]) == typeid(Dog) && dynamic_cast<Animal*>(animals[i]) )
			out << "I am a Dog and my parent is Animal" << endl;
		else if (typeid(*animals[i]) == typeid(Cat)  && dynamic_cast<Animal*>(animals[i]) )
			out << "I am a Cat and my parent is Animal" << endl;
		else if (typeid(*animals[i]) == typeid(Cow)  && dynamic_cast<Animal*>(animals[i]) )
			out << "I am a Cow and my parent is Animal" << endl;
		else if (typeid(*animals[i]) == typeid(Spider)  && dynamic_cast<Animal*>(animals[i]) )
			out << "I am a Spider and my parent is Animal" << endl;
		out << animals[i]->speak();
		out << animals[i]->feed();
		out << animals[i]->special();
	}
	out.close();
	for ( int i=0; i<animal_count; i++ )
		delete ( animals[i] );

	return 0;
}
