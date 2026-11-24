extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink* link);
extern "C" void fn_037b7d90(void* object, unsigned flags);

extern "C" void fn_0252dfa4(void* object, unsigned flags) {
    if (object) {
        unsigned char* bytes = static_cast<unsigned char*>(object);
        void* handle = bytes + 0x54;
        fn_0378da14(handle);
        fn_0378c734(reinterpret_cast<ProcLink*>(bytes + 0x4c));
        fn_037b7d90(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

