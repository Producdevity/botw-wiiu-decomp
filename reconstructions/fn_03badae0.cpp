namespace {
struct Owner {
    char padding_0[0xCC];
    int* custom;
};
}

extern "C" int data_10549fec;

extern "C" int* fn_03badae0(void* owner) {
    int* custom = static_cast<Owner*>(owner)->custom;
    if (custom == 0) {
        return &data_10549fec;
    }
    return custom;
}
