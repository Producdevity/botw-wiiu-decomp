typedef unsigned char u8;
typedef int s32;
extern "C" int fn_02f5d864(void*);

namespace {
struct Object {
    char padding_0[0x1FD5];
    u8 flag_1fd5;
};
}

extern "C" s32 fn_02f5d954(void *object) {
    if (((Object *) object)->flag_1fd5 != 0 && fn_02f5d864(object) == 0) {
        return 1;
    }
    return 0;
}
