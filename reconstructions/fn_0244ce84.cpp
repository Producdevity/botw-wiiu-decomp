extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
extern "C" void fn_030eb73c(void* object, unsigned flags);

extern "C" void fn_0244ce84(void* object, unsigned flags) {
    if (object) {
        fn_0378da14(static_cast<unsigned char*>(object) + 0x40);
        fn_030eb73c(static_cast<unsigned char*>(object) + 4, 2);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

