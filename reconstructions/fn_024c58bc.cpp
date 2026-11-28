typedef int s32;

struct EnemyDefaultReaction;
extern "C" void fn_025a1c34(EnemyDefaultReaction*);
extern "C" void fn_030ea284(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_100c822c;

extern "C" void fn_024c58bc(void *object) {
    struct { const void *string; const void *vtable; } name;

    fn_025a1c34((EnemyDefaultReaction*)object);
    name.vtable = &data_10263910;
    name.string = &data_100c822c;
    fn_030ea284(object, (char *)object + 0x3C, &name.string);
}
