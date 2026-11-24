extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink* link);

extern "C" void fn_031bc274(void* object, int flags) {
    if (object) {
        unsigned char* bytes = static_cast<unsigned char*>(object);
        fn_0378c734(reinterpret_cast<ProcLink*>(bytes + 0xc));
        fn_0378da14(object);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

