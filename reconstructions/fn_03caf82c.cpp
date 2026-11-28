typedef int s32;

extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03caf7dc(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e535c;

namespace {
struct Fn03caf82cSelf {
    char padding_0[0x28];
    s32 *table;
};
}

extern "C" void* fn_03caf82c(void* object) {
    ((Fn03caf82cSelf *) object)->table = &data_103e4380;
    fn_03c92f6c(object);
    ((Fn03caf82cSelf *) object)->table = &data_103e535c;
    fn_03caf7dc(object);
    return object;
}
