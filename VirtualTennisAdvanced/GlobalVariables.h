#pragma once
 
namespace Globals
{
    using namespace System;
    public ref class GlobalVariables
    {
		public: 
				//Which direction the ball has when it broke the hor or the ver Law.
				static String ^horDirection, ^verDirection;
				static String ^timer;
				static bool multiplayer; //gamemode status
    };
}