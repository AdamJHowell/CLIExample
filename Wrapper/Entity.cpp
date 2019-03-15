//Entity.cpp
#include "Entity.h"
namespace CLI
{
	Entity::Entity( String^ name, float xPos, float yPos )
		: ManagedObject( new Core::Entity( string_to_char_array( name ), xPos, yPos ) )
	{
		Console::WriteLine( "Creating a new Entity-wrapper object!" );
	}
	

	void Entity::Move( float deltaX, float deltaY )
	{
		Console::WriteLine( "The Move method from the Wrapper was called!" );
		m_Instance->Move( deltaX, deltaY );
	}


	std::vector<std::string> * Entity::TypeAhead( std::string words, int count )
	{
		Console::WriteLine( "The Wrapper is trying to call TypeAhead()!" );
		return m_Instance->TypeAhead( words, count );
	}
}
