namespace {

struct Record {
    unsigned char bytes[208];
};

typedef char RecordSize[sizeof(Record) == 208 ? 1 : -1];

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
    unsigned char prefix[36];
    RecordList* list;
};

}

extern "C" Record data_1051021c;

static bool contains(const RecordList* list, int index) {
    return list != 0 && list->count > index;
}

extern "C" void* fn_02c13674(void* context, int index) {
    RecordList* list = static_cast<Owner*>(context)->list;
    if (contains(list, index)) return &list->records[index];
    return &data_1051021c;
}
