namespace {

struct Record {
    unsigned char bytes[76];
};

typedef char RecordSize[sizeof(Record) == 76 ? 1 : -1];

template <typename T, int N>
struct SafeArray {
    T buffer[N];
    T& operator[](int index) {
        if (static_cast<unsigned int>(index) < N) return buffer[index];
        return buffer[0];
    }
};

struct RecordList {
    SafeArray<Record, 8> records;
    short count;
};

struct Owner {
    unsigned char prefix[12];
    RecordList* list;
};

}

extern "C" Record data_105101d0;

static bool contains(const RecordList* list, int index) {
    return list != 0 && list->count > index;
}

extern "C" void* fn_02c1363c(void* context, int index) {
    RecordList* list = static_cast<Owner*>(context)->list;
    if (contains(list, index)) return &list->records[index];
    return &data_105101d0;
}
