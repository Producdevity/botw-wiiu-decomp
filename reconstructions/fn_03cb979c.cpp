typedef int s32;

extern "C" void fn_03cb973c(void*);
extern "C" void fn_03ca7de4(void*);

extern "C" s32 data_103e5c2c;

namespace {
struct Object {
    char padding_0[0x28];
    s32 *table;
};
}

extern "C" void *fn_03cb979c(void *object) {
    fn_03ca7de4(object);
    ((Object *) object)->table = &data_103e5c2c;
    fn_03cb973c(object);
    return object;
}
