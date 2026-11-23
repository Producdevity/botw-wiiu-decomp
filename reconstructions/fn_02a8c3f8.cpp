extern "C" void* data_10469978;
extern "C" bool fn_02ebf0fc(void* object);
extern "C" bool fn_02a8c3f8() {
    void* object = data_10469978;
    if (object) {
        if (fn_02ebf0fc(object))
            return true;
    }
    return false;
}
