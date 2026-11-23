typedef void (*Method)(void*);

extern "C" void fn_02105768(void* object) {
    void* owner = *(void**)object;
    (*(Method*)((char*)*(void**)((char*)owner + 0xE8) + 0x35C))(owner);
    *((signed char*)object + 0x38) = 1;
}
