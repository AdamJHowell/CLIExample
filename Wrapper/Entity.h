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

		Entity( String^ name, int xPos, int yPos );


		void Move( int deltaX, int deltaY );


		void TypeAhead( std::string words, int count );


		property int XPosition1
		{
			public:
			int get()
			{
				return m_Instance->GetXPosition();
			}
			private:
			void set( int value )
			{}
		}


		property int YPosition
		{
			public:
			int get()
			{
				return m_Instance->GetYPosition();
			}
			private:
			void set( int value )
			{}
		}


		property std::vector<std::string> GetVector
		{
			public:
			std::vector<std::string> get()
			{
				return m_Instance->getVector();
			}
			private:
			void set( std::vector<std::string> value )
			{}
		}
	};
}
