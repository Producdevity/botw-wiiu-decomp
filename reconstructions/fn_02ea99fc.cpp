typedef unsigned char u8;
typedef int s32;

extern "C" int fn_02e193a4(void*);
extern "C" int fn_02ea7c20(void*);

extern "C" u8 data_1046991e;

extern "C" s32 fn_02ea99fc(void *object) {
    s32 result;

    if ((s32)data_1046991e != 0) {
        return 1;
    }
    result = 0;
    if (fn_02e193a4(0) == 0) {
        result = (fn_02ea7c20(object) ^ 2) == 0;
    }
    return result;
}
