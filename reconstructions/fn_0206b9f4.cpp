extern "C" int fn_0206b824(void*, void*);
extern "C" void fn_020f22bc(void*);
extern "C" void fn_03485f68(void*);

namespace {
struct Object {
    char padding_0[0x14];
    char member[1];
};
}

extern "C" void fn_0206b9f4(void *object) {
    fn_020f22bc(object);
    int found = fn_0206b824(object, ((Object *)object)->member);
    if (found != 0) {
        fn_03485f68((void *)found);
    }
}
