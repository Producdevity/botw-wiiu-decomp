extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
extern "C" void fn_037d6a30(void*, int);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink* link);
extern "C" void fn_037b7d90(void* object, unsigned flags);

extern "C" void fn_029a4a30(void* object, unsigned flags) {
    if (object) {
        fn_037d6a30(static_cast<unsigned char*>(object) + 0x70, 2);
        fn_0378da14(static_cast<unsigned char*>(object) + 0x48);
        fn_0378da14(static_cast<unsigned char*>(object) + 0x3c);
        fn_0378c734(reinterpret_cast<ProcLink*>(static_cast<unsigned char*>(object) + 0x34));
        fn_037b7d90(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

