extern "C" char *fn_03bdd5b0(char *self, int index) {
    if (*(int *)self == 0)
        return 0;
    return *(char **)(self + 4) + index * 16;
}
