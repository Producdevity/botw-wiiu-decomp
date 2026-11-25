extern "C" void fn_02b0717c(unsigned int *);

extern "C" void fn_02e31454(void *self, int *value) {
    unsigned int *owner = *(unsigned int **)((char *)self + 0x28);
    if (owner != 0) {
        int newValue;
        fn_02b0717c(owner);
        newValue = *value;
        *(int *)((char *)owner + 0x844) = newValue;
    }
}
