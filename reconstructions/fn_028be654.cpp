extern "C" void fn_0317f638(void *);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" int data_101570dc;

namespace {
struct Owner {
    char padding_0[0x38C];
    void *child;
};
}

extern "C" void fn_028be654(void **object) {
    void *child = ((Owner *)*object)->child;
    if (child != 0) {
        fn_0317f638(child);
    }
    fn_037b8284(object, &data_101570dc, 0);
}
