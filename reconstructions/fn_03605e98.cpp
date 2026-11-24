typedef int s32;

extern "C" void* fn_03605df8(void*);

extern "C" s32 fn_03605e98(void* arg0) {
    void* actor;

    actor = fn_03605df8(arg0);
    if ((actor != 0) && ((*(s32 *)((char *)actor + 0xC)) & 1)) {
        return 1;
    }
    return 0;
}
