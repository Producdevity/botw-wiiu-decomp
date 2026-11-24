extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
extern "C" void fn_02862dd4(void* object, unsigned flags);

extern "C" void fn_02870980(void* object, unsigned flags) {
    if (object) {
        fn_0378da14(static_cast<unsigned char*>(object) + 0x2c);
        fn_02862dd4(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

