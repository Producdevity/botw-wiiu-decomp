extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
extern "C" void fn_023ba32c(void* object, unsigned flags);

extern "C" void fn_02272c00(void* object, unsigned flags) {
    if (object) {
        fn_0378da14(static_cast<unsigned char*>(object) + 0x30);
        fn_023ba32c(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

