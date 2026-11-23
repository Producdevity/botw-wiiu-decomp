typedef void (*Method)(void*);

extern "C" void fn_0307a248(int value);

extern "C" void fn_0216fb60(void* object) {
    fn_0307a248(**(int**)((char*)object + 0x10));
    void* owner = *(void**)object;
    (*(Method*)((char*)*(void**)((char*)owner + 0xE8) + 0x35C))(owner);
}
