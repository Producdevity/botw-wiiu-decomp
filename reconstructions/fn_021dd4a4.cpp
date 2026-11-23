typedef signed char s8;
typedef int s32;

extern "C" void fn_03072a38(void);
extern "C" void fn_03792fa0(void*, int);
extern "C" char * data_1047c258;

extern "C" s32 fn_021dd4a4(void) {
    s8 *temp_r31;

    temp_r31 = (s8 *)(data_1047c258);
    if (temp_r31 != 0) {
        fn_03792fa0(temp_r31, 0);
        fn_03792fa0(temp_r31, 1);
        fn_03792fa0(temp_r31, 2);
    }
    fn_03072a38();
    return 1;
}
