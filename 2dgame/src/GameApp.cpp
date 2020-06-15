#include <tbEngine.h>

class GameApp : public tbEngine::Application {

public:
	GameApp() {

	}
	~GameApp() {

	}
};

int main() {
	GameApp* gameApp = new GameApp();
	gameApp->run();
	delete gameApp;

}
