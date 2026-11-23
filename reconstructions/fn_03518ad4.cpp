extern "C" unsigned fn_03519520();
extern "C" unsigned fn_03519544();
extern "C" int fn_0353ab54(int, void*);
extern "C" void fn_035480d8(int, void*);

extern "C" void fn_03518ad4(void* arg0) {
    int temp_r30;
    int temp_r31;

    temp_r30 = fn_03519520();
    temp_r31 = fn_03519544();
    if ((temp_r30 != 0) && (temp_r31 != 0)) {
        (*(int*)((char*)arg0 + 220)) = fn_0353ab54(temp_r30, (char*)arg0 + 176);
        fn_035480d8(temp_r31, arg0);
    }
}
