extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);

extern "C" void fn_020f0a74(void* object, unsigned flags) {
    if (object) {
        unsigned char* bytes = static_cast<unsigned char*>(object);
        void* handle = bytes + 0x10;
        fn_0378da14(bytes + 0x1c);
        fn_0378da14(handle);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

