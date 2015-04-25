#include "libtcod.hpp"
#include "Engine.hpp"

Engine engine;

int main(int argc, char **argv)
{
    while ( !TCODConsole::isWindowClosed() ) {
        engine.update();
        engine.render();
        TCODConsole::flush();
    }
		
	return 0;
}

