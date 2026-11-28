typedef unsigned char u8;

extern "C" void fn_023d7618(void*);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);

namespace {
struct Object {
    char padding_0[0x90];
    int value_90;
    u8 flag_94;
};
}

extern "C" void fn_023d8638(void *object) {
    fn_023d7618(object);
    if (((Object *) object)->value_90 != 0 || ((Object *) object)->flag_94 != 0) {
        fn_0378c734((ProcLink *) &((Object *) object)->value_90);
    }
}
