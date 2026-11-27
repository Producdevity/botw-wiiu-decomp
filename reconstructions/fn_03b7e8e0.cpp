extern "C" float data_103c522c;

extern "C" float fn_03b7e8e0(int useDefault, float base, float scale, float amount) {
    if (useDefault == 0) {
        return data_103c522c;
    }
    return scale * amount + base;
}
