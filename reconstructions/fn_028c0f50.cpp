typedef int s32;

struct EnemyDefaultReaction;
extern "C" void fn_025a1c34(EnemyDefaultReaction*);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_101576d8;

extern "C" void fn_028c0f50(void *object) {
    struct { const void *string; const void *vtable; } name;

    fn_025a1c34((EnemyDefaultReaction*)object);
    name.vtable = &data_10263910;
    name.string = &data_101576d8;
    fn_030e9d18(object, (char *)object + 0x3C, &name.string);
}
