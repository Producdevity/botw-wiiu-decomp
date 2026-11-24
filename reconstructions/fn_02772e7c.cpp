extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
extern "C" void fn_0251090c(void* object, unsigned flags);

extern "C" void fn_02772e7c(void* object, unsigned flags) {
    if (object) {
        fn_0378da14(static_cast<unsigned char*>(object) + 0x90);
        fn_0378da14(static_cast<unsigned char*>(object) + 0x74);
        fn_0251090c(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

