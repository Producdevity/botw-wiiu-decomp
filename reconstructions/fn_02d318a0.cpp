extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
struct DualInterfaceObject;
extern "C" void fn_039883bc(DualInterfaceObject* object, unsigned flags);
extern "C" void fn_037b7d90(void* object, unsigned flags);

extern "C" void fn_02d318a0(void* object, unsigned flags) {
    if (object) {
        unsigned char* bytes = static_cast<unsigned char*>(object);
        void* handle = bytes + 0x20;
        fn_039883bc(reinterpret_cast<DualInterfaceObject*>(bytes + 0x3c), 2);
        fn_0378da14(handle);
        fn_037b7d90(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

