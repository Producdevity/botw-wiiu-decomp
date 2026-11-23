extern "C" bool fn_03bde168(char **self) {
    char *target = *self;
    if (!target)
        return false;
    return *(int *)(target + 64) != 0;
}
