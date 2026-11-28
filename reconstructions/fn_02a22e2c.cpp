typedef unsigned char u8;
typedef int s32;

struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);
extern "C" int fn_0378c7b0(void *);
extern "C" void* fn_037b5e8c(void *, const void *, void *, void *, int, int, int);
extern "C" char* data_1047c2b8;

extern "C" void *data_10463788;
extern "C" void *data_10463f6c;

namespace {
struct Table {
    char padding_0[0x10];
    void *handler;
};

struct Object {
    char padding_0[0xE4];
    s32 link;
    u8 valid;
};
}

extern "C" void fn_02a22e2c(void *object) {
    if (((Object *)object)->link != 0 || ((Object *)object)->valid != 0) {
        if (fn_0378c7b0(&((Object *)object)->link) != 0) {
            fn_0378c734((ProcLink *)&((Object *)object)->link);
            fn_037b5e8c(data_1047c2b8, data_10463788, ((Table *)data_10463f6c)->handler, &((Object *)object)->link, 0, 0, 2);
        }
    } else {
        fn_037b5e8c(data_1047c2b8, data_10463788, ((Table *)data_10463f6c)->handler, &((Object *)object)->link, 0, 0, 2);
    }
}
