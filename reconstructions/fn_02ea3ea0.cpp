typedef int s32;

extern "C" void fn_02e9a1d8(void*);
extern "C" void fn_02ea3e20(void*);
extern "C" void* data_1046bdd8;

namespace {
struct Owner {
    unsigned char padding_0[0x348];
    void *child;
};

struct Globals {
    unsigned char padding_0[0x40818];
    s32 state;
};
}

extern "C" void fn_02ea3ea0(void *owner) {
    void *child;

    child = ((Owner *)owner)->child;
    if (child != 0) {
        fn_02e9a1d8(child);
    }
    if (((Globals *)data_1046bdd8)->state == 5) {
        fn_02ea3e20(owner);
    }
}
