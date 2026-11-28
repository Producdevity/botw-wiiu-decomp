typedef unsigned char u8;
typedef int s32;

extern "C" int fn_0339a2b4(void*);

extern "C" u8 fn_0327c40c(void **objectSlot) {
    s32 result;
    void *object;

    object = *objectSlot;
    result = 0;
    if ((object != 0) && (fn_0339a2b4(object) != 0)) {
        result = 1;
    }
    return result;
}
