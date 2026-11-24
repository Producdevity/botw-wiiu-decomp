extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);

extern "C" void fn_0331d6b4(void* object, int flags) {
    if (object) {
        fn_0378da14(static_cast<unsigned char*>(object) + 0x10);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

