typedef int s32;
struct OutputView;
extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03ca0098(void*);
extern "C" void fn_03ca08c0(void*);
extern "C" s32 data_103e4380;
extern "C" s32 data_103e4a68;

namespace {
struct View {
    char padding_0[0x28];
    s32 *vtable;
    char padding_2c[0x1C];
    char member_48[1];
};
}

extern "C" struct OutputView *fn_03ca00d8(struct OutputView *object) {
    ((View *)object)->vtable = &data_103e4380;
    fn_03c92f6c(object);
    ((View *)object)->vtable = &data_103e4a68;
    fn_03ca08c0(((View *)object)->member_48);
    fn_03ca0098(object);
    return object;
}
