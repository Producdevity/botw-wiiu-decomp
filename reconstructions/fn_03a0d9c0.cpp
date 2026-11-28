typedef unsigned char u8;

extern "C" void fn_03af1244(void*);
extern "C" void fn_03af129c(void*, void*, int, void*);

namespace {
struct Object {
    char padding_0[0x34];
    char source[0x7D4];
    u8 flag;
    char padding_809[0x33B];
    char member[1];
};
}

extern "C" void fn_03a0d9c0(void *object) {
    if (((Object *) object)->flag != 0) {
        fn_03af1244(((Object *) object)->member);
        fn_03af129c(((Object *) object)->member, 0, 1, ((Object *) object)->source);
    }
}
