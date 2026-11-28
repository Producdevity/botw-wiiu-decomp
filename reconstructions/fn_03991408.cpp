extern "C" void fn_0308e6d0(void *);
struct DualInterfaceObject;
extern "C" void fn_039883bc(DualInterfaceObject *, unsigned);
extern "C" void fn_03a22264(void*, int);

namespace {
struct Object {
    char padding_0[0x94];
    char member_94[1];
    char padding_95[0x1F];
    char member_b4[1];
};
}

extern "C" void fn_03991408(void *object, int flags) {
    if (object != 0) {
        fn_03a22264(static_cast<Object *>(object)->member_b4, 2);
        fn_039883bc(reinterpret_cast<DualInterfaceObject *>(static_cast<Object *>(object)->member_94), 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
