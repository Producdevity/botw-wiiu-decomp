typedef unsigned char u8;
typedef int s32;

extern "C" void fn_03479bc8(void*, void*);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);

extern "C" void *data_1046fe50;

namespace {
struct Object {
    unsigned char padding_0[0x140];
    s32 linkHead;
    u8 linkFlag;
    unsigned char padding_145[3];
    void *entry;
};
}

extern "C" void fn_0214c93c(void *object) {
    void *entry;

    if ((((Object *)object)->linkHead != 0) || (((Object *)object)->linkFlag != 0)) {
        fn_0378c734((ProcLink *)&((Object *)object)->linkHead);
    }
    entry = ((Object *)object)->entry;
    if (entry != 0) {
        fn_03479bc8(data_1046fe50, entry);
    }
}
