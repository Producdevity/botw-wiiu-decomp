extern "C" void fn_02e6d924(void*, void*);
extern "C" void fn_02fe3d80(void*, int);

namespace {
struct Object {
    char padding_0[0x1DF8];
    char list[1];
};
}

extern "C" void fn_02fe40f8(void* object, int mode, int value) {
    if (mode == 1) {
        fn_02fe3d80(object, 8);
    } else if (mode == 2) {
        fn_02fe3d80(object, 1);
    }
    fn_02fe3d80(object, 2);
    fn_02e6d924(((Object *) object)->list, (void *) value);
}
