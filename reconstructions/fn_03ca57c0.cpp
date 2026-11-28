typedef int s32;

extern "C" void fn_03ca5770(void*);
extern "C" void fn_03ca7de4(void*);

extern "C" s32 data_103e4e88;

namespace {
struct Object {
    char padding_0[0x28];
    s32 *table;
};
}

extern "C" void *fn_03ca57c0(void *object) {
    fn_03ca7de4(object);
    ((Object *) object)->table = &data_103e4e88;
    fn_03ca5770(object);
    return object;
}
