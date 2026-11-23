extern "C" int data_10464064;
extern "C" int fn_02dbeffc(int);
extern "C" int fn_02dbf15c(int);

extern "C" int fn_02e3fe70(int arg0, int* arg1) {
    int temp_r31;

    temp_r31 = data_10464064;
    if (temp_r31 != 0) {
        *arg1 = fn_02dbf15c(temp_r31);
        return fn_02dbeffc(temp_r31);
    }
    return 0;
}
