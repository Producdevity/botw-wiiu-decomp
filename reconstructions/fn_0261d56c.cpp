typedef unsigned char u8;
typedef int s32;

extern "C" int fn_025978cc(void*);
extern "C" int fn_0261d500(void*);

extern "C" u8 fn_0261d56c(void *object) {
    s32 result = 1;
    if ((fn_0261d500(object) == 0) && (fn_025978cc(object) == 0)) {
        result = 0;
    }
    return result;
}
