typedef unsigned char u8;
typedef int s32;

extern "C" void fn_025e7324(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" int fn_0378a374(int, int);
struct StatefulEntry;
extern "C" StatefulEntry* fn_0378af4c(void *);
extern "C" unsigned char data_1016da20[];

namespace {
struct Object {
    void *owner;
    char padding_4[8];
    u8 *vtable;
};

struct EntryView {
    char padding_0[0x54];
    u8 state;
};
}

extern "C" void fn_0295bb34(void *self, s32 flags) {
    if (self != 0) {
        ((Object *)self)->vtable = data_1016da20;
        StatefulEntry *entry = fn_0378af4c(((Object *)self)->owner);
        if ((entry != 0) && ((s32)((EntryView *)entry)->state == 2)) {
            fn_0378a374((s32)entry, 0);
        }
        fn_025e7324(self, 0U);
        if (flags & 1) {
            fn_0308e6d0(self);
        }
    }
}
