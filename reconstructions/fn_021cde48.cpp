extern "C" void fn_03195b04(void*);

typedef void* (*Getter)(void*);

extern "C" void fn_021cde48(void** owner) {
    void* actor = *owner;
    void* state = ((Getter)(*(void**)((char*)*(void**)((char*)actor + 232) + 1052)))(actor);
    if (state != 0) {
        *(int*)((char*)state + 256) = 512;
    }
    actor = *owner;
    void* controller = ((Getter)(*(void**)((char*)*(void**)((char*)actor + 232) + 780)))(actor);
    if (controller != 0) {
        fn_03195b04(controller);
    }
}
