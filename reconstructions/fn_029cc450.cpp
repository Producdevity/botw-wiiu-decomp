typedef void (*Method)(void*);

extern "C" void fn_0383e968(void* owner, int value, int a, int b);

extern "C" void fn_029cc450(void* object) {
    if (**(unsigned char**)((char*)object + 0x20) != 0) {
        (*(Method*)((char*)*(void**)((char*)object + 0x1C) + 0x1C))((char*)object + 0x18);
        fn_0383e968(*(void**)object, *(int*)((char*)object + 0x18), 2, 0);
    }
}
