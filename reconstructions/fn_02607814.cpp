typedef int s32;

struct EscapeFromTargetFront;
extern "C" void fn_02607194(EscapeFromTargetFront*);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100f5724;

extern "C" void fn_02607814(void *object) {
    struct { const void *string; const void *vtable; } name;

    fn_02607194((EscapeFromTargetFront*)object);
    name.vtable = &data_10263910;
    name.string = &data_100f5724;
    fn_030e9b44(object, (char *)object + 0x34, &name.string);
}
