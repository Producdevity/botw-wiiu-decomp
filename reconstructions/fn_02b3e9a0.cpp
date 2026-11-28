extern "C" bool fn_0378da88(void*);
extern "C" bool fn_0378dacc(void*, void*);

namespace {
struct Object {
    char padding_0[0xC];
    char slot;
};
}

extern "C" int fn_02b3e9a0(void* object, void* handle)
{
    if (fn_0378da88(handle) && fn_0378dacc(&((Object*)object)->slot, handle)) {
        return 1;
    }
    return 0;
}
