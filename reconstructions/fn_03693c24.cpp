namespace {
struct Record {
    unsigned char unknown_00[4];
    const unsigned short* key;
};

struct RecordHolder {
    unsigned char unknown_00[20];
    Record* record;
};
}

extern "C" Record* fn_03693c24(const RecordHolder* holder) {
    return holder->record;
}
