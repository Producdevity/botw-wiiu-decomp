typedef int s32;

extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03c9eb8c(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e4804;

namespace {
struct Fn03c9ec04Self {
    char padding_0[0x28];
    s32 *table;
};
}

extern "C" void* fn_03c9ec04(void* object) {
    ((Fn03c9ec04Self *) object)->table = &data_103e4380;
    fn_03c92f6c(object);
    ((Fn03c9ec04Self *) object)->table = &data_103e4804;
    fn_03c9eb8c(object);
    return object;
}
