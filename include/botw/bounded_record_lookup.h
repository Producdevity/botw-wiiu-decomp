#ifndef BOTW_BOUNDED_RECORD_LOOKUP_H
#define BOTW_BOUNDED_RECORD_LOOKUP_H

namespace bounded_record_lookup {

struct KeyRecord {
    unsigned char prefix[8];
    const unsigned char* key;
};

struct ValueRecord {
    unsigned char prefix[4];
    const void* value;
    unsigned char suffix[4];
};

template <typename Record>
struct RecordArray {
    unsigned int count;
    const Record* records;
};

struct RecordTables {
    unsigned char prefix[12];
    RecordArray<KeyRecord> keys;
    RecordArray<ValueRecord> values;
};

typedef char KeyRecordSize[sizeof(KeyRecord) == 12 ? 1 : -1];
typedef char ValueRecordSize[sizeof(ValueRecord) == 12 ? 1 : -1];
typedef char RecordTablesSize[sizeof(RecordTables) == 28 ? 1 : -1];

}

#endif
