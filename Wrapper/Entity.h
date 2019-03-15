//Entity.h
#pragma once
#include "ManagedObject.h"
#include "../Core/Core.h"
using namespace System;
namespace CLI
{
	public ref class Entity : public ManagedObject<Core::Entity>
	{
		public:

		Entity( String^ name, float xPos, float yPos );
		void Move( float deltaX, float deltaY );
		std::vector<std::string> * TypeAhead( std::string words, int count );
		//void TypeAhead( std::string words, int count );
		property float XPosition1
		{
			public:
			float get()
			{
				return m_Instance->GetXPosition();
			}
			private:
			void set( float value )
			{}
		}
		property float YPosition
		{
			public:
			float get()
			{
				return m_Instance->GetYPosition();
			}
			private:
			void set( float value )
			{}
		}
	};
}
