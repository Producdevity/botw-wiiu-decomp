typedef int s32;
typedef float f32;

struct BodyOwner;
extern "C" float fn_0348cd20(const BodyOwner *);
extern "C" int fn_03798e3c(void);
extern "C" const float data_1031a78c;

extern "C" f32 fn_037998fc(void) {
    s32 temp_r3;

    temp_r3 = fn_03798e3c();
    if (temp_r3 != 0) {
        return fn_0348cd20((struct BodyOwner *) temp_r3);
    }
    return data_1031a78c;
}
