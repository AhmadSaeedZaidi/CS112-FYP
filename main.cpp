#include <iostream>
#include "functions.cpp"


#include<SFML\Graphics.hpp>
#include<Windows.h>
#include"Functions.cpp"

using namespace std;
using namespace sf;

<<<<<<< HEAD

int main(){
    bombCheck C;
    C.gameController();
=======
void Pause(bool game_pause, RenderWindow *window, Game *play, Event event) {
	while (game_pause) {
		window->clear();
		play->Print(window);
		window->display();
		if (event.type == Event::Closed) {
			window->close();
		}
		if (Keyboard::isKeyPressed(Keyboard::P)) {
			game_pause = false;
			return;
		}
	}
>>>>>>> 95e81271b70a824e17ccc8ddc464153046bec1dd
}

int main() {
	RenderWindow window(VideoMode(340, 340), "BOMBBRUSHER™");
	Event event;

	Game *play = new Game;

	while (window.isOpen()) {
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
			window.clear();
				play->gamecontroller(&window);
				if (play->gameRunner == false) {
					Pause(true, &window, play, event);
					delete play;
					play = new Game;
					play->gameRunner = true;
				}
			window.display();
		}
	}
}