typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0290c340(int);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);

namespace {
struct Object {
    char padding_0[0x50];
    int value_50;
    u8 flag_54;
};
}

extern "C" void fn_0290edc8(void *object) {
    if (((Object *) object)->value_50 != 0 || ((Object *) object)->flag_54 != 0) {
        fn_0378c734((ProcLink *) &((Object *) object)->value_50);
    }
    fn_0290c340((s32) object);
}
