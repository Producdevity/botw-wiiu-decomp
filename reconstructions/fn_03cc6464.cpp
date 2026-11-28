typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03cc642c(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e69f0;

namespace {
struct Object {
    char padding_0[0x28];
    s32 *table;
};
}

extern "C" struct OutputView *fn_03cc6464(struct OutputView *object) {
    ((Object *) object)->table = &data_103e4380;
    fn_03c92f6c(object);
    ((Object *) object)->table = &data_103e69f0;
    fn_03cc642c(object);
    return object;
}
