typedef int s32;

extern "C" void fn_0317f638(void *);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_101570dc;

namespace {
struct Owner {
    char padding_0[0x38C];
    void *child;
};
}

extern "C" void fn_028be654(void **arg0) {
    Owner *owner;
    void *child;

    owner = (Owner *)*arg0;
    child = owner->child;
    if (child != 0) {
        fn_0317f638(child);
    }
    fn_037b8284(arg0, &data_101570dc, 0);
}
