typedef void (*Action)(void*);

extern "C" bool fn_037e59c4(void* p) {
    void* const* vtable = *(void* const* const*)((char*)p + 0);
    ((Action)vtable[21])(p);
    return true;
}
