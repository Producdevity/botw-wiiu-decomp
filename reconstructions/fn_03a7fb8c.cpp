typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

namespace {
struct Item {
    char padding_0[0x98];
    u16 id;
};
}

extern "C" unsigned char fn_03a81fc4(int);
extern "C" unsigned char fn_03a81fec(int);

extern "C" u8 fn_03a7fb8c(void *object) {
    s32 result = 0;
    if (fn_03a81fc4(((Item *)object)->id) != 0 && fn_03a81fec(((Item *)object)->id) != 0) {
        result = 1;
    }
    return result;
}
