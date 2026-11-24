extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
extern "C" void fn_0277e850(void* object, unsigned flags);

extern "C" void fn_0294a9b4(void* object, unsigned flags) {
    if (object) {
        unsigned char* bytes = static_cast<unsigned char*>(object);
        void* handle = bytes + 0x8c;
        fn_0378da14(handle);
        fn_0378da14(bytes + 0x74);
        fn_0277e850(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

