namespace {
struct Record {
    char padding_0[8];
    int value;
    short index;
    char padding_e[2];
};

struct Table {
    char padding_0[0xC];
    short index;
};
}

extern "C" void* fn_03f0b8ac(void*);

extern "C" int fn_03f0dae4(int* object) {
    short index = static_cast<Table*>(fn_03f0b8ac(object))->index;
    int result = -1;
    if (index != -1) {
        result = (reinterpret_cast<Record*>(*object) + index)->value;
    }
    return result;
}
