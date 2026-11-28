typedef int s32;

extern "C" void fn_03cc0a14(void*);
extern "C" void* fn_03ca7de4(void*);

extern "C" s32 data_103e6230;

namespace {
struct Object {
    char padding_0[0x28];
    s32 *table;
};
}

extern "C" void *fn_03cc0aa4(void *object) {
    fn_03ca7de4(object);
    ((Object *) object)->table = &data_103e6230;
    fn_03cc0a14(object);
    return object;
}
