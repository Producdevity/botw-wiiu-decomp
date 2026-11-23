extern "C" int fn_030b0964(void*, int);

extern "C" int fn_02a2c0dc(void* arg0) {
    int sp8;
    int temp_r0;

    temp_r0 = (*(int*)((char*)arg0 + 480));
    sp8 = temp_r0;
    if ((temp_r0 == 0) || (fn_030b0964(&sp8, 4) == 2)) {
        return 0;
    }
    return (*(int*)((char*)arg0 + 480));
}
