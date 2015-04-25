#include "libtcod.hpp"
#include "Engine.hpp"

Engine::Engine()
{
    TCODConsole::setCustomFont("data/fonts/terminal.png");
    TCODConsole::initRoot(screenWidth,screenHeight, "Epsilon Station", false);
}

Engine::~Engine()
{
}

void Engine::render()
{
    TCODConsole::root->clear();
}

void Engine::update()
{
    TCODSystem::checkForEvent(TCOD_EVENT_KEY_PRESS, NULL, NULL);
    
}
