extern "C" void fn_02e6d924(void*, void*);
extern "C" void fn_02fe3d80(void*, int);

namespace {
struct Object {
    char padding_0[0x1DF8];
    char field_1df8;
};
}

extern "C" void fn_02fe4170(void* object, void* context)
{
    fn_02fe3d80(object, 0);
    fn_02fe3d80(object, 2);
    fn_02e6d924(&((Object*)object)->field_1df8, context);
}
