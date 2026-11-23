extern "C" int fn_03c30818(void*, int);
extern "C" void fn_03c40470(void*, unsigned char);

extern "C" void fn_03c404e8(void* arg0, unsigned char arg1) {
    int temp_r3;
    int var_r28;
    int var_r29;

    var_r28 = 0;
    (*(signed char*)((char*)arg0 + 38)) = arg1;
    var_r29 = 16;
    do {
        temp_r3 = fn_03c30818(arg0, var_r28);
        if (temp_r3 != 0) {
            fn_03c40470((void*)temp_r3, arg1);
        }
        var_r29 -= 1;
        var_r28 += 1;
    } while (var_r29 != 0);
}
