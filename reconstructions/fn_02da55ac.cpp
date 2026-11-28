typedef int s32;

extern "C" int fn_02da2328(void*);
extern "C" int fn_031726fc(void*, int);
extern "C" void * data_1046ce48;

namespace {
struct Vtable {
    char padding_0[0x704];
    s32 (*slot_704)(void *);
};
struct Object {
    char padding_0[0xE8];
    Vtable *vtable;
};
}

extern "C" s32 fn_02da55ac(void *object) {
    if (fn_02da2328(object) != 0 && ((Object *) object)->vtable->slot_704(object) == 0 && fn_031726fc(data_1046ce48, 3) == 0) {
        return 1;
    }
    return 0;
}
