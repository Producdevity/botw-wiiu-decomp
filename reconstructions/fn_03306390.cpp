typedef int s32;

extern "C" void fn_03317400(void*, void*);
extern "C" int fn_03317670(void*, void*);

extern "C" void *data_1046d780;

namespace {
struct Owner {
    unsigned char padding_0[4];
    void *key;
    unsigned char padding_8[0xFC];
    s32 state;
};
}

extern "C" void fn_03306390(void *owner) {
    void *manager;

    if (((Owner *)owner)->state == 1) {
        manager = data_1046d780;
        if ((manager != 0) && (fn_03317670(manager, ((Owner *)owner)->key) != 0)) {
            fn_03317400(manager, 0);
        }
    }
}
