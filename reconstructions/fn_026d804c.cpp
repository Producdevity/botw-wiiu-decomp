typedef int s32;

struct InWaterSelect;
extern "C" void fn_026d8584(InWaterSelect*);
extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_10114a80;

extern "C" void fn_026d804c(void *object) {
    struct { const void *string; const void *vtable; } name;

    fn_026d8584((InWaterSelect*)object);
    name.vtable = &data_10263910;
    name.string = &data_10114a80;
    fn_030ea23c(object, (char *)object + 0x30, &name.string);
}
