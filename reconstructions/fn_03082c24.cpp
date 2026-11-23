typedef int s32;
typedef float f32;

extern "C" f32 data_1025dd18;

extern "C" s32 fn_03082c24(s32 arg0, f32 farg0, f32 farg1, f32 farg2) {
    if (arg0 != 0) {
        if (!(farg0 < farg1)) {
            
            return 0;
        }
        goto block_4;
    }
    if (farg1 < farg0) {
block_4:
        if ((farg2 == farg1) || (((farg0 - farg2) * (farg1 - farg2)) < data_1025dd18)) {
            return 1;
        }
        
        return 0;
    }
    return 0;
}
