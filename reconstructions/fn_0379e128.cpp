namespace {
struct Source {
    char padding_0[0x10];
    unsigned value_10;
};

struct Target {
    char padding_0[0x50];
    unsigned value_50;
};
}

extern "C" void *data_1046e118;

extern "C" int fn_0379e128(void *self, unsigned modulus)
{
    if (data_1046e118 != 0) {
        return ((Source *)data_1046e118)->value_10 % modulus != ((Target *)self)->value_50 % modulus;
    }
    return 0;
}
