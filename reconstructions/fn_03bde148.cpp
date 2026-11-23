extern "C" bool fn_03bde148(char **self) {
    char *target = *self;
    if (!target)
        return false;
    return *(int *)(target + 60) != 0;
}
