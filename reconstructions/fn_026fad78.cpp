extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
extern "C" void fn_025c21d0(void* object, unsigned flags);

extern "C" void fn_026fad78(void* object, int flags) {
    if (object) {
        fn_0378da14(static_cast<unsigned char*>(object) + 0x2b4);
        fn_025c21d0(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

