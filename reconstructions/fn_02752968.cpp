extern "C" void fn_025e83d8(void *);
extern "C" void fn_0294f828(void*, void*);
extern "C" void fn_02b3a988(void*, void*);

namespace {
struct Object {
    void *owner;
    char padding_4[0x1A4];
    char member_1a8[0x134];
    char member_2dc[8];
    int value_2e4;
};
}

extern "C" void fn_02752968(void *object) {
    fn_025e83d8(object);
    if (((Object *) object)->value_2e4 != 0) {
        fn_0294f828(((Object *) object)->owner, ((Object *) object)->member_2dc);
    }
    fn_02b3a988(((Object *) object)->member_1a8, ((Object *) object)->owner);
}
