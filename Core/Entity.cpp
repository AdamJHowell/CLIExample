//Entity.cpp
#include "Entity.h"
#include <iostream>
#include <string>

namespace Core
{
	Entity::Entity( const char* name, int xPos, int yPos )
		: m_Name( name ), m_XPos( xPos ), m_YPos( yPos )
	{
		std::cout << "Created the Entity object!" << std::endl;
	}
	
	void Entity::Move( int deltaX, int deltaY )
	{
		m_XPos += deltaX;
		m_YPos += deltaY;
		std::cout << "Moved " << m_Name << " to (" << m_XPos << ", " << m_YPos << ")." << std::endl;
	}
	

	void Entity::TypeAhead( std::string words, int count )
	{
		std::vector<std::string> resultVector;// = new std::vector<std::string>;

		// Add words to the vector count number of times.
		for( int i = 0; i < count; i++ )
		{
			resultVector.push_back( words );
		}
		// Print the vector from here to verify it works.
		// This is interim code until I can properly return the vector.
		for( size_t i = 0; i < resultVector.size(); i++ )
		{
			std::cout << resultVector.at( i ) << std::endl;
		}
		stuff = resultVector;
	}
}
