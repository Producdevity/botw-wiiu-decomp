extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
extern "C" void fn_026a7f3c(void* object, unsigned flags);

extern "C" void fn_0264d780(void* object, unsigned flags) {
    if (object) {
        fn_0378da14(static_cast<unsigned char*>(object) + 0x90);
        fn_026a7f3c(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

