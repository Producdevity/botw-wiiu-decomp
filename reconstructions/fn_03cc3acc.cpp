typedef int s32;

extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03cc3a68(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e6564;

namespace {
struct Fn03cc3accSelf {
    char padding_0[0x28];
    s32 *table;
};
}

extern "C" void* fn_03cc3acc(void* object) {
    ((Fn03cc3accSelf *) object)->table = &data_103e4380;
    fn_03c92f6c(object);
    ((Fn03cc3accSelf *) object)->table = &data_103e6564;
    fn_03cc3a68(object);
    return object;
}
