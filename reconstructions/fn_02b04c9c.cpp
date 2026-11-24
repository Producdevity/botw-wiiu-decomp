extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);

extern "C" void fn_02b04c9c(void* object, unsigned flags) {
    if (object) {
        unsigned char* bytes = static_cast<unsigned char*>(object);
        void* handle = bytes + 0x48;
        fn_0378da14(handle);
        fn_0378da14(object);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

