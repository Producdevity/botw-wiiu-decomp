extern "C" void fn_02e57de0(char *self, unsigned expected) {
    if (*(unsigned *)(self + 16) == expected)
        *(unsigned *)(self + 16) = 0;
}
