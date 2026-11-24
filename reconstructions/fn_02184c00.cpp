extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
struct Opaque_021866a8;
extern "C" void fn_021866a8(Opaque_021866a8* object, unsigned flags);

extern "C" void fn_02184c00(void* object, unsigned flags) {
    if (object) {
        fn_0378da14(static_cast<unsigned char*>(object) + 0xa4);
        fn_021866a8(static_cast<Opaque_021866a8*>(object), 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

