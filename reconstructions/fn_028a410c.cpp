struct Prefix_028a410c { unsigned char bytes[40]; };
struct Tail_028a410c { unsigned char unknown_00[4]; unsigned char handle[12]; };
struct Opaque_028a410c : Prefix_028a410c, Tail_028a410c {};
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);

extern "C" void fn_037b7d90(void* object, unsigned flags);
extern "C" void fn_028a410c(Opaque_028a410c* object, unsigned flags) {
    if (object) {
        Tail_028a410c& tail = *object;
        if (&tail) fn_0378da14(object->handle);
        fn_037b7d90(object, 0);
        if (flags & 1) fn_0308e6d0(object);
    }
}
