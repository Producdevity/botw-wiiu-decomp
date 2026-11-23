extern "C" void fn_034c3ffc(char *self, float *value) {
    char *target = *(char **)(self + 136);
    if (!target)
        return;
    *(float *)(target + 28) = value[0];
    *(float *)(target + 32) = value[1];
    *(float *)(target + 36) = value[2];
}
