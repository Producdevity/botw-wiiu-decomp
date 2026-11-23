extern "C" int fn_028f9ff4(void*, void*);
extern "C" int fn_028fa064(void*, void*, int);
extern "C" int fn_0294e318(void*);

extern "C" int fn_028fa1f8(void* * arg0) {
    void* temp_r30;
    void* temp_r31;

    temp_r30 = *arg0;
    if ((fn_0294e318(temp_r30) != 0) || ((temp_r31 = (*(void**)((char*)temp_r30 + 908)), ((temp_r31 == 0) == 0)) && ((int) (*(int*)((char*)temp_r31 + 568)) != 0) && (fn_028f9ff4(arg0, temp_r30) == 0) && ((fn_028fa064(arg0, temp_r31, 1) != 0) || (fn_028fa064(arg0, temp_r31, 0) != 0) || (fn_028fa064(arg0, temp_r31, 3) != 0)))) {
        return 1;
    }
    return 0;
}
