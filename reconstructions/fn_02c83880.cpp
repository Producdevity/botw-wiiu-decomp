extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
extern "C" void fn_030eb73c(void* object, unsigned flags);

extern "C" void fn_02c83880(void* object, unsigned flags) {
    if (object) {
        unsigned char* bytes = static_cast<unsigned char*>(object);
        void* handle = bytes + 0x2c;
        fn_0378da14(handle);
        fn_0378da14(bytes + 0x20);
        fn_030eb73c(bytes + 4, 2);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

