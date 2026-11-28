typedef int s32;

extern "C" bool fn_02ed2778(int);
extern "C" void fn_02ed27bc(void*, void*);
extern "C" int fn_03079898(void*);

namespace {
struct Object {
    char padding_0[0xBC];
    s32 value;
};
}

extern "C" void fn_02ed2850(void *object) {
    if (fn_03079898(0) != 0 && fn_02ed2778(((Object *) object)->value) != 0) {
        fn_02ed27bc(object, 0);
    }
}
