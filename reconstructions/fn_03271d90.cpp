typedef unsigned char u8;
extern "C" int fn_0339a0d0(void *);

namespace {
struct Object {
    void *first;
    char padding_4[0x28];
    u8 *value_2c;
    u8 *value_30;
};
}

extern "C" u8 fn_03271d90(void *object) {
    if (fn_0339a0d0(((Object *) object)->first) != 0) {
        return *((Object *) object)->value_2c;
    }
    return *((Object *) object)->value_30;
}
