typedef unsigned char u8;
typedef int s32;

extern "C" bool fn_0277f020(void *);
extern "C" bool fn_0277f2f0(void *);

extern "C" u8 fn_0277f32c(void *object) {
    s32 result = 1;
    if ((fn_0277f2f0(object) == 0) && (fn_0277f020(object) == 0)) {
        result = 0;
    }
    return result;
}
