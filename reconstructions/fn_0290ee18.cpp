typedef int s32;

struct SwarmEscapeDie;
extern "C" void fn_0290c344(SwarmEscapeDie*);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10162150;

extern "C" void fn_0290ee18(void *object) {
    struct { const void *string; const void *vtable; } name;

    fn_0290c344((SwarmEscapeDie*)object);
    name.vtable = &data_10263910;
    name.string = &data_10162150;
    fn_030e9aa8(object, (char *)object + 0x48, &name.string);
}
