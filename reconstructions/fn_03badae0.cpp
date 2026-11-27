namespace {
struct Owner {
    char padding_0[0xCC];
    int* custom;
};
}

extern "C" int data_10549fec;

extern "C" int* fn_03badae0(void* arg0) {
    int* custom = ((Owner*)arg0)->custom;
    if (custom == 0) {
        return &data_10549fec;
    }
    return custom;
}
