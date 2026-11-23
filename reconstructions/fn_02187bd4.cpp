typedef unsigned* (*Getter)(void*);

extern "C" bool fn_02187bd4(void* self, void* object) {
    return *((Getter)(*(void* const* const*)object)[11])(object) == 134217885u;
}
