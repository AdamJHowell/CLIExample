using System;
using CLI;

namespace Sandbox
{
	class Program
	{
		static void Main( string[] args )
		{
			var e = new Entity( "The Wallman", 20, 35 );
			//var e = new Entity();
			Console.WriteLine( e.XPosition1 + " " + e.YPosition );
			e.Move( 5, -10 );
			//e.Move( "AdamRules", 10 );
			Console.WriteLine( e.XPosition1 + " " + e.YPosition );
			
			
			Console.Read();
		}
	}
}
