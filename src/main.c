#include <stdio.h>
#include <stdint.h>
#include <SDL/SDL.h>

int main(int argc, char* argv[])
{
    int done = 0;
    int step = 0;
    SDL_Surface *tmp, *screen;
    
    SDL_Init( SDL_INIT_VIDEO );

    SDL_ShowCursor(0);
    screen = SDL_SetVideoMode(320, 240, 16, SDL_HWSURFACE);
    tmp = SDL_LoadBMP("assets/bg.bmp");

    while(!done)
    {
        Uint8 *keystate = SDL_GetKeyState(NULL);
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
                case SDL_KEYDOWN:
                switch(event.key.keysym.sym)
                {
                    case SDLK_RETURN:
                    // Just pressed down Start
                    break;
                    case SDLK_UP:
                    	step = 1;
                    break;
                    case SDLK_DOWN:
                    	if(step == 3){
                    		done = 1;
                    	} else {
                    		step = 0;
                    	}
                    break;
                    case SDLK_LEFT:
						if(step == 2) {
							step++;
						} else {
							step = 0;
						}
                    break;
                    case SDLK_RIGHT:
						if(step == 1){
							step++;
						} else {
							step = 0;
						}
                    break;
                }
                break;
                case SDL_KEYUP:
                switch(event.key.keysym.sym)
                {
                    case SDLK_RETURN:
                    // Just released Start
                    break;
                }
                break;
                case SDL_QUIT:
                {
                    //done = 1;
                    break;
                }
            }
        }
        
        if (keystate[SDLK_LCTRL])
        {
            // A is Pressed
        }
        
        SDL_BlitSurface(tmp, NULL, screen, NULL);
        SDL_Flip(screen);
    }
    SDL_FreeSurface(tmp);
    SDL_Quit();
}
