extern "C" float fn_02e55450(const float* context);
extern "C" float fn_04210514(float value);

extern "C" float fn_02e55464(const float* context) {
    return fn_04210514(fn_02e55450(context));
}
