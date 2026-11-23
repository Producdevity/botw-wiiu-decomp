typedef void* (*Getter)(void*);

extern "C" void fn_032fdfbc(void* object, int flag);

extern "C" void fn_0227ff40(void* self) {
    void* object = *(void**)self;
    void* const* vtable = *(void* const* const*)((char*)object + 232);
    void* result = ((Getter)vtable[263])(object);
    if (result)
        fn_032fdfbc((char*)result + 8, 0);
}
