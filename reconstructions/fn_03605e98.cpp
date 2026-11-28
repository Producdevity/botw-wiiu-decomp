typedef int s32;

extern "C" void* fn_03605df8(void*);

namespace {
struct Actor {
    char padding_0[0xC];
    s32 flags;
};
}

extern "C" s32 fn_03605e98(void* object) {
    Actor *actor = (Actor *) fn_03605df8(object);
    if (actor != 0 && (actor->flags & 1)) {
        return 1;
    }
    return 0;
}
