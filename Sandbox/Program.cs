﻿using System;
using CLI;

namespace Sandbox
{
	class Program
	{
		static void Main( string[] args )
		{
			var e = new Entity( "The Wallman", 20, 35 );
			Console.WriteLine( e.XPosition + " " + e.YPosition );
			e.Move( 5, -10 );
			Console.WriteLine( e.XPosition + " " + e.YPosition );

			Console.Read();
		}
	}
}
