typedef int s32;

extern "C" int fn_031e2f14(void*, void*);
extern "C" int data_1046d3ac;

namespace {
struct Object {
    char padding_0[0x100];
    s32 handle;
};
struct Manager {
    char padding_0[0x175C4];
    void *target;
};
}

extern "C" void fn_0379ad04(void *object) {
    if (((Object *) object)->handle == 0) {
        ((Object *) object)->handle = fn_031e2f14(((Manager *) data_1046d3ac)->target, object);
    }
}
