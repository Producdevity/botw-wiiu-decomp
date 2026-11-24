struct Format_035d6b18;

extern "C" int fn_035d6b18(const Format_035d6b18* format);

extern "C" int fn_035d6b84(void* object) {
    return fn_035d6b18(*(const Format_035d6b18**)object);
}
