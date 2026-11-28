typedef int s32;

struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03cb00fc(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e54bc;

namespace {
struct OutputViewFields {
    char padding_0[0x28];
    s32 *vtable;
    char padding_2c[0xC];
    s32 value_38;
};
}

extern "C" struct OutputView *fn_03cb0190(struct OutputView *object, s32 value) {
    OutputViewFields *view = reinterpret_cast<OutputViewFields *>(object);
    view->vtable = &data_103e4380;
    fn_03c92f6c(object);
    view->vtable = &data_103e54bc;
    fn_03cb00fc(object);
    view->value_38 = value;
    return object;
}
