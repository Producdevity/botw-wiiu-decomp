typedef int s32;

extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03ca0874(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e4b1c;

namespace {
struct Fn03ca08c0Self {
    char padding_0[0x28];
    s32 *table;
};
}

extern "C" void* fn_03ca08c0(void* object) {
    ((Fn03ca08c0Self *) object)->table = &data_103e4380;
    fn_03c92f6c(object);
    ((Fn03ca08c0Self *) object)->table = &data_103e4b1c;
    fn_03ca0874(object);
    return object;
}
