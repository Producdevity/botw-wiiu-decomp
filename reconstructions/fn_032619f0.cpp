extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
struct DualInterfaceObject;
extern "C" void fn_039883bc(DualInterfaceObject* object, unsigned flags);
extern "C" void fn_030eb73c(void* object, unsigned flags);

extern "C" void fn_032619f0(void* object, unsigned flags) {
    if (object) {
        unsigned char* bytes = static_cast<unsigned char*>(object);
        void* handle = bytes + 28;
        fn_039883bc(reinterpret_cast<DualInterfaceObject*>(bytes + 56), 2);
        fn_0378da14(handle);
        fn_030eb73c(bytes + 4, 2);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
