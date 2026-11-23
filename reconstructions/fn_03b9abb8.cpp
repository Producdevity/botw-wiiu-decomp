extern "C" void fn_03b9abb8(char *self, unsigned expected) {
    if (*(unsigned *)(self + 1716) == expected)
        *(unsigned *)(self + 1716) = 0;
}
