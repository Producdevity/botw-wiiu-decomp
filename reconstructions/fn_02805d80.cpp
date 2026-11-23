typedef float f32;

extern "C" int fn_028058c0(void);
extern "C" const float data_1013aeec;

extern "C" f32 data_1013af0c;

extern "C" f32 fn_02805d80(void) {
    if (fn_028058c0() == 0) {
        return data_1013aeec;
    }
    return data_1013af0c;
}
