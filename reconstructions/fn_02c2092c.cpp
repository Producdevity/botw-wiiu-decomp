typedef int s32;
typedef unsigned int u32;

extern "C" int fn_0434b258(int);

extern "C" s32 data_10463dcc;
extern "C" u32 data_10463dd0;

extern "C" s32 fn_02c2092c(void) {
    s32 valid = 1;
    if (fn_0434b258(data_10463dcc) != data_10463dd0) {
        valid = 0;
        data_10463dcc = 0;
    }
    return valid;
}
