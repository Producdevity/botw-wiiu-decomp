struct Prefix_0235c71c { unsigned char unknown_00[24]; const void* vtable; unsigned char unknown_1c[32]; };
struct Tail_0235c71c { unsigned char unknown_00[24]; unsigned char handle[12]; };
struct Opaque_0235c71c : Prefix_0235c71c, Tail_0235c71c {};
extern "C" const unsigned char data_1008e724[];
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);

extern "C" void fn_020de238(void* object, unsigned flags);
extern "C" void fn_0235c71c(Opaque_0235c71c* object, unsigned flags) {
    if (object) {
        object->vtable = data_1008e724;
        Tail_0235c71c& tail = *object;
        if (&tail) fn_0378da14(object->handle);
        fn_020de238(object, 0);
        if (flags & 1) fn_0308e6d0(object);
    }
}
