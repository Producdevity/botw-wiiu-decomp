namespace {
struct Object {
    char padding_0[12];
    float value;
};
}

extern "C" float data_1028ae1c;
extern "C" int fn_0316fe80(void*);
extern "C" unsigned fn_0317097c(const unsigned* value);

extern "C" int fn_03172ec4(int, void* object) {
    if ((object == 0) || (fn_0317097c((const unsigned*) object) == 0) || (fn_0316fe80(object) == 0) || (((Object *) object)->value < data_1028ae1c)) {
        return 0;
    }
    return 1;
}
