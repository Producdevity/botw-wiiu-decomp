typedef int s32;

extern "C" void fn_0348799c(void *);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_10148db0;

namespace {
struct Owner {
    char padding_0[0xF4];
    void *child;
};
}

extern "C" void fn_02863374(void **arg0) {
    Owner *owner;
    void *child;

    owner = (Owner *)*arg0;
    child = owner->child;
    if (child != 0) {
        fn_0348799c(child);
    }
    fn_037b8284(arg0, &data_10148db0, 0);
}
