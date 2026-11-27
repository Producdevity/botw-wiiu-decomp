namespace {
struct Owner {
    char padding_0[0x123C];
    unsigned char* flag;
};
}

extern "C" int data_1054d368;
extern "C" int data_1054d390;

extern "C" int* fn_032cf8fc(void* arg0) {
    Owner* owner = (Owner*)arg0;
    if (*owner->flag != 0) {
        return &data_1054d368;
    }
    return &data_1054d390;
}
