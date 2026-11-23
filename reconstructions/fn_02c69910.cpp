typedef unsigned* (*Getter)(void*);

extern "C" bool fn_02c69910(void* self, void* object) {
    return *((Getter)(*(void* const* const*)object)[9])(object) == 125829125u;
}
