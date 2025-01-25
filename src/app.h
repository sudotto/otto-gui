#pragma once

#include <iostream>

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>

///////////////////
// APP STRUCTURE
///////////////////

typedef struct {
	std::string title; 
	SDL_Surface icon;

	SDL_Window* win;
	SDL_Renderer* rend;

} App;
