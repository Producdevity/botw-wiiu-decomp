extern "C" void fn_030ea2cc(void* object);
extern "C" int fn_0339a0d0(void* owner);

extern "C" void fn_022c8c68(void* object) {
    if (fn_0339a0d0(*(void**)object) != 0) {
        *((unsigned char*)object + 0xB) |= 4;
        fn_030ea2cc(object);
    }
}
