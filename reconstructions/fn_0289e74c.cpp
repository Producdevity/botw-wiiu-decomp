extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
extern "C" void fn_028a6850(void* object, unsigned flags);

extern "C" void fn_0289e74c(void* object, unsigned flags) {
    if (object) {
        fn_0378da14(static_cast<unsigned char*>(object) + 0xdc);
        fn_028a6850(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

