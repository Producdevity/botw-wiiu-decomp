typedef int s32;

extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03cb4a3c(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e5860;

namespace {
struct Fn03cb4ac0Self {
    char padding_0[0x28];
    s32 *table;
};
}

extern "C" void* fn_03cb4ac0(void* object) {
    ((Fn03cb4ac0Self *) object)->table = &data_103e4380;
    fn_03c92f6c(object);
    ((Fn03cb4ac0Self *) object)->table = &data_103e5860;
    fn_03cb4a3c(object);
    return object;
}
