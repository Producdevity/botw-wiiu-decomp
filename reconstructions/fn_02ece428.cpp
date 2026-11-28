typedef unsigned char u8;
typedef int s32;

extern "C" int fn_03a268f0(void*);

extern "C" u8 fn_02ece428(void **objectSlot) {
    s32 result;
    void *object;

    object = *objectSlot;
    result = 0;
    if ((object != 0) && (fn_03a268f0(object) != 0)) {
        result = 1;
    }
    return result;
}
