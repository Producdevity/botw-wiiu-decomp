extern "C" char *fn_030a84d0(char *self) {
    char *owner = *(char **)(self + 28);
    if (*(int *)(self + 80) == 1)
        return owner + 156;
    return owner;
}
