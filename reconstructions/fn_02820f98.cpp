typedef int s32;

struct EnemyDefaultReaction;
extern "C" void fn_025a1c34(EnemyDefaultReaction*);
extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1013ec98;

extern "C" void fn_02820f98(void *object) {
    struct { const void *string; const void *vtable; } name;

    fn_025a1c34((EnemyDefaultReaction*)object);
    name.vtable = &data_10263910;
    name.string = &data_1013ec98;
    fn_030ea23c(object, (char *)object + 0x3C, &name.string);
}
