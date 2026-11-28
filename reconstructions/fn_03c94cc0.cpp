typedef unsigned char u8;
typedef int s32;

extern "C" void fn_03c9a198(void*);
extern "C" void fn_03ca29ac(void*);

namespace {
struct Child {
    char padding_0[0x43B];
    u8 flag;
};
struct Object {
    char padding_0[0x30];
    void *first;
    Child *second;
};
}

extern "C" s32 fn_03c94cc0(void *object) {
    if (((Object *) object)->second->flag == 0) {
        fn_03c9a198(((Object *) object)->first);
        fn_03ca29ac(((Object *) object)->second);
    }
    return 0;
}
