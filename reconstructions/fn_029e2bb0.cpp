struct Prefix_029e2bb0 { unsigned char bytes[28]; };
struct Tail_029e2bb0 { unsigned char unknown_00[16]; unsigned char handle_a[12]; unsigned char handle_b[12]; };
struct Opaque_029e2bb0 : Prefix_029e2bb0, Tail_029e2bb0 {};
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
extern "C" void fn_029e2bb0(Opaque_029e2bb0* object, unsigned flags) {
    if (object) {
        if (static_cast<Tail_029e2bb0*>(object)) {
            fn_0378da14(object->handle_b);
            fn_0378da14(object->handle_a);
        }
        if (flags & 1) fn_0308e6d0(object);
    }
}
