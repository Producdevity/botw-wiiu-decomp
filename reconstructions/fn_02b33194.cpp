extern "C" int fn_02b3307c(void*);
extern "C" void fn_0379241c(void*, float);

extern "C" float data_101ace18;

extern "C" void fn_02b33194(int *state) {
    if (fn_02b3307c(state) != 0) {
        fn_0379241c((char *) state + 8, data_101ace18);
        if (*state == 0) {
            *state = 2;
        }
    }
}
