extern "C" int fn_02ea93b4(unsigned value);
extern "C" float fn_02ea6a4c(int index);

extern "C" float fn_02ea93ec(unsigned value) {
    return fn_02ea6a4c(fn_02ea93b4(value));
}
