extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink* link);
extern "C" void fn_030eb73c(void* object, unsigned flags);

extern "C" void fn_0242f218(void* object, unsigned flags) {
    if (object) {
        unsigned char* bytes = static_cast<unsigned char*>(object);
        void* handle = bytes + 0x18;
        fn_0378da14(handle);
        fn_0378c734(reinterpret_cast<ProcLink*>(bytes + 0x10));
        fn_030eb73c(bytes + 4, 2);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

