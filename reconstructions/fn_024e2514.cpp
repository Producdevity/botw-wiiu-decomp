typedef int s32;

struct AppearFromTarget;
extern "C" void fn_024e1284(AppearFromTarget*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100cbd7c;

extern "C" void fn_024e2514(void *object) {
    struct { const void *string; const void *vtable; } name;

    fn_024e1284((AppearFromTarget*)object);
    name.vtable = &data_10263910;
    name.string = &data_100cbd7c;
    fn_030e9be0(object, (char *)object + 0x50, &name.string);
}
