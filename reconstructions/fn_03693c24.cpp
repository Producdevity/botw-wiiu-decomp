struct Opaque_03693c24_Record {
    unsigned char unknown_00[4];
    const unsigned short* key;
};

struct Opaque_03693c24 {
    unsigned char unknown_00[20];
    Opaque_03693c24_Record* record;
};

extern "C" Opaque_03693c24_Record* fn_03693c24(const Opaque_03693c24* holder) {
    return holder->record;
}
