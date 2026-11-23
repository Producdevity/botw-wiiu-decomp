extern "C" const float data_1028bf18;
extern "C" const float data_1028bf1c;

extern "C" void fn_0318f55c(char *self, float *value) {
    float x = *value;
    if (!(x > data_1028bf18))
        return;
    if (x > data_1028bf1c)
        return;
    *(float *)(self + 112) = x;
}
