extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
extern "C" void fn_0277e850(void* object, unsigned flags);

extern "C" void fn_02709550(void* object, unsigned flags) {
    if (object) {
        fn_0378da14(static_cast<unsigned char*>(object) + 0xb0);
        fn_0378da14(static_cast<unsigned char*>(object) + 0xa4);
        fn_0378da14(static_cast<unsigned char*>(object) + 0x98);
        fn_0378da14(static_cast<unsigned char*>(object) + 0x8c);
        fn_0277e850(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

