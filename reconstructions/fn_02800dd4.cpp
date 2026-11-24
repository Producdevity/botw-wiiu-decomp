extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
extern "C" void fn_0280195c(void* object, unsigned flags);

extern "C" void fn_02800dd4(void* object, unsigned flags) {
    if (object) {
        fn_0378da14(static_cast<unsigned char*>(object) + 0xd4);
        fn_0280195c(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

