//Entity.h
#pragma once

#include <vector>

namespace Core
{
	class Entity
	{
		public:
		const char * m_Name;
		char * m_word;

		private:
		int m_XPos;
		int m_YPos;
		std::vector<std::string> stuff;

		public:
		Entity( const char * name, int xPos, int yPos );

		void Move( int deltaX, int deltaY );
		void TypeAhead( std::string words, int count );
		inline int GetXPosition() const { return m_XPos; };
		inline int GetYPosition() const { return m_YPos; };
		inline std::vector<std::string> getVector() const { return stuff; };
	};
}
