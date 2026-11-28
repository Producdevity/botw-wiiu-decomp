typedef signed char s8;
typedef int s32;

extern "C" void fn_027bd778(void*);
extern "C" void fn_02e1cb18(void*, void*, void*);

extern "C" s32 data_104e4d50;
extern "C" s32 data_104e4d58;

namespace {
struct Object {
    char padding_0[0x1A8];
    s8 flag;
};
}

extern "C" void fn_027a06d8(void *object) {
    fn_02e1cb18(0, &data_104e4d50, 0);
    fn_02e1cb18(0, &data_104e4d58, 0);
    ((Object *) object)->flag = 0;
    fn_027bd778(object);
}
