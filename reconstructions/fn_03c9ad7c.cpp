typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03c9ad28(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e44c8;

namespace {
struct Object {
    char padding_0[0x28];
    s32 *table;
};
}

extern "C" struct OutputView *fn_03c9ad7c(struct OutputView *object) {
    ((Object *) object)->table = &data_103e4380;
    fn_03c92f6c(object);
    ((Object *) object)->table = &data_103e44c8;
    fn_03c9ad28(object);
    return object;
}
