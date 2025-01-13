#include <stdio.h>
#include <SDL3/SDL.h>
#define SDL_MAIN_USE_CALLBACKS
#include <SDL3/SDL_main.h>

static SDL_Renderer* renderer = NULL;
static SDL_Window* window = NULL;

char* testText = NULL;
int textIdx = 0;

SDL_AppResult SDL_AppInit(void **appstate, int argc, char **argv) {
    if (!SDL_Init(SDL_INIT_VIDEO)) return SDL_APP_FAILURE;
    if (!SDL_CreateWindowAndRenderer("Taipan!", 640, 480, SDL_WINDOW_RESIZABLE, &window, &renderer)) return SDL_APP_FAILURE;
    testText = SDL_calloc(1,256);
    SDL_StartTextInput(window);
    return SDL_APP_CONTINUE;
}
SDL_AppResult SDL_AppIterate(void *appstate) {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderDebugText(renderer, 64,64, "Hello, world!");
    SDL_RenderDebugText(renderer, 64,72, testText);

    SDL_RenderPresent(renderer);
    return SDL_APP_CONTINUE;
}
SDL_AppResult SDL_AppEvent(void *appstate, SDL_Event *event) {
    switch (event->type)
    {
    case SDL_EVENT_QUIT:
        return SDL_APP_SUCCESS;
    case SDL_EVENT_TEXT_INPUT:
        strncpy(&testText[textIdx], event->text.text, 255-textIdx);
        textIdx += strlen(event->text.text);
    default:
        return SDL_APP_CONTINUE;
    }
}
void SDL_AppQuit(void *appstate, SDL_AppResult result) {
    SDL_StopTextInput(window);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
}