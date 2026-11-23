typedef void (*Method)(void*);

extern "C" void fn_029c6054(void* object);

extern "C" void fn_029c6184(void* object) {
    if (**(unsigned char**)((char*)object + 0x18) != 0) {
        (*(Method*)((char*)*(void**)((char*)object + 0x10) + 0x74))(object);
        fn_029c6054(object);
    }
}
