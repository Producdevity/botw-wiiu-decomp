struct Prefix_02711e70 { unsigned char bytes[748]; };
struct Tail_02711e70 { unsigned char unknown_00[4]; unsigned char handle[12]; };
struct Opaque_02711e70 : Prefix_02711e70, Tail_02711e70 {};
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);

extern "C" void fn_026fad78(void* object, int flags);
extern "C" void fn_02711e70(Opaque_02711e70* object, unsigned flags) {
    if (object) {
        Tail_02711e70& tail = *object;
        if (&tail) fn_0378da14(object->handle);
        fn_026fad78(object, 0);
        if (flags & 1) fn_0308e6d0(object);
    }
}
