extern "C" void* data_10467be0;
extern "C" bool fn_02e2a01c(void* object);

extern "C" bool fn_02cb0020() {
    void* object = data_10467be0;
    if (object) {
        if (fn_02e2a01c(object))
            return true;
    }
    return false;
}
