extern "C" void fn_034c434c(char *self, float *value) {
    char *target = *(char **)(self + 124);
    if (!target)
        return;
    *(float *)(target + 64) = value[0];
    *(float *)(target + 68) = value[1];
    *(float *)(target + 72) = value[2];
}
