extern "C" int data_100c4d80[];

extern "C" int fn_024a03dc(char *self) {
    unsigned index = *(unsigned *)(self + 2360);
    if (index < 3)
        return data_100c4d80[index];
    return 1;
}
