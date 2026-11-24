extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);

extern "C" void fn_02823f08(void* object, unsigned flags) {
    if (object) {
        unsigned char* bytes = static_cast<unsigned char*>(object);
        void* second = bytes + 16;
        fn_0378da14(bytes + 28);
        fn_0378da14(second);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
