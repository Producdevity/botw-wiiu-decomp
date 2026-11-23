extern "C" void fn_03c2ce8c(char *self, float value) {
    if (value == *(float *)(self + 908))
        return;
    *(float *)(self + 908) = value;
    *(unsigned short *)(self + 896) |= 4;
}
