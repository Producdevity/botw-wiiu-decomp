typedef int s32;

extern "C" void fn_03c9c42c(void*);
extern "C" void* fn_03ca7de4(void*);

extern "C" s32 data_103e462c;

namespace {
struct Object {
    char padding_0[0x28];
    s32 *table;
};
}

extern "C" void *fn_03c9c4c4(void *object) {
    fn_03ca7de4(object);
    ((Object *) object)->table = &data_103e462c;
    fn_03c9c42c(object);
    return object;
}
