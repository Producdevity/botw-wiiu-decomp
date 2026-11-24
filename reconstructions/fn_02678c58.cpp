extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
struct DualInterfaceObject;
extern "C" void fn_039883bc(DualInterfaceObject* object, unsigned flags);

extern "C" void fn_02678c58(void* object, unsigned flags) {
    if (object) {
        unsigned char* bytes = static_cast<unsigned char*>(object);
        fn_039883bc(reinterpret_cast<DualInterfaceObject*>(bytes + 0x1c), 2);
        fn_0378da14(object);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

