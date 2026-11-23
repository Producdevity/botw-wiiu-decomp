extern "C" void* fn_02c036e4(void* holder);
extern "C" float fn_02e590f0(void* object);
extern "C" float fn_02e59174(float value, float amount);

extern "C" float fn_02c037e4(void* holder, float amount) {
    return fn_02e59174(fn_02e590f0(fn_02c036e4(holder)), amount);
}
