typedef unsigned* (*Getter)(void*);

extern "C" bool fn_02186244(void* self, void* object) {
    return *((Getter)(*(void* const* const*)object)[11])(object) == 134217886u;
}
