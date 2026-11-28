namespace {
struct Header {
    char padding_0[6];
    unsigned short version;
    char padding_8[0xC];
    int offsetA;
    int offsetB;
};
}

extern "C" void *fn_03bde8d4(void **holder) {
    unsigned short version;
    Header *header;

    header = (Header*)*holder;
    if (header != 0) {
        version = header->version;
        if (version >= 0x300U) {
            return (char *)header + header->offsetB + 8;
        }
        if (version == 0x100) {
            return (char *)header + header->offsetA + 8;
        }
        return 0;
    }
    return 0;
}
