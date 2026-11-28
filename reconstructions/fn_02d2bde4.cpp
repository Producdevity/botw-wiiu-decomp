typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

extern "C" void fn_02d816bc(void*);
extern "C" void fn_0344a898(void *, void *);
extern "C" void* fn_037966a8(void *);
extern "C" int fn_037b7cac(void *);
extern "C" void fn_037b7e9c(void *, unsigned int, void *);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_101e1cbc;

namespace {
struct Object {
    void *owner;
    char padding_4[0x10];
    u16 id;
};
}

extern "C" void fn_02d2bde4(void *object) {
    struct { s32 f8; } request;
    void *target;

    target = fn_037966a8(((Object *)object)->owner);
    if (target != 0) {
        request.f8 = 3;
        fn_0344a898(target, &request.f8);
    }
    fn_02d816bc(((Object *)object)->owner);
    if (fn_037b7cac(object) != 0) {
        fn_037b7e9c(object, (u32)((Object *)object)->id, 0);
        return;
    }
    fn_037b8284(object, &data_101e1cbc, 0);
}
