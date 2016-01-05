// example modified from http://lazyfoo.net/SDL_tutorials/lesson01/index2.php

#include <SDL/SDL.h>
int main() {
	SDL_Surface *bitmap = NULL, *screen = NULL;

	// init SDL and screen
	SDL_Init(SDL_INIT_EVERYTHING);
	screen = SDL_SetVideoMode(640, 480, 32, SDL_SWSURFACE);

	// load the bitmap
	bitmap = SDL_LoadBMP("mushroom.bmp");
	// blit bitmap to screen
	SDL_BlitSurface(bitmap, NULL, screen, NULL);
	// update screen
	SDL_Flip(screen);

	// wait 2 seconds
	SDL_Delay(2000);

	// clean up
	SDL_FreeSurface(bitmap);
	SDL_Quit();
	
   return 0;
}
