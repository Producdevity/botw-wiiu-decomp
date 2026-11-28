extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0309f8cc(void *);
extern "C" void fn_030a05e8(void *, void *);
extern "C" void fn_030a5ab4(void *, unsigned);
extern "C" unsigned char data_1025fef0[];
extern "C" unsigned char data_1025ff10[];
extern "C" unsigned char data_10260028[];

namespace {
struct Object {
    char padding_0[0x20];
    const void *vtable_20;
    char padding_24[0x50];
    char member_74[0x1C];
    char member_90[0xC];
    unsigned char *table_9C;
    char padding_A0[0x24];
    unsigned char *table_C4;
};
}

extern "C" void fn_0309d2e0(void *self, int flags) {
    if (self != 0) {
        ((Object *)self)->vtable_20 = data_10260028;
        if (((Object *)self)->member_74 != 0) {
            unsigned char *table = data_1025fef0;
            ((Object *)self)->table_C4 = table;
            ((Object *)self)->table_9C = data_1025ff10;
            fn_0309f8cc(((Object *)self)->member_74);
            fn_030a5ab4(((Object *)self)->member_90, 0);
        }
        fn_030a05e8(self, 0);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
