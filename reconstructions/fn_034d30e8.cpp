typedef int s32;

extern "C" int fn_034d23a8(void*);
extern "C" int fn_034d2450(void*);
extern "C" void fn_034d261c(void*);
extern "C" void fn_034d4290(void*, void*);
extern "C" char* data_1047c3d8;

namespace {
struct Manager {
    char padding_0[0xF0];
    void *list;
};

struct Object {
    char padding_0[0x24];
    s32 flags;
};
}

extern "C" s32 fn_034d30e8(void *object) {
    if (fn_034d23a8(object) != 0 || fn_034d2450(object) != 0) {
        fn_034d261c(object);
        return 0;
    }
    fn_034d4290(reinterpret_cast<Manager *>(data_1047c3d8)->list, object);
    reinterpret_cast<Object *>(object)->flags &= ~1;
    return 1;
}
