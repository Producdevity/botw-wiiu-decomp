typedef int s32;

extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03ca7d98(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e50b8;

namespace {
struct Fn03ca7de4Self {
    char padding_0[0x28];
    s32 *table;
};
}

extern "C" void* fn_03ca7de4(void* object) {
    ((Fn03ca7de4Self *) object)->table = &data_103e4380;
    fn_03c92f6c(object);
    ((Fn03ca7de4Self *) object)->table = &data_103e50b8;
    fn_03ca7d98(object);
    return object;
}
