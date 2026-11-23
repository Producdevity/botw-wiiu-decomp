typedef void (*Method)(void*);

extern "C" void fn_029c6054(void* object);

extern "C" void fn_029c628c(void* object) {
    if (**(unsigned char**)((char*)object + 0x1C) != 0) {
        (*(Method*)((char*)*(void**)((char*)object + 0x10) + 0x74))(object);
        fn_029c6054(object);
    }
}
