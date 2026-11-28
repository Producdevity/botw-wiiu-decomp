extern "C" float fn_02e55450(const float* context);
extern "C" float fn_04210d48(float);

extern "C" float fn_02e55488(const float* context) {
    return fn_04210d48(fn_02e55450(context));
}
