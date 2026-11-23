extern "C" void fn_03c2ceec(char *self, float value) {
    if (value == *(float *)(self + 920))
        return;
    *(float *)(self + 920) = value;
    *(unsigned short *)(self + 896) |= 16;
}
