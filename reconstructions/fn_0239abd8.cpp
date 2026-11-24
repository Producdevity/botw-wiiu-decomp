extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
extern "C" void fn_0239a158(void* object, unsigned flags);

extern "C" void fn_0239abd8(void* object, unsigned flags) {
    if (object) {
        fn_0378da14(static_cast<unsigned char*>(object) + 0x34);
        fn_0378da14(static_cast<unsigned char*>(object) + 0x18);
        fn_0239a158(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

