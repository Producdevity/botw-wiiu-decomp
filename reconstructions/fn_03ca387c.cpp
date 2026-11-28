typedef int s32;

extern "C" void fn_03c92f6c(void*);
extern "C" void fn_03ca384c(void*);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e4ce0;

namespace {
struct Fn03ca387cSelf {
    char padding_0[0x28];
    s32 *table;
};
}

extern "C" void* fn_03ca387c(void* object) {
    ((Fn03ca387cSelf *) object)->table = &data_103e4380;
    fn_03c92f6c(object);
    ((Fn03ca387cSelf *) object)->table = &data_103e4ce0;
    fn_03ca384c(object);
    return object;
}
