#ifndef ENGINE
#define ENGINE

class Engine
{
public:
    // TODO: Load these from a config file
    static const int screenWidth = 120;    
    static const int screenHeight = 70;
    

    Engine();
    ~Engine();
    
    void update();
    void render();
    
private:
    
};

extern Engine engine;

#endif // ENGINE
