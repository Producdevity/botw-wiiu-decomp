typedef unsigned char u8;
typedef int s32;

extern "C" int fn_037e71a0(void*);

extern "C" u8 fn_02ef7ac0(void **objectSlot) {
    s32 result;
    void *object;

    object = *objectSlot;
    result = 1;
    if ((object != 0) && (fn_037e71a0(object) == 0)) {
        result = 0;
    }
    return result;
}
