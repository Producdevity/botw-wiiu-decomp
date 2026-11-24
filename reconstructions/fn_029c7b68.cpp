extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);

extern "C" void fn_029c7b68(void* object, unsigned flags) {
    if (object) {
        fn_0378da14(static_cast<unsigned char*>(object) + 0x24);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
