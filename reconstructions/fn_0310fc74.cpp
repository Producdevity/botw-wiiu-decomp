struct ByamlIter;
extern "C" bool fn_0396c450(const ByamlIter* iter, int* value, const char* key);

extern "C" int fn_0310fc74(const ByamlIter* iter, const char* key, int fallback, bool unused) {
    int value;
    if (fn_0396c450(iter, &value, key)) {
        return value;
    }
    return fallback;
}
