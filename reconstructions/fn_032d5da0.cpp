typedef void* (*Method)(void*);

extern "C" void fn_033053bc(void* entry, void* value);
extern "C" void fn_030ea2cc(void* object);

extern "C" void fn_032d5da0(void* object) {
    void* owner = *(void**)object;
    void* entry = (*(Method*)((char*)*(void**)((char*)owner + 0xE8) + 0x414))(owner);
    if (entry != 0) {
        fn_033053bc(entry, *(void**)((char*)object + 0x10));
    }
    fn_030ea2cc(object);
}
