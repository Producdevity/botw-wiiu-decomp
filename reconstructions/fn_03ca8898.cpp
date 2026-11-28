typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03ca8810(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e5180;

namespace {
struct OutputViewFields {
    char padding_0[0x28];
    s32 *vtable;
    char padding_2c[0x34];
    s32 value_60;
};
}

extern "C" struct OutputView *fn_03ca8898(struct OutputView *object, s32 value) {
    OutputViewFields *view = reinterpret_cast<OutputViewFields *>(object);
    view->vtable = &data_103e4380;
    fn_03c92f6c(object);
    view->vtable = &data_103e5180;
    fn_03ca8810(object);
    view->value_60 = value;
    return object;
}
