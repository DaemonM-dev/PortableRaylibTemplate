#include <raylib.h>

class Game{
    public:

    void Run();

    private:

    void Initialize();
    void Update(const float& dt);
    void Draw();
    void FreeResources();
};