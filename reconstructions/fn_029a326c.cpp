extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
struct DualInterfaceObject;
extern "C" void fn_039883bc(DualInterfaceObject* object, unsigned flags);
extern "C" void fn_0251238c(void* object, unsigned flags);
extern "C" void fn_029a326c(void* object, unsigned flags) {
    if (object) {
        unsigned char* bytes = static_cast<unsigned char*>(object);
        fn_0378da14(bytes + 360);
        fn_0378da14(bytes + 344);
        fn_0378da14(bytes + 260);
        fn_039883bc(reinterpret_cast<DualInterfaceObject*>(bytes + 212), 2);
        fn_0251238c(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
