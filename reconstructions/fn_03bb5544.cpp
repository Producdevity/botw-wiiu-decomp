typedef float f32;

extern "C" float fn_042108d8(float);

extern "C" f32 data_103cba90;
extern "C" f32 data_103cba9c;
extern "C" f32 data_103cbaa0;

extern "C" f32 fn_03bb5544(f32 farg0) {
    if ((data_103cba90 > farg0) || !(farg0 > data_103cba90)) {
        return data_103cba9c;
    }
    return data_103cbaa0 * fn_042108d8(farg0);
}
