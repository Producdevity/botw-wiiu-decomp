struct Opaque_03693c24 {
    struct Record {
        unsigned char unknown_00[4];
        const unsigned short* key;
    };

    unsigned char unknown_00[20];
    Record* record;
};

extern "C" Opaque_03693c24::Record* fn_03693c24(const Opaque_03693c24* holder) {
    return holder->record;
}
