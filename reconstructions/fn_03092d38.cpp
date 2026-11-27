namespace {
struct Owner {
    char padding_0[0x6C];
    int override_value;
};
}

extern "C" int data_1046c86c;

extern "C" int fn_03092d38(void* arg0) {
    int value = ((Owner*)arg0)->override_value;
    if (value == 0) {
        return data_1046c86c + 0x24;
    }
    return value;
}
