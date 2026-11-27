typedef unsigned char u8;
typedef int s32;

extern "C" int fn_0294ee18(void*);
extern "C" int fn_02b67054(void *, int);

extern "C" u8 fn_0259572c(void **object_slot) {
    s32 result = 0;
    if ((fn_02b67054(*object_slot, 1) == 0) && (fn_0294ee18(*object_slot) != 4)) {
        result = 1;
    }
    return result;
}
