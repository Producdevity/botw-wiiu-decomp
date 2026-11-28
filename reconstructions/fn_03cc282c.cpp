typedef int s32;

extern "C" void fn_03cc279c(void*);
extern "C" void* fn_03ca7de4(void*);

extern "C" s32 data_103e64b8;

namespace {
struct Object {
    char padding_0[0x28];
    s32 *table;
};
}

extern "C" void *fn_03cc282c(void *object) {
    fn_03ca7de4(object);
    ((Object *) object)->table = &data_103e64b8;
    fn_03cc279c(object);
    return object;
}
