typedef unsigned char u8;
typedef int s32;

extern "C" void fn_02d52714(void*, int, int, void*, void*, void*);
extern "C" const unsigned char data_10549dd0[];

namespace {
struct Object {
    void *owner;
    char padding_4[0x10];
    u8 *value;
};
}

extern "C" s32 fn_02caf824(void *object) {
    fn_02d52714(((Object *) object)->owner, *((Object *) object)->value, 0, (void *) data_10549dd0, 0, (void *) data_10549dd0);
    return 1;
}
