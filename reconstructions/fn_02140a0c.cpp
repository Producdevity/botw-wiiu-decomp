extern "C" int fn_02140638(void*);
extern "C" int fn_02c19940(void *);
extern "C" int fn_02c1b5c4(void*, int);
extern "C" int fn_02c1b6c0(void*, void*);

extern "C" int fn_02140a0c(void* * arg0) {
    void* temp_r31;

    temp_r31 = *arg0;
    if (temp_r31 == 0) {
        return 0;
    }
    if ((fn_02c19940(temp_r31) != 0) || (fn_02c1b6c0(temp_r31, 0) != 0) || (fn_02c1b5c4(temp_r31, 0) != 0) || ((int) (*(unsigned char*)((char*)temp_r31 + 1079)) != 0)) {
        return 1;
    }
    return fn_02140638(arg0);
}
