typedef unsigned* (*Getter)(void*);

extern "C" bool fn_028c67bc(void* self, void* object) {
    return *((Getter)(*(void* const* const*)object)[9])(object) == 50331655u;
}
